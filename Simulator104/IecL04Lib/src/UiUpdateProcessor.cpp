#include "UiUpdateProcessor.h"

UiUpdateProcessor::UiUpdateProcessor(const DataManager& dataManager,const ConnectionManager& connectManager)
:m_dataManager(dataManager),
m_connectionManager(connectManager),
m_semaphore(0),
m_queueLock(NULL),
m_isEnable(false),
m_notifyFunc(NULL)
{
	m_msgQue.clear();
}

UiUpdateProcessor::~UiUpdateProcessor()
{
	this->stopProcess();
	m_msgQue.clear();
}

void	UiUpdateProcessor::startProcess()
{
	m_isEnable = true; 
	this->activate();
}

void UiUpdateProcessor::stopProcess()
{
	if(true == m_isEnable)
	{
		m_isEnable = false;
		m_semaphore.release();
		{
			ACE_Guard<ACE_Thread_Mutex> guard(m_queueLock);
			m_semaphore.release(m_msgQue.size());
			m_msgQue.clear();
		}
		this->wait();
	}

}

int UiUpdateProcessor::svc()
{
	this->notifyAll();
	while(m_isEnable)
	{
		m_semaphore.acquire();
		if(false == m_isEnable)
		{
			break;
		}
		UiMsgQueItem queueItem;
		{
			ACE_Guard<ACE_Thread_Mutex> guard(m_queueLock);
			queueItem = m_msgQue.front();
			m_msgQue.pop_front();
		}

		if(NULL != m_notifyFunc)
		{
			(*m_notifyFunc)(queueItem.first.c_str(),queueItem.second.c_str());
		}
	}
	return 0;
}

void UiUpdateProcessor::notityDataUpdate(unsigned long resourceKey)
{
	if(NULL!=m_notifyFunc)
	{
		UiMsgQueItem msgItem;
		msgItem.first = "DataItemUpdate";
		msgItem.second = m_dataManager.getDisplayString(resourceKey);
		
		{
			ACE_Guard<ACE_Thread_Mutex> guard(m_queueLock);
			m_msgQue.push_back(msgItem);
			m_semaphore.release();
		}
	}
}

void UiUpdateProcessor::notityConnectionUpdate(unsigned long resourceKey)
{
	/*if(NULL!=m_notifyFunc)
	{
		UiMsgQueItem msgItem;
		msgItem.first = "DataItemUpdate";
		msgItem.second = m_connectionManager.getDisplayString(resourceKey);
		{
			ACE_Guard<ACE_Thread_Mutex> guard(m_queueLock);
			m_msgQue.push_back(msgItem);
			m_semaphore.release();
		}
	}*/
}

void UiUpdateProcessor::notifyAll()
{
	if(NULL != m_notifyFunc)
	{
		std::vector<std::string> dataTable = m_dataManager.getAllDisplayString();
		for(int index =0; index < dataTable.size(); ++index)
		{
			(*m_notifyFunc)("DataItemAdd", dataTable[index].c_str());
		}

		/*std::vector<std::string> connectionTable = m_connectionManager.getAllDisplayString();
		for(int index =0; index < connectionTable.size(); ++index)
		{
			(*m_notifyFunc)("DataItemAdd", connectionTable[index].c_str());
		}*/
	}
}

void UiUpdateProcessor::regisgerCallBack(CallBackToOwner notifyFunc)
{
	m_notifyFunc = notifyFunc;
}