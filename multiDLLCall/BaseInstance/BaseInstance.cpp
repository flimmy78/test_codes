// BaseInstance.cpp : Defines the entry point for the DLL application.
//

#include "stdafx.h"
#include "BaseInstance.h"

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

BaseInstance* BaseInstance::m_instance = 0;

BaseInstance& BaseInstance::GetInstance()
{
	if (0 == m_instance)
	{
		m_instance = new BaseInstance();
	}
	return *m_instance;
}

int g_base_int = -1;

int gxxx = 2;
int get_g_int()
{
	static int s_int = 0;
	s_int = s_int + 1;

	int t = g_base_int;
	return gxxx = gxxx + 1;
}