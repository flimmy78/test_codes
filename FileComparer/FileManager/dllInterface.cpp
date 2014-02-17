// stdafx.cpp : source file that includes just the standard includes
// FileManager.pch will be the pre-compiled header
// stdafx.obj will contain the pre-compiled type information

#include "stdafx.h"

// TODO: reference any additional headers you need in STDAFX.H
// and not in this file


#include "dllInterface.h"
#include "fileManager.h"

DllInterface::DllInterface()
{
	ACE::init();
	m_fileManager = new FileManager();
}


DllInterface::~DllInterface()
{

	ACE::fini();
	delete m_fileManager;
	m_fileManager = 0;
}

void DllInterface::start(CallBackToOwner notifyFunc)
{
	m_fileManager->regisgerCallBack(notifyFunc);
	m_fileManager->startProcess();
}

int DllInterface::parseCmd(const char const*msgType,const char const*msgValue)
{
	msgInfo msg;
	msg.type = MSG_None;
	msg.value = msgValue;
	if (cmdLoadAllVolume == msgType)
	{
		return m_fileManager->loadAllVolume();
	}
	if (cmdUpdateSelectCondition == msgType)
	{
		return m_fileManager->setSelectCondition(msgValue);
	}

	if (cmdShowMoreItems == msgType)
	{
		if (std::string::npos != msg.value.find("=findSameFiles"))
		{
			msg.type = MSG_ShowMoreSameItems;
		}
		else
			msg.type = MSG_ShowMoreItems;
	}
	else if (cmdSortShowItems == msgType)
	{
		msg.type = MSG_SortFileList;
		m_fileManager->sortFileList(msgValue);	// using ui thread sort.
		return 0;
	}
	else if (cmdGetSameFileAllPaths == msgType)
	{
		msg.type = MSG_GetSameFileAllPaths;
	}
	else if (cmdSetLoadVolume == msgType)
	{
		msg.type = MSG_SetLoadVolume;
	}

	m_fileManager->addMessage(msg);
	return 0;
}

//--------------------------------------For Dll----------------------------------


int initService(CallBackToOwner callBack)
{
	g_callBackToOwner = callBack;
	DllInterfaceSingleton::instance()->start(callBack);
	return 0;
}

int finiService()
{
	DllInterfaceSingleton::close();
	return 0;
}

int postMessageToService(const char const*msgType, const char const*msgValue)
{
	std::string type = msgType;
	if (type == DirectCallBack)
	{
		return g_callBackToOwner(msgType, msgValue);
	}
	return DllInterfaceSingleton::instance()->parseCmd(msgType, msgValue);
}

