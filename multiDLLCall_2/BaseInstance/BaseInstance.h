// InstanceA.cpp : Defines the entry point for the DLL application.
//

#pragma once

class  BaseInstance
{  
public:  
//	BaseInstance(void);
	static BaseInstance& GetInstance();
private:
	static BaseInstance* m_instance;
}; 

//int* g_base_int;

int get_g_int();
