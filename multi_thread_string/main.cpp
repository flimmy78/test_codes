
//#include   <iostream> 
#include   <string> 
#include <AFX.h>
//#include   <windows.h> 
#include <sys/timeb.h>


int g_tick;
long g_count;
std::string g_str;

//   线程函数 
DWORD   WINAPI   Thread(void* ptr) 
{ 	int n = 1000000;
	while(n--) 
	{
		InterlockedIncrement(&g_count);
		//++g_count;
		std::string tmp = g_str;

		if (tmp != "one" && tmp != "three")
		{
			int b = 2;
		}
	} 
	return 0; 
}

DWORD   WINAPI   Thread2(void* ptr) 
{ 	int n = 0;
	while(true) 
	{
		++n;
		if (n % 2)
			g_str = "one";
		else
			g_str = "three";
		if (g_str != "one" && g_str != "three")
		{
			int b = 2;
		}
	} 
	return 0; 
}

int   main() 
//   旧式string多线程安全测试 
{ 
	g_str = "global string";
	printf("%s\n", g_str.c_str());

	
	int* id = new int;
	HANDLE h2 = CreateThread( 
		NULL, 
		0, 
		(DWORD   (WINAPI   *)(void*))Thread2, 
		(void*)&id, 
		0, 
		NULL   );

	//   开100个线程 
	const   int   nThread = 5; 
	HANDLE hThread[nThread]; 

	g_tick = GetTickCount();
	g_count = 0;

	for   (   int   i=0;   i <nThread;   ++i   )
	{
		int* id = new int;
		*id = i;
		hThread[i]   =   CreateThread( 
		NULL, 
		0, 
		(DWORD   (WINAPI   *)(void*))Thread, 
		(void*)&id, 
		0, 
		NULL   );
	}

	int i = 0;
/*
	//   主线程睡眠 
	Sleep(1000000); 
	//   释放句柄 
	for   (   i=0;   i <nThread;   ++i   ) 
		CloseHandle(   hThread[i]   ); 
	*/
	for ( i = 0; i < nThread; ++i)
		WaitForSingleObject(hThread[i], 10000000);

	TerminateThread(h2, 0);
	CloseHandle(h2);

	printf("g_count=%d\n", g_count);
	printf("%s\n", g_str.c_str());

	return   0;
}
