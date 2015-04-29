#ifndef AGENT_PROXY_COMMON_TYPE_H
#define AGENT_PROXY_COMMON_TYPE_H

#include "bus/scada/common_library/src/CommonDefs.h"

typedef enum
{
	CORBA_EXCEPTION = 0,
	OBJECT_RESOLUTION_EXCEPTION = 1,
	BAD_PARAMETER_EXCEPTION = 2,
	OPERATION_MODE_EXCEPTION = 3,
	SCADA_PROXY_EXCEPTION = 4,
	UNKNOWN_EXCEPTION = 5,
	NO_EXCEPTION = 6
		
} ExceptionType;

typedef enum
{
	NORAML = 0,
	EXCEPTON = 1,
	THREAD_EXIT = 2

} AgentProxyStatus;

struct AgentProxyUpdateType 
{
	std::string			agentProxyName;	
	AgentProxyStatus	agentProxyStatus;
	ExceptionType		agentProxyException;
	std::vector<TA_Base_Bus::DataNodeDisplayState>& updateData;
};

#endif