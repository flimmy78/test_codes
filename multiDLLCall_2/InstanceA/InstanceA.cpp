// InstanceA.cpp : Defines the entry point for the DLL application.
//

#include "stdafx.h"
#include "InstanceA.h"
#include "../BaseInstance/BaseInstance.h"


#ifdef _MANAGED
#pragma managed(push, off)
#endif

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
					 )
{
    return TRUE;
}



#ifdef _MANAGED
#pragma managed(pop)
#endif


InstanceA::InstanceA()
{
}

void* InstanceA::GetBaseClass()
{
	
//	extern int g_base_int;
//	int di = *((int*)&g_base_int);
//	*g_base_int = 10;
	int t = get_g_int();

	return (void*)&BaseInstance::GetInstance();
}

