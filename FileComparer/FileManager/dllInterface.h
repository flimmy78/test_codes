// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

#include "targetver.h"

#define WIN32_LEAN_AND_MEAN             // Exclude rarely-used stuff from Windows headers
// Windows Header Files:
#include <windows.h>

#include <string>
#include "ace/OS.h"
#include "ace/ace.h"
#include "ace/singleton.h"


static const char* DirectCallBack = "DirectCallBack";

static const std::string UiTabName_showAllFiles		= "showAllFiles";
static const std::string UiTabName_findSameFiles	= "findSameFiles";

// to service.
static const std::string cmdLoadAllVolume			= "LoadAllVolume";
static const std::string cmdSetLoadVolume			= "SetLoadVolume";
static const std::string cmdUpdateSelectCondition	= "UpdateSelectCondition";
static const std::string cmdShowMoreItems			= "ShowMoreItems";
static const std::string cmdSortShowItems			= "SortShowItems";
static const std::string cmdGetSameFileAllPaths		= "GetSameFileAllPaths";

// to ui
static const std::string cmdShowStatusMessage	= "ShowStatusMessage";
static const std::string cmdFileListItemClear	= "FileListItemClear";
static const std::string cmdFileListItemAdd		= "FileListItemAdd";
static const std::string cmdFileListItemUpdate	= "FileListItemUpdate";
static const std::string cmdFileListItemRemove	= "FileListItemRemove";
static const std::string cmdShowSameFileAllPaths	= "ShowSameFileAllPaths";


typedef int (__stdcall* CallBackToOwner) (const char* msgType, const char* msgContent);

static CallBackToOwner g_callBackToOwner;

class FileManager;
class DllInterface
{
public:
	explicit DllInterface();
	~DllInterface();
	void start(CallBackToOwner notifyFunc = NULL);

	int parseCmd(const char const*msgType,const char const*msgValue);
private:
	FileManager* m_fileManager;
};

typedef ACE_Unmanaged_Singleton<DllInterface, ACE_Thread_Mutex> DllInterfaceSingleton;


extern "C" __declspec(dllexport) int initService(CallBackToOwner callback);
extern "C" __declspec(dllexport) int finiService();
extern "C" __declspec(dllexport) int postMessageToService(const char const*msgType,const char const*msgValue);
