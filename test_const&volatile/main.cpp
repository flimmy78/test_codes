
//#include   <iostream> 
//#include   <string> 
#include <AFX.h>
#include <sys/timeb.h>

//volatile int running;
int running;

class TestClass
{
public:
	bool m_x;
};

DWORD WINAPI Thread(void* ptr) 
{
	TestClass *testObject = static_cast<TestClass*> (ptr);
	printf("ready for sleep\n");
	Sleep(1000 * 3);
	running = 0;
	testObject->m_x = true;
	printf("set Running = 0\n");
	return 0; 
} 

void run1(TestClass&);
void test_const();

int   main()
{ 
	test_const();
	int g_tick = GetTickCount();

	running = 1;
	TestClass testObject;
	testObject.m_x = false;

	int* id = new int;
	*id = 0;
	HANDLE tid =   CreateThread( 
		NULL, 
		0, 
		(DWORD   (WINAPI   *)(void*))Thread, 
		(void*)&testObject, 
		0, 
		NULL);

	while (1 == running)
	{
		int y = 2 + 2;
		//Sleep(1000 * 1);
		//printf("on running...\n");
	}
//	run1(testObject);
	printf("while out\n");
//WaitForSingleObject(hThread[i], 10000000);

	return   0;
}

void run1(TestClass& x)
{
	int y=0;
	while (true)
	{
		Sleep(1000 * 1);
		printf("on running...\n");
		x.m_x==true ? exit(0):y=1;
	}
}

void xx(volatile int a){int b = a;};

void test_const()
{//http://blog.csdn.net/wuliming_sc/article/details/3717017
	int tt;
	const int a = 2;
	//a = 3;
	int const b = 2;
	//b = 3;

	const int* p = &a;
	p = &b;
	//*p = 3;

	int const * p2 = &a;
	p2 = &b;
	//*p2 = 3;
	
	int* const p3 = &tt;
	//p3 = &tt;
	*p3 = 3;

	const int* const p4 = &tt;
	//p4 = &tt;
	//*p4 = 4;
}
