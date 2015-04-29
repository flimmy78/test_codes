// test_vs2008_string.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <windows.h>
#include <time.h>
#include <string>
#include <queue>
#include <map>
#include <vector>
#include <iostream>
using namespace std;

#include <tlhelp32.h>
#include <stdio.h>
#include <Winbase.h>


BOOL setAllProcess();

void setCurrentProcess();
void test_cpu(int doTimes);

int _tmain(int argc, _TCHAR* argv[])
{
	int doTimes = 1 * 100 * 10000;
	setAllProcess();
	setCurrentProcess();
	test_cpu(doTimes);
	return 0;
}


BOOL setAllProcess( )
{ 
	/*得到所有进程的快照*/
	HANDLE hProcessSnap = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
	if(INVALID_HANDLE_VALUE == hProcessSnap)
	{
		cout<<"创建进程快照失败!"<<endl;
		return FALSE;
	}

	/*保存进程信息的结构体*/
	PROCESSENTRY32 ProEntry32;
	memset(&ProEntry32, 0, sizeof(ProEntry32));
	ProEntry32.dwSize = sizeof(ProEntry32);

	/*得到第一个进程的信息*/
	if(!Process32First(hProcessSnap, &ProEntry32))
	{
		cout<<"获取进程信息失败！"<<endl;
		CloseHandle(hProcessSnap);
		return FALSE;
	}

	/*显示所有的进程的相关信息*/
	do
	{
		/*显示进程名称*/
		//cout<<ProEntry32.szExeFile<<endl; 
		wprintf(L"%s\n", ProEntry32.szExeFile);
		HANDLE h = OpenProcess(PROCESS_ALL_ACCESS, FALSE, ProEntry32.th32ProcessID);
		SetProcessAffinityMask(h, 15);

	} while(Process32Next(hProcessSnap, &ProEntry32));

	CloseHandle( hProcessSnap );
	return TRUE;
}

void setCurrentProcess()
{
	
	unsigned int tidx = GetCurrentThreadId();
	HANDLE hx = OpenThread(THREAD_ALL_ACCESS, FALSE, tidx);
	unsigned int rx = SetThreadAffinityMask(hx, 8);// for 4 core;
	CloseHandle(hx);

	unsigned int pid = GetCurrentProcessId();
	HANDLE h = OpenProcess(PROCESS_ALL_ACCESS, FALSE, pid);
	BOOL t = SetProcessAffinityMask(h, 15);
	CloseHandle(h);
	unsigned int tid = GetCurrentThreadId();
	HANDLE h2 = OpenThread(THREAD_ALL_ACCESS, FALSE, tid);
	unsigned int r = SetThreadAffinityMask(h2, 8);
	CloseHandle(h2);
}

void test_cpu(int doTimes)
{
	while (doTimes > 0)
	{
		--doTimes;
		int i = 10000;
		while (i > 0)
		{
			double x = 20;
			double y = x * 30;
			--i;
		}
	}
}
