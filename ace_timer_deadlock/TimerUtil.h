#ifndef TIMER_UTIL_H
#define TIMER_UTIL_H


	#include "ace/ACE.h"
	#include "ace/Thread_Manager.h"
	#include "ace/Timer_Heap.h"
	#include "ace/Timer_Queue.h"
	#include "ace/Timer_Queue_Adapters.h"


class TimerUtil:public ACE_Event_Handler
{
public:
	TimerUtil();
	virtual ~TimerUtil();
	int start(int sec,int interval);
	int  handle_timeout ( const ACE_Time_Value &tv, const void *constArg );
private:
	ACE_Thread_Timer_Queue_Adapter<ACE_Timer_Heap>	m_activeQueue;
	ACE_SYNCH_RECURSIVE_MUTEX mutex_;
};

#endif