#ifndef UI_UPDATE_PROCESSOR_H__
#define UI_UPDATE_PROCESSOR_H__

#include <deque>
#include "ace/OS.h"
#include "ace/Thread.h"
#include "ace/Task.h"
#include "ace/Thread_Semaphore.h"
#include "ace/Thread_Mutex.h"
#include "IDataUpdateObserver.h"
#include "DataManager.h"
#include "Iec104Server.h"

typedef std::deque<std::pair<std::string,std::string> > UiMsgQue;
typedef std::pair<std::string,std::string>				UiMsgQueItem;


class ConnectionManager;

class UiUpdateProcessor: public ACE_Task_Base,public IDataUpdateObserver
{
public:
	explicit UiUpdateProcessor(const DataManager& dataManager, const ConnectionManager& connectManager);
	~UiUpdateProcessor();

	void		regisgerCallBack(CallBackToOwner notifyFunc);
	void		startProcess();
	void		stopProcess();
	virtual void notityDataUpdate(unsigned long resourceKey);
	virtual void notityConnectionUpdate(unsigned long resourceKey);
private:
	virtual int svc();
	
	void		 notifyAll();
private:
	const DataManager&			m_dataManager;
	const ConnectionManager&	m_connectionManager;
	UiMsgQue				m_msgQue;
	ACE_Thread_Semaphore	m_semaphore;
	ACE_Thread_Mutex		m_queueLock;
	volatile	bool		m_isEnable;
	CallBackToOwner			m_notifyFunc;

};

#endif