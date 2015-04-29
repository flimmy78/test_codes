
#ifndef MY_WIN_THREAD_H
#define MY_WIN_THREAD_H

#include <string>
#include <sys/timeb.h>
#include <windows.h>

class IThreadTask
{
public:
	virtual ~IThreadTask(){};
	virtual void executeTask() = 0;
};

class WinThread
{
public:
	WinThread(IThreadTask* task)
	{
		m_task = task;
		m_threadHandle = 0;
		m_threadId = 0;
	};

	~WinThread()
	{
		CloseHandle(m_threadHandle);
	};

	void start()
	{
		m_threadHandle = CreateThread(
			NULL, 
			0, 
			(DWORD (WINAPI *)(void*))&(WinThread::run),
			(void*)this, 
			0, 
			&m_threadId);
	};

	static DWORD WINAPI run(void* obj)
	{
		WinThread* myObj = (WinThread*)obj;

		printf("thread[%d] start running\n", myObj->m_threadId);
		if (myObj->m_task)
		{
			myObj->m_task->executeTask();
		}
		printf("thread[%d] finished\n", myObj->m_threadId);
		return 0;
	};

	void waitFinish(int dwMilliseconds)
	{
		WaitForSingleObject(m_threadHandle, dwMilliseconds);
		//TerminateThread(m_threadHandle, 0);
	};

private:
	HANDLE m_threadHandle;
	IThreadTask* m_task;
	DWORD m_threadId;
};
#endif
