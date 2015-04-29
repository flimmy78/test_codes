#ifndef IEC_104_SERVER_H__
#define IEC_104_SERVER_H__

#include "DataManager.h"
#include "ConnectionManager.h"
#include "ace/singleton.h"


static const char* DirectCallBack = "DirectCallBack";
static const char* ShowStatusMessage = "ShowStatusMessage";

// need tab name
static const char* DataItemAdd		= "DataItemAdd";
static const char* DataItemUpdate	= "DataItemUpdate";
static const char* DataItemRemove	= "DataItemRemove";

typedef void (__stdcall* CallBackToOwner) (const char* msgType, const char* msgContent);

static CallBackToOwner g_callBackToOwner;

class UiUpdateProcessor;
class Iec104Server
{
public:
	explicit Iec104Server();
	~Iec104Server();
	void start(CallBackToOwner notifyFunc = NULL);
private:
	DataManager*		m_dataManager;
	ConnectionManager*  m_connectionManager;
	UiUpdateProcessor*	m_uiUpdateProcessor;
	
};

typedef ACE_Unmanaged_Singleton<Iec104Server, ACE_Thread_Mutex> Iec104ServerSingleton;


extern "C" __declspec(dllexport) int initService(CallBackToOwner callback);
extern "C" __declspec(dllexport) int finiService();
extern "C" __declspec(dllexport) int postMessageToService(const char const*msgType,const char const*msgValue);


#endif