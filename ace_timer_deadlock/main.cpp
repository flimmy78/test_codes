
#include "stdio.h"

#include "ace/ACE.h"
#include "ace/Thread_Manager.h"
#include "ace/Timer_Heap.h"
#include "ace/Timer_Queue.h"
#include "ace/Timer_Queue_Adapters.h"
#include "TimerUtil.h"

typedef ACE_Thread_Timer_Queue_Adapter<ACE_Timer_Heap>	ActiveQueue;

int main(int argc, char* argv[])
{
	ACE::init();
	TimerUtil timer;

	timer.start(2, 5);

	ACE_OS::sleep(3);

	timer.start(2, 5);
	ACE_OS::sleep(999999);

	ACE::fini();
	return 0;
}

