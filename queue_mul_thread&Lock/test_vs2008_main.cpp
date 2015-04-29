// test_vs2008_string.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "winThread.h"
#include "timeCounter.h"


#include <time.h>
#include <string>
#include <queue>
#include <map>
#include <vector>
#include <iostream>
#include <stdio.h>

using namespace std;

/*
LONG __cdecl InterlockedCompareExchange(
  _Inout_  LONG volatile *Destination,
  _In_     LONG Exchange,
  _In_     LONG Comparand
);
*/

LONG g_lock;
class myGLockTask : public IThreadTask
{
public:
	void executeTask()
	{
		timeCounter a("myGLockTask");
		while (1 == InterlockedCompareExchange(&g_lock, 1, 0))
		{
		}
		printf ("finished executeTask, a=%d\n", a);
	}
};

void testICE()
{
	g_lock = 1;
	{
		myGLockTask task;
		WinThread t(&task);
		t.start();

		Sleep(5000);
		g_lock = 0;

		t.waitFinish(1000 * 1000);
	}
};

class ICELockGuard
{
public:
	ICELockGuard(LONG& lock)
		:m_lock(lock)
	{
		while (1 == InterlockedCompareExchange(&m_lock, 1, 0));
	};
	~ICELockGuard()
	{
		m_lock = 0;
	};
private:
	LONG& m_lock;
};

class CSLockGuard
{
public:
	CSLockGuard(CRITICAL_SECTION& lock)
		:m_lock(lock)
	{
		EnterCriticalSection(&m_lock);
	};
	~CSLockGuard()
	{
		LeaveCriticalSection(&m_lock);
	};
private:
	CRITICAL_SECTION& m_lock;
};

////////////////////////////////////

class IQueue
{
public:
	virtual ~IQueue(){};
	virtual void push_back(int v) = 0;
	virtual int pop_top() = 0;
};

class myQueueTask : public IThreadTask
{
public:
	myQueueTask(IQueue* q)
	{
		m_queue = q;
	}

	void executeTask()
	{
		int times = 100 * 10000;
		int sum = 0;
		while (times)
		{
			m_queue->push_back(times);
			sum = sum + 1;
			m_queue->pop_top();
			--times;
		}
		printf ("finished executeTask, sum=%d\n", sum);
	}
private:
	IQueue* m_queue;
};


class ICEQueue : public IQueue
{
public:
	ICEQueue()
		:m_lock(0)
	{
	};

	~ICEQueue()
	{
		m_lock = 0;
	};

	void push_back(int v)
	{
		ICELockGuard g(m_lock);
		//m_queue.push(v);
		int x = v;
	}

	int pop_top()
	{
		ICELockGuard g(m_lock);
		int v = 0;
		//v = m_queue.front();
		//m_queue.pop();
		return v;
	}

private:
	LONG m_lock;
	std::queue<int> m_queue;
};

class CSQueue : public IQueue
{
public:
	CSQueue()
	{
		if (!InitializeCriticalSectionAndSpinCount(&m_lock, 0x00000400))
		{
			printf("failed InitializeCriticalSectionAndSpinCount\n");
			return;
		}
	};

	~CSQueue()
	{
		DeleteCriticalSection(&m_lock);
	};

	void push_back(int v)
	{
		CSLockGuard g(m_lock);
		//m_queue.push(v);
		int x = v;
	}

	int pop_top()
	{
		CSLockGuard g(m_lock);
		int v = 0;
		//v = m_queue.front();
		//m_queue.pop();
		return v;
	}

private:
	CRITICAL_SECTION m_lock;
	std::queue<int> m_queue;
};

void run_mul_thread(int threads_num, IThreadTask* task)
{
	WinThread** threads = new WinThread*[threads_num];
	int i = 0;
	for (i = 0; i < threads_num; ++i)
	{
		threads[i] = new WinThread(task);
	}
	for (i = 0; i < threads_num; ++i)
	{
		threads[i]->start();
	}
	for (i = 0; i < threads_num; ++i)
	{
		threads[i]->waitFinish(1000 * 1000);
	}
}

class TheNode
{
public:
	TheNode()
	{
		next = 0;
		v = 0;
	};

	TheNode * next;
	int v;
};

void testCSLocktime()
{
	int times = 1000 * 10000;
	int i, j;
	CRITICAL_SECTION lock;
	if (!InitializeCriticalSectionAndSpinCount(&lock, 0x00000400))
	{
		printf("failed InitializeCriticalSectionAndSpinCount\n");
		return;
	}

	{
		timeCounter a("CSLockGuard");
		for (i = 0; i < times; ++i)
		{
			CSLockGuard g(lock);
		}
	}
	{
		timeCounter a("no CSLockGuard");
		for (i = 0; i < times; ++i)
		{
			j = i;
		}
	}
	{
		timeCounter a("CSLockGuard2");
		for (i = 0; i < times; ++i)
		{
			CSLockGuard g(lock);
		}
	}
	{
		timeCounter a("no CSLockGuard2");
		for (i = 0; i < times; ++i)
		{
			j = i;
		}
	}
}

int _tmain(int argc, _TCHAR* argv[])
{
	//testICE();
	
	int threads = 1;

	{
		timeCounter a("ICEQueue");
		ICEQueue ice;
		myQueueTask task(&ice);
		run_mul_thread(threads, &task);
	}

	{
		timeCounter a("CSQueue");
		CSQueue cs;
		myQueueTask task(&cs);
		
		run_mul_thread(threads, &task);
	}
	
	{
		timeCounter a("ICEQueue");
		ICEQueue ice;
		myQueueTask task(&ice);
		run_mul_thread(threads, &task);
	}

	{
		timeCounter a("CSQueue");
		CSQueue cs;
		myQueueTask task(&cs);
		
		run_mul_thread(threads, &task);
	}

	TheNode* root = 0;
	TheNode* node = new TheNode;
	
	InterlockedCompareExchange((LONG *)(&root), (LONG)node, 0);
	
	testCSLocktime();
	return 0;
}
