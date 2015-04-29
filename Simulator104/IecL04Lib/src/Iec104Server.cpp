#include "Iec104Server.h"
#include "Runparams.h"
#include "UiUpdateProcessor.h"

Iec104Server::Iec104Server()
:m_dataManager(NULL),
 m_uiUpdateProcessor(NULL),
 m_connectionManager(NULL)
{
	ACE::init();

	RunParams runParam("SinglePoint=./Data/DiSinglePoint.txt,DoublePoint=./Data/DiDoublePoint.txt");
	runParam.set("StepPosition","./Data/DiStepPosition.txt");
	runParam.set("AiSva","./Data/AiSva.txt");
	runParam.set("AiSfa","./Data/AiSfa.txt");
	runParam.set("AiNva","./Data/AiNva.txt");
	runParam.set("MiCounter","./Data/MiCounter.txt");
	m_dataManager		= new DataManager(runParam);
	m_connectionManager = new ConnectionManager();

	m_uiUpdateProcessor = new UiUpdateProcessor(*m_dataManager, *m_connectionManager);
}


Iec104Server::~Iec104Server()
{
	if(m_uiUpdateProcessor)
	{
		m_uiUpdateProcessor->stopProcess();
		m_uiUpdateProcessor->wait();
		delete m_uiUpdateProcessor;
		m_uiUpdateProcessor = NULL;
	}
	if(m_connectionManager)
	{
		delete m_connectionManager;
		m_connectionManager =	NULL;
	}
	if(m_dataManager)
	{
		delete m_dataManager;
		m_dataManager =	NULL;
	}

	ACE::fini();
}

void Iec104Server::start(CallBackToOwner notifyFunc)
{
	m_uiUpdateProcessor->regisgerCallBack(notifyFunc);
	m_uiUpdateProcessor->startProcess();
}


//--------------------------------------For Dll----------------------------------


int initService(CallBackToOwner callBack)
{
	g_callBackToOwner = callBack;
	Iec104ServerSingleton::instance()->start(callBack);
	return 0;
}

int finiService()
{
	Iec104ServerSingleton::close();
	return 0;
}

int postMessageToService(const char const*msgType, const char const*msgValue)
{
	std::string type = msgType;
	if (type == DirectCallBack)
	{
		g_callBackToOwner(msgType, msgValue);
	}
	return 0;
}

