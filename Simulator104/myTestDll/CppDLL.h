// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the CPPDLL_EXPORTS
// symbol defined on the command line. this symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
// CPPDLL_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.

#pragma once

#include <stdio.h>
#include <string>

#ifdef CPPDLL_EXPORTS
#define CPPDLL_API __declspec(dllexport)
#else
#define CPPDLL_API __declspec(dllimport)
#endif

const char* DirectCallBack = "DirectCallBack";
const char* DestroyBaseFactory = "DestroyBaseFactory";
const char* ShowStatusMessage = "ShowStatusMessage";

// need tab name
const char* DataItemAdd		= "DataItemAdd";
const char* DataItemUpdate	= "DataItemUpdate";
const char* DataItemRemove	= "DataItemRemove";

typedef void (__stdcall* CallBackToOwner) (char* msgType, char* msgContent);

CallBackToOwner g_callBackToOwner;

extern "C" _declspec(dllexport) bool initService(CallBackToOwner callback)
{
	g_callBackToOwner = callback;
    return TRUE;
}

extern "C" _declspec(dllexport) bool postMessageToService(char* msgType, char* msgContent)
{
	std::string type = msgType;
	if (type == DirectCallBack)
	{
		g_callBackToOwner(msgType, msgContent);
	}
    return TRUE;
}
