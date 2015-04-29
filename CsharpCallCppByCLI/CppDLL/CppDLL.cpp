// CppDLL.cpp : Defines the entry point for the DLL application.
//

#include "stdafx.h"
#include "CppDLL.h"

#ifdef _MANAGED
#pragma managed(push, off)
#endif

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
					 )
{
	switch (ul_reason_for_call)
	{
	case DLL_PROCESS_ATTACH:
	case DLL_THREAD_ATTACH:
	case DLL_THREAD_DETACH:
	case DLL_PROCESS_DETACH:
		break;
	}
    return TRUE;
}

#ifdef _MANAGED
#pragma managed(pop)
#endif

// This is an example of an exported variable
CPPDLL_API int nCppDLL=0;

// This is an example of an exported function.
CPPDLL_API int fnCppDLL(void)
{
	return 42;
}

// This is the constructor of a class that has been exported.
// see CppDLL.h for the class definition
CCppDLL::CCppDLL()
{
	return;
}
DWORD   WINAPI   myThread(void* ptr) 
{
	Math* p =  (Math*)ptr;
	while ( 1)
	{
		Sleep(1000);
	}
}

Math::Math(ShowMsgCallBack fHandlerFunc)
{
	CreateThread( 
		NULL, 
		0, 
		(DWORD   (WINAPI   *)(void*))myThread, 
		(void*)this,
		0, 
		NULL   );
}

double Math::Add(double x, double y)
{
	return x + y;
}
double Math::Multiply(double x, double y)
{
	return x * y;
}
int AdvancedMath::Factorial(int x)
{
	if(x <= 0)
		return 0;
	if(1 == x)
		return 1;
	return x * Factorial(x - 1);
}