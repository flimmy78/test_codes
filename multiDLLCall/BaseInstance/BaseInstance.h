// InstanceA.cpp : Defines the entry point for the DLL application.
//

#pragma once

#ifdef BASEINSTANCE_EXPORTS
#define DLLCLASS_API_base __declspec(dllexport)
#else
#define DLLCLASS_API_base __declspec(dllimport)
#endif

class DLLCLASS_API_base BaseInstance
{  
public:  
//	BaseInstance(void);
	static BaseInstance& GetInstance();
private:
	static BaseInstance* m_instance;
}; 

extern DLLCLASS_API_base int g_base_int;

DLLCLASS_API_base int get_g_int();
