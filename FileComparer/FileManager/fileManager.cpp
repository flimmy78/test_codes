// stdafx.cpp : source file that includes just the standard includes
// FileManager.pch will be the pre-compiled header
// stdafx.obj will contain the pre-compiled type information

#include "stdafx.h"

// TODO: reference any additional headers you need in STDAFX.H
// and not in this file


#include "FileManager.h"
#include <algorithm>

FileManager::FileManager():
m_bRunning(false),
m_semaphore(0),
m_queueLock(NULL),
m_diskReader("")
{
	m_fileList.cleanUp();
	m_fileMap.clear();
	m_msgList.clear();

	m_selectedFiles.clear();
	m_ShowedItemCount = 0;

	m_selectCondition = "no selected condition, all file match. ~!@#$%^&*()_+";
	m_newSelectCondition = "";

	m_findSameFiles.clear();
	m_showedSameItemCount = 0;

	m_findSameFileThread = new ThreadWorker(this);
}


FileManager::~FileManager()
{
	stopProcess();
}

void FileManager::startProcess()
{
	m_bRunning = true; 
	this->activate();
}

void FileManager::stopProcess()
{
	if(true == m_bRunning)
	{
		m_bRunning = false;
		m_semaphore.release();
		this->wait();
	}
}

int FileManager::svc()
{
	while(m_bRunning)
	{
		m_semaphore.acquire();
		if(false == m_bRunning)
		{
			break;
		}
		msgInfo msg = m_msgList.front();
		m_msgList.pop_front();
		
		if (MSG_ShowFileList == msg.type)
		{
			showFileList(0);
		}
		else if (MSG_UpdateSelectCondition == msg.type)
		{
			updateSelectCondition();
		}
		else if (MSG_SortFileList == msg.type)
		{
			sortFileList(msg.value);
		}
		else if (MSG_ShowMoreItems == msg.type)
		{
			showFileList(m_ShowedItemCount);
		}
		else if (MSG_ShowSameFileList == msg.type)
		{
			showSameFiles(0);
		}
		else if (MSG_ShowMoreSameItems == msg.type)
		{
			showSameFiles(m_showedSameItemCount);
		}
		else if (MSG_GetSameFileAllPaths == msg.type)
		{
			getSameFileAllPaths(msg.value);
		}
		else if (MSG_SetLoadVolume == msg.type)
		{
			loadVolumeFiles(msg.value);
		}
	}
	return 0;
}

void FileManager::regisgerCallBack(CallBackToOwner notifyFunc)
{
	m_notifyFunc = notifyFunc;
}

int FileManager::addMessage(msgInfo msg)
{
	m_msgList.push_back(msg);
	m_semaphore.release();
	return 0;
}

int FileManager::setSelectCondition(std::string newCondition)
{
	if (m_newSelectCondition != newCondition)
	{
		m_newSelectCondition = newCondition;
		msgInfo msg;
		msg.type = MSG_UpdateSelectCondition;
		addMessage(msg);
	}
	return 0;
}

int FileManager::loadAllVolume()
{
	std::string vols = m_diskReader.loadAllVolume();
	m_notifyFunc(cmdShowStatusMessage.c_str(), vols.c_str());
	return 0;
}

void FileManager::loadVolumeFiles(std::string volume)
{
	m_fileList.cleanUp();
	m_diskReader.EnumUsnRecord(volume.c_str(), m_fileList);
	char buf[500];
	sprintf(buf, "loaded %d files from volume %s", m_fileList.size(), volume.c_str());
	m_notifyFunc(cmdShowStatusMessage.c_str(), buf);

	std::vector<FileInfo*>	vctFiles;
	int nSize = m_fileList.size();
	vctFiles.reserve(nSize);
	
	FileInfo* p = (FileInfo*)m_fileList.head();
	while (p)
	{
		p->NameUppered = p->Name.c_str();
		transform(p->NameUppered.begin(), p->NameUppered.end(), p->NameUppered.begin(), toupper);
		vctFiles.push_back(p);
		m_fileMap[p->FileRefNo] = p;
		p = (FileInfo*)m_fileList.next(p);
	}

	FileInfo* stack[64];
	FileInfo* cur;
	std::map<DWORDLONG, FileInfo*>::const_iterator it;
	int stackCount = 0;
	for (int i = 0; i < nSize; ++i)
	{
		cur = vctFiles[i];
		if (false == cur->pathSetted)
		{
			stack[stackCount++] = cur;
			while (stackCount)
			{
				cur = stack[stackCount - 1];
				it = m_fileMap.find(cur->ParentRefNo);
				if (m_fileMap.end() == it)
				{
					cur->path = cur->path + "\\" + cur->Name;
					cur->pathSetted = true;
					--stackCount;
				}
				else
				{
					p = it->second;
					if (p->pathSetted)
					{
						cur->path = p->path + "\\" + cur->Name;
						cur->pathSetted = true;
						--stackCount;
					}
					else
					{
						stack[stackCount++] = p;
					}
				}
			}
		}
	}

	m_findSameFileThread->activate();

	msgInfo msg;
	msg.type = MSG_UpdateSelectCondition;
	addMessage(msg);
}

void FileManager::showFileList(int fromIndex)
{
	char buf[1024] = {0};
	sprintf(buf, "tabName=%s,", UiTabName_showAllFiles.c_str());
	if (0 == fromIndex)
	{
		m_notifyFunc(cmdFileListItemClear.c_str(), buf);
	}
	int i = 0, j = 0, nSize = m_selectedFiles.size();
	for (i = fromIndex, j = 0; i < nSize && j < SHOW_FILE_ITEM_NUM; ++i, ++j)
	{
		FileInfo& f = *m_selectedFiles[i];
		SYSTEMTIME cDate;
		FileTimeToSystemTime(&f.createDate, &cDate);
		SYSTEMTIME mDate;
		FileTimeToSystemTime(&f.modifyDate, &mDate);
		SYSTEMTIME lwDate;
		FileTimeToSystemTime(&f.lastAccessTime, &lwDate);
		memset(buf, 0, 1024);
		sprintf(buf,
			"tabName=%s, RowRefIndex=%I64u, ParentRefNum=%I64u, ParentRefNo=%I64u, name=%s, FileAttributes=%d, size=%d, createDate=%d-%02d-%02d %02d:%02d:%02d, modifyDate=%d-%02d-%02d %02d:%02d:%02d, lastAccessDate=%d-%02d-%02d %02d:%02d:%02d, path=%s,",
			UiTabName_showAllFiles.c_str(),
			f.FileRefNo, f.ParentRefNo, f.ParentRefNo, f.Name.c_str(), f.FileAttributes, f.fileSize,
			cDate.wYear, cDate.wMonth, cDate.wDay, cDate.wHour, cDate.wMinute, cDate.wSecond,
			mDate.wYear, mDate.wMonth, mDate.wDay, mDate.wHour, mDate.wMinute, mDate.wSecond,
			lwDate.wYear, lwDate.wMonth, lwDate.wDay, lwDate.wHour, lwDate.wMinute, lwDate.wSecond,
			f.path.c_str()); 
		m_notifyFunc(cmdFileListItemAdd.c_str(), buf);
	}
	m_ShowedItemCount = i;
	memset(buf, 0, 1024);
	sprintf(buf, "showed %d/%d files.", m_ShowedItemCount, nSize);
	m_notifyFunc(cmdShowStatusMessage.c_str(), buf);
}

bool operator < (FILETIME a, FILETIME b)
{
	return *(ULONGLONG*)(&a) < *(ULONGLONG*)(&b);
}

bool operator > (FILETIME a, FILETIME b)
{
	return *(ULONGLONG*)(&a) > *(ULONGLONG*)(&b);
}

void FileManager::sortFileList(std::string s)
{
	std::string sortKeys = s;
	std::transform(sortKeys.begin(), sortKeys.end(), sortKeys.begin(), ::toupper);

	struct order_name_asce
    {
        bool operator()( const FileInfo* a, const FileInfo* b ) const
        {
            return a->Name < b->Name;
        }
    };
	struct order_name_desc
    {
        bool operator()( const FileInfo* a, const FileInfo* b ) const
        {
            return a->Name > b->Name;
        }
    };
	struct order_size_asce
    {
        bool operator()( const FileInfo* a, const FileInfo* b ) const
        {
            if( a->fileSize != b->fileSize )
                return a->fileSize < b->fileSize;

            return a->Name < b->Name;
        }
    };
	struct order_size_desc
    {
        bool operator()( const FileInfo* a, const FileInfo* b ) const
        {
            if( a->fileSize != b->fileSize )
                return a->fileSize > b->fileSize;

            //if( (a->FileAttributes & FILE_ATTRIBUTE_DIRECTORY) != (b->FileAttributes & FILE_ATTRIBUTE_DIRECTORY) )
            //    return (a->FileAttributes & FILE_ATTRIBUTE_DIRECTORY) > (b->FileAttributes & FILE_ATTRIBUTE_DIRECTORY);

            return a->Name < b->Name;
        }
    };
	struct order_path_asce
    {
        bool operator()( const FileInfo* a, const FileInfo* b ) const
        {
            return a->path < b->path;
        }
    };
	struct order_path_desc
    {
        bool operator()( const FileInfo* a, const FileInfo* b ) const
        {
            return a->path > b->path;
        }
    };
	struct order_createDate_asce
    {
        bool operator()( const FileInfo* a, const FileInfo* b ) const
        {
            return a->createDate < b->createDate;
        }
    };
	struct order_createDate_desc
    {
        bool operator()( const FileInfo* a, const FileInfo* b ) const
        {
            return a->createDate > b->createDate;
        }
    };
	struct order_modifyDate_asce
    {
        bool operator()( const FileInfo* a, const FileInfo* b ) const
        {
            return a->modifyDate < b->modifyDate;
        }
    };
	struct order_modifyDate_desc
    {
        bool operator()( const FileInfo* a, const FileInfo* b ) const
        {
            return a->modifyDate > b->modifyDate;
        }
    };
	struct order_lastAccessDate_asce
    {
        bool operator()( const FileInfo* a, const FileInfo* b ) const
        {
            return a->lastAccessTime < b->lastAccessTime;
        }
    };
	struct order_lastAccessDate_desc
    {
        bool operator()( const FileInfo* a, const FileInfo* b ) const
        {
            return a->lastAccessTime > b->lastAccessTime;
        }
    };

	if (std::string::npos != sortKeys.find(ORDERFILE_NAME))
	{
		if(std::string::npos != sortKeys.find(ORDERFILE_DESC))
			std::sort( m_selectedFiles.begin(), m_selectedFiles.end(), order_name_desc());
		else
			std::sort( m_selectedFiles.begin(), m_selectedFiles.end(), order_name_asce());
	}
	else if(std::string::npos != sortKeys.find(ORDERFILE_SIZE))
	{
		if(std::string::npos != sortKeys.find(ORDERFILE_DESC))
			std::sort( m_selectedFiles.begin(), m_selectedFiles.end(), order_size_desc());
		else
			std::sort( m_selectedFiles.begin(), m_selectedFiles.end(), order_size_asce());
	}
	else if(std::string::npos != sortKeys.find(ORDERFILE_PATH))
	{
		if(std::string::npos != sortKeys.find(ORDERFILE_DESC))
			std::sort( m_selectedFiles.begin(), m_selectedFiles.end(), order_path_desc());
		else
			std::sort( m_selectedFiles.begin(), m_selectedFiles.end(), order_path_asce());
	}
	else if(std::string::npos != sortKeys.find(ORDERFILE_CREATEDATE))
	{
		if(std::string::npos != sortKeys.find(ORDERFILE_DESC))
			std::sort( m_selectedFiles.begin(), m_selectedFiles.end(), order_createDate_desc());
		else
			std::sort( m_selectedFiles.begin(), m_selectedFiles.end(), order_createDate_asce());
	}
	else if(std::string::npos != sortKeys.find(ORDERFILE_MODIFYDATE))
	{
		if(std::string::npos != sortKeys.find(ORDERFILE_DESC))
			std::sort( m_selectedFiles.begin(), m_selectedFiles.end(), order_modifyDate_desc());
		else
			std::sort( m_selectedFiles.begin(), m_selectedFiles.end(), order_modifyDate_asce());
	}
	else if(std::string::npos != sortKeys.find(ORDERFILE_LASTACCESSDATE))
	{
		if(std::string::npos != sortKeys.find(ORDERFILE_DESC))
			std::sort( m_selectedFiles.begin(), m_selectedFiles.end(), order_lastAccessDate_desc());
		else
			std::sort( m_selectedFiles.begin(), m_selectedFiles.end(), order_lastAccessDate_asce());
	}

	msgInfo msg;
	msg.type = MSG_ShowFileList;
	addMessage(msg);
}

void FileManager::updateSelectCondition()
{
	std::string new_ = m_newSelectCondition;
	transform(new_.begin(), new_.end(), new_.begin(), toupper);
	if (new_ == m_selectCondition)
	{
		return ;
	}

	m_selectedFiles.reserve(m_fileList.size());
	m_selectedFiles.clear();

	FileInfo* p = (FileInfo*)m_fileList.head();
	while (p)
	{
		//std::string s = p->Name;
		if ("" == new_ || std::string::npos != p->NameUppered.find(new_))
		{
			m_selectedFiles.push_back(p);
		}

		p = (FileInfo*)m_fileList.next(p);
	}

	m_selectCondition = new_;

	msgInfo msg;
	msg.type = MSG_ShowFileList;
	addMessage(msg);
}

void FileManager::findSameFiles()
{
	std::vector<FileInfo*> vec;
	vec.clear();

	FileInfo* p = (FileInfo*)m_fileList.head();
	while (p)
	{
		if (32 == p->FileAttributes)// just for file.
		{
			vec.push_back(p);
		}
		p = (FileInfo*)m_fileList.next(p);
	}

	struct order_size
    {
        bool operator()( const FileInfo* a, const FileInfo* b ) const
        {
            if( a->fileSize != b->fileSize )
                return a->fileSize > b->fileSize;
            return a->Name < b->Name;
        }
    };
	std::sort( vec.begin(), vec.end(), order_size());

	
	int nSize = vec.size();
	m_findSameFiles.clear();
	m_findSameFiles.reserve(nSize);

	int i = 0, pushed = 0;
	while (i < nSize)
	{
		FileInfo* fi = vec[i++];
		SortNode* tn = new SortNode();
		tn->count = 1;
		tn->head = new NodeItem();
		tn->head->value = fi;
		tn->rear = tn->head;
		m_findSameFiles.push_back(tn);
		while (i < nSize)
		{
			if (fi->fileSize == vec[i]->fileSize && fi->Name == vec[i]->Name)
			{
				NodeItem* ni = new NodeItem();
				ni->value = vec[i++];
				tn->rear->next = ni;
				tn->rear = ni;
				tn->count = tn->count + 1;
			}
			else
			{
				break;
			}
		}
	}

	struct order_count
    {
        bool operator()( const SortNode* a, const SortNode* b ) const
        {
            if( a->count != b->count )
                return a->count > b->count;
            return a->head->value->fileSize < b->head->value->fileSize;
        }
    };
	std::sort(m_findSameFiles.begin(), m_findSameFiles.end(), order_count());

	msgInfo msg;
	msg.type = MSG_ShowSameFileList;
	addMessage(msg);
}

void FileManager::showSameFiles(int fromIndex)
{
	char buf[1024] = {0};
	sprintf(buf, "tabName=%s,", UiTabName_findSameFiles.c_str());
	if (0 == fromIndex)
	{
		m_notifyFunc(cmdFileListItemClear.c_str(), buf);
	}
	int i = 0, j = 0, nSize = m_findSameFiles.size();
	for (i = fromIndex, j = 0; i < nSize && j < SHOW_FILE_ITEM_NUM; ++i, ++j)
	{
		SortNode* sn = m_findSameFiles[i];
		memset(buf, 0, 1024);
		sprintf(buf,
			"tabName=%s, RowRefIndex=%d, name=%s, times=%d, size=%d, path=%s,",
			UiTabName_findSameFiles.c_str(),
			i,
			sn->head->value->Name.c_str(), sn->count, sn->head->value->fileSize, sn->head->value->path.c_str()); 
		m_notifyFunc(cmdFileListItemAdd.c_str(), buf);
	}
	m_showedSameItemCount = i;
	memset(buf, 0, 1024);
	sprintf(buf, "showed %d/%d (same) files.", m_showedSameItemCount, nSize);
	m_notifyFunc(cmdShowStatusMessage.c_str(), buf);
}

void FileManager::getSameFileAllPaths(std::string msg)
{
	int index = atoi(msg.c_str());
	if (index < m_findSameFiles.size())
	{
		std::string paths = "";
		NodeItem* p = m_findSameFiles[index]->head;
		while (p)
		{
			if (paths.length() > 0)
				paths = paths + ";";
			paths = paths + p->value->Name;
			paths = paths + ",";
			paths = paths + p->value->path;
			p = p->next;
		}
		m_notifyFunc(cmdShowSameFileAllPaths.c_str(), paths.c_str());
	}
}
