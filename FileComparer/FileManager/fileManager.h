// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

#include "targetver.h"
#include "ace/Thread_Semaphore.h"
#include "ace/Thread_Mutex.h"
#include "ace/Task.h"
#include "dllInterface.h"

#include "folderReader.h"
#include "diskReader.h"
#include "fileInfo.h"
#include <vector>
#include <list>
#include <map>

const int SHOW_FILE_ITEM_NUM = 100;

enum msgTypes{
	MSG_None = 1,
	MSG_ShowFileList,
	MSG_UpdateSelectCondition,
	MSG_SortFileList,
	MSG_ShowMoreItems,
	MSG_ShowSameFileList,
	MSG_ShowMoreSameItems,
	MSG_GetSameFileAllPaths,
	MSG_SetLoadVolume,
};

const std::string ORDERFILE_DESC = "DESC";
const std::string ORDERFILE_NONE = "NONE";
const std::string ORDERFILE_NAME = "NAME";
const std::string ORDERFILE_SIZE = "SIZE";
const std::string ORDERFILE_PATH = "PATH";
const std::string ORDERFILE_CREATEDATE = "CREATEDATE";
const std::string ORDERFILE_MODIFYDATE = "MODIFYDATE";
const std::string ORDERFILE_LASTACCESSDATE = "LASTACCESSDATE";

struct msgInfo
{
	msgTypes	type;
	std::string	value;
};

struct NodeItem
{
	FileInfo* value;
	NodeItem* next;
	NodeItem(){value = 0; next = 0;};
};

struct SortNode
{
	NodeItem* head;
	NodeItem* rear;
	int	count;
	SortNode(){head = 0; rear = 0; count = 0;};
};

class DiskReader;
class ThreadWorker;

class FileManager: public ACE_Task_Base
{
public:
	FileManager();
	~FileManager();

	void startProcess();
	void stopProcess();
	void regisgerCallBack(CallBackToOwner notifyFunc);

	int setSelectCondition(std::string newCondition);
	int loadAllVolume();
	void showMoreItems();

	void showFileList(int fromIndex = 0);
	void sortFileList(std::string sortKeys);

	int addMessage(msgInfo msg);

	void findSameFiles();
	void showSameFiles(int fromIndex);

private:
	virtual int svc();

	void loadVolumeFiles(std::string volume);	// eg "E:"
	void updateSelectCondition();
	void getSameFileAllPaths(std::string msg);	//using vector index.

	volatile bool			m_bRunning;
	ACE_Thread_Semaphore	m_semaphore;
	ACE_Thread_Mutex		m_queueLock;
	CallBackToOwner			m_notifyFunc;

	DiskReader				m_diskReader;
	DuLinkList				m_fileList;
	std::map<DWORDLONG, FileInfo*>	m_fileMap;
	std::list<msgInfo>		m_msgList;

	std::vector<FileInfo*>	m_selectedFiles;
	int						m_ShowedItemCount;

	std::string				m_selectCondition;
	std::string				m_newSelectCondition;

	std::vector<SortNode*>	m_findSameFiles;	//order by size.
	int						m_showedSameItemCount;

	ThreadWorker*			m_findSameFileThread;
};

class ThreadWorker : public ACE_Task_Base
{
public:
	ThreadWorker(FileManager* owner){m_owner = owner;};
	virtual int svc(){m_owner->findSameFiles(); return 0;};
private:
	FileManager* m_owner;
};
