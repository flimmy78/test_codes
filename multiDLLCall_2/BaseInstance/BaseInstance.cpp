// BaseInstance.cpp : Defines the entry point for the DLL application.
//

#include "stdafx.h"
#include "BaseInstance.h"

#ifdef _MANAGED
#pragma managed(push, off)
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

int gxxx = 2;

int get_g_int()
{
	static int s_int = 0;
	s_int = s_int + 1;
//	g_base_int = new int(0);

//	int t = *g_base_int;
	return gxxx = gxxx + 1;
}