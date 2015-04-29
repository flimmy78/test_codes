/**
  * The source code in this file is the property of
  * Ripple Systems and is not for redistribution
  * in any form.
  *
  * Source:   $File: //depot/4669_TIP/TA_BASE/transactive/bus/scada/DataPointAgentCorbaDef_Impl/test/stub/DataPointAgent.h $
  * @author:  HoaVu
  * @version: $Revision: #1 $
  *
  * Last modification: $DateTime: 2008/10/31 12:12:40 $
  * Last modified by:  $Author: grace.koh $
  *
  * DataPointAgent stub
  *
  */

#if !defined DATA_POINT_AGENT_STUB_H
#define DATA_POINT_AGENT_STUB_H

#include <map>

#include "core\threads\src\Thread.h"
#include "bus/generic_agent/src/IGenericAgentUser.h"
#include "bus/scada/DataPointAgentCorbaDef_Impl/src/DataPointAgentCorbaDef_Impl.h"


namespace TA_Base_Bus
{
	class GenericAgent;
}

namespace TA_Base_Bus
{
	class DataPointFactory;
}

namespace TA_Base_Bus
{
	class ScadaProxyFactory;
}

namespace TA_Base_Bus
{
	class MmsUtilitySingletonManager;
}

namespace TA_Base_Bus
{
	class LocalUpdateEventProcessor;
}

//namespace TA_Base_Bus
//{
	//class AgentStateUpdateQueue;
//}

namespace TA_Base_Bus
{
	class DataPointState;
}

namespace TA_Base_Bus
{
	class DataPoint;
}


class DataPointAgent : public virtual TA_Base_Core::Thread,
					   public virtual TA_Base_Bus::IGenericAgentUser,
					   public virtual TA_Base_Bus::DataPointAgentCorbaDef_Impl
{
public:


	DataPointAgent ( const std::string & entityName );
    virtual ~DataPointAgent();


	//
	// operations required by Thread
	//


	virtual void run();
	virtual void terminate();

	
	//
    // IGenericAgentUser overloaded methods
	//


    virtual void agentTerminate();
    virtual TA_Base_Bus::IEntity* createEntity(TA_Base_Core::IEntityData& EntityData);
    virtual void agentSetMonitor();
    virtual void agentSetControl();
    virtual void notifyGroupOffline( const std::string& group );
    virtual void notifyGroupOnline( const std::string& group );
    virtual void registerForStateUpdates();
    virtual void receiveSpecialisedMessage(const TA_Base_Core::StateUpdateMessageCorbaDef& message);
    virtual void processOnlineUpdate(const TA_Base_Core::ConfigUpdateDetails& updateEvent);


	//
	// DataPointAgent methods
	//


	virtual void startAgent();
	virtual void updateDataPointFieldState ( unsigned long entityKey, TA_Base_Bus::DataPointState & newState );
	virtual void getBooleanDataPointEntityKeys ( std::vector < unsigned long > & listOfEntityKeys );
	virtual void getAnalogueDataPointEntityKeys ( std::vector < unsigned long > & listOfEntityKeys );


protected:


	//
    // DataPointAgentCorbaDef_Impl overloaded methods
	//


	virtual TA_Base_Bus::DataPoint * getDataPoint ( unsigned long entityKey );
	virtual TA_Base_Core::EOperationMode getOperationMode();


private:


	TA_Base_Bus::IEntity* createDataPointEntity ( TA_Base_Core::IEntityData & EntityData );


	bool m_threadTerminated;
	bool m_agentSetControl;
    std::string m_agentName;
	
	TA_Base_Bus::GenericAgent * m_genericAgent;
	TA_Base_Bus::DataPointFactory * m_dataPointFactory;
	TA_Base_Bus::ScadaProxyFactory * m_scadaProxyFactory;
	TA_Base_Bus::MmsUtilitySingletonManager * m_mmsUtilitySingletonManager;
	TA_Base_Bus::AgentStateUpdateQueue *	m_agentStateUpdateQ;
	TA_Base_Bus::LocalUpdateEventProcessor * m_localUpdateEventProcessor;

	std::map< unsigned long, TA_Base_Bus::DataPoint * > m_dataPointList;

    // Disable the default constructor.
    DataPointAgent();
};

#endif
