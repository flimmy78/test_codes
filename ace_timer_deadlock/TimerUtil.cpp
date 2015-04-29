#include "TimerUtil.h"


TimerUtil::TimerUtil()
{
	m_activeQueue.activate();
}


TimerUtil::~TimerUtil()
{
	unsigned long attemptCount = 0;

        // Deactivate the active queue and wait for its thread to terminate.
        // It is done manually to overcome an observed problem where using the
        // queues wait method would block indefinitely as the condition did not
        // seem to be signalled to allow the thread to terminate.
        do
        {
            m_activeQueue.deactivate();
            ACE_OS::sleep( 100 );
        } 
		while ( ( 0 < m_activeQueue.thr_count() ) && ( 10 >= ++attemptCount ) );
}

int TimerUtil::start(int sec,int x)
{
	printf("start in\n");
	ACE_Time_Value interval = ACE_Time_Value (sec, 0);
    ACE_Time_Value firstRun = ACE_OS::gettimeofday () + interval;

	ACE_GUARD_RETURN (ACE_SYNCH_RECURSIVE_MUTEX, guard, this->mutex_, -1);

	m_activeQueue.schedule( this, 
			NULL,  
			firstRun,
			ACE_Time_Value::zero);
	printf("start out\n");
}


int TimerUtil::handle_timeout ( const ACE_Time_Value &tv, const void *constArg )
{
	printf("handle_timeout in\n");
	ACE_OS::sleep(10);
	ACE_GUARD_RETURN (ACE_SYNCH_RECURSIVE_MUTEX, guard, this->mutex_, -1);
	printf("handle_timeout out\n");
	return 0;
}