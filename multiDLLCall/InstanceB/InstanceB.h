// InstanceA.cpp : Defines the entry point for the DLL application.
//

#pragma once

#ifdef INSTANCEB_EXPORTS
#define DLLCLASS_API_b __declspec(dllexport)
#else
#define DLLCLASS_API_b __declspec(dllimport)
#endif

class DLLCLASS_API_b InstanceB
{  
public:
	void* GetBaseClass();
}; 