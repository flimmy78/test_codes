// InstanceA.cpp : Defines the entry point for the DLL application.
//

#pragma once

#ifdef INSTANCEA_EXPORTS
#define DLLCLASS_API_a __declspec(dllexport)
#else
#define DLLCLASS_API_a __declspec(dllimport)
#endif

class DLLCLASS_API_a InstanceA  
{  
public:  
	InstanceA(void);
	void* GetBaseClass();
}; 