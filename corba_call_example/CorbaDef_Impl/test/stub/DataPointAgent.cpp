/**
  * The source code in this file is the property of
  * Ripple Systems and is not for redistribution
  * in any form.
  *
  * Source:   $File: //depot/4669_TIP/TA_BASE/transactive/bus/scada/DataPointAgentCorbaDef_Impl/test/stub/DataPointAgent.cpp $
  * @author:  HoaVu
  * @version: $Revision: #1 $
  *
  * Last modification: $DateTime: 2008/10/31 12:12:40 $
  * Last modified by:  $Author: grace.koh $
  *
  * DataPointAgent stub
  *
  */

#if defined(WIN32)
#pragma warning(disable:4786)
#pragma warning(disable:4101)
#endif

#include "core/utilities/src/RunParams.h"
#include "core/data_access_interface/entity_access/src/DataPointEntityData.h"
#include "bus/generic_agent/src/GenericAgent.h"
#include "bus/scada/proxies2/src/ScadaProxyFactory.h"
#include "bus/scada/DataPointCorbaDef_Impl/src/DataPointFactory.h"
#include "bus/scada/DataPointCorbaDef_Impl/src/MmsUtilitySingletonManager.h"
#include "bus/scada/DataPointCorbaDef_Impl/src/AgentStateUpdateQueue.h"
#include "bus/scada/DataPointCorbaDef_Impl/src/LocalUpdateEventProcessor.h"
#include "bus/scada/DataPointCorbaDef_Impl/src/DataPointState.h"
#include "bus/scada/DataPointCorbaDef_Impl/src/DataPoint.h"

#include "bus/scada/DataPointAgentCorbaDef_Impl/test/stub/DataPointAgent.h"


DataPointAgent::DataPointAgent ( const std::string & entityName )
:

//m_agentName ( entityName ),
m_threadTerminated ( false ),
m_agentSetControl ( false ),
m_genericAgent ( 0 ),
m_dataPointFactory ( 0 ),
m_scadaProxyFactory ( 0 ),
m_mmsUtilitySingletonManager ( 0 ),
m_agentStateUpdateQ ( 0 ),
m_localUpdateEventProcessor ( 0 )

{
	m_dataPointList.clear();

	// create handle to DataPointFactory
	if ( 0 == m_dataPointFactory )
	{
		m_dataPointFactory = new TA_Base_Bus::DataPointFactory();
	}

	// get a handle to the ScadaProxyFactory
	m_scadaProxyFactory = &(TA_Base_Bus::ScadaProxyFactory::getInstance());

	TA_ASSERT ( ( 0 != m_scadaProxyFactory ), "SCADA Proxy Factory not created");

	// create handle to Generic Agent with no arguments
    char* argv[1];
    argv[0] = "";
	m_genericAgent = new TA_Base_Bus::GenericAgent( 0, argv, this );

	// register the local entities into ScadaProxyFactory
	m_scadaProxyFactory->registerLocalEntities(m_agentName, m_genericAgent->getEntityMap());

	// set the proxies to monitor mode
	m_scadaProxyFactory->setProxiesToMonitorMode();

	// get handle to MmsUtilitySingletonManager
	m_mmsUtilitySingletonManager = TA_Base_Bus::MmsUtilitySingletonManager::getInstance();

	// register the local entities to bypass corba
	m_mmsUtilitySingletonManager->registerLocalEntities ( m_agentName, m_genericAgent->getEntityMap() );

	// Get a pointer to the agent state update queue
	m_agentStateUpdateQ = TA_Base_Bus::AgentStateUpdateQueue::getInstance();

	// create handle to the local update event procesor
	if ( 0 == m_localUpdateEventProcessor )
	{
		m_localUpdateEventProcessor = new TA_Base_Bus::LocalUpdateEventProcessor();
	}
}


DataPointAgent::~DataPointAgent()
{
	// set the proxies to monitor mode
	m_scadaProxyFactory->setProxiesToMonitorMode();

	// clean up the list containing DataPoints instances created by
	// this Agent, without deleting the DataPoint instances themselves
	// since they are owned by the GenericAgent
	m_dataPointList.clear();

	// clean up handle to DataPointFactory
	if ( 0 != m_dataPointFactory )
	{
		delete m_dataPointFactory;
		m_dataPointFactory = 0;
	}

	// clean up "MmsScadaUtility"
	if ( 0 != m_mmsUtilitySingletonManager )
	{
		TA_Base_Bus::MmsUtilitySingletonManager::removeInstance ( m_mmsUtilitySingletonManager );
		m_mmsUtilitySingletonManager = 0;
	}

	// clean up handle to the local update event processor
	if ( 0 != m_localUpdateEventProcessor )
	{
		delete m_localUpdateEventProcessor;
		m_localUpdateEventProcessor = 0;
	}

	// clean up pointer to PMSAgentStateUpdateQueue
	if ( 0 != m_agentStateUpdateQ )
	{
		TA_Base_Bus::AgentStateUpdateQueue::removeInstance( m_agentStateUpdateQ );
	}

	// clean up the GenericAgent
	if ( 0 != m_genericAgent )
	{
		try
		{
			m_genericAgent->deactivateAndDeleteServant();
			m_genericAgent = 0;
		}
		catch ( ... )
		{
			// do nothing
		}
	}

	// remove handle to ScadaProxyFactory
	TA_Base_Bus::ScadaProxyFactory::removeInstance();
	m_scadaProxyFactory = 0;
}


TA_Base_Bus::IEntity* DataPointAgent::createDataPointEntity ( TA_Base_Core::IEntityData & EntityData )
{
	TA_Base_Bus::DataPoint * theEntity = 0;
	TA_Base_Core::DataPointEntityData * dataPointEntityData = 0;

	// cast the EntityData to DataPointEntityData
	dataPointEntityData = dynamic_cast< TA_Base_Core::DataPointEntityData * > ( & EntityData );

	// if the cast is successfull
	if ( 0 != dataPointEntityData )
	{
		// create a data point based on the specified entity data
		theEntity = m_dataPointFactory->createDataPoint ( dataPointEntityData );

		// insert the newly created data point to internal list for further
		// referencing.
		if ( 0 != theEntity )
		{
			m_dataPointList[ theEntity->getEntityKey() ] = theEntity;
		}
		// if fail to create the DataPoint entity, do nothing
	}
	// else do nothing

	return theEntity;
}


TA_Base_Bus::IEntity* DataPointAgent::createEntity ( TA_Base_Core::IEntityData & EntityData )
{
    // Make sure the entity is a DataPoint
	if ( TA_Base_Core::DataPointEntityData::getStaticType() == EntityData.getType() )
	{
		// create and return the DataPoint entity
		return createDataPointEntity ( EntityData );
	}
	// otherwise don't care

	return NULL;
}


void DataPointAgent::agentTerminate()
{
	// deactivate the ServantBase of the base class DataPointAgentCorbaDef_Impl
	deactivateServant();

	// set the proxies to monitor mode
	m_scadaProxyFactory->setProxiesToMonitorMode();

	// stop the local event processor
	if ( 0 != m_localUpdateEventProcessor )
	{
		m_localUpdateEventProcessor->terminateAndWait();
	}
}


void DataPointAgent::agentSetMonitor()
{
	// only proceed if not already in Monitor mode
	if ( true == m_agentSetControl )
	{
		// set the flag to indicate the agent is now in Standby mode
		m_agentSetControl = false;

		// set the data points to monitor mode
		std::map< unsigned long, TA_Base_Bus::DataPoint * >::iterator itr;
		for ( itr = m_dataPointList.begin();
			  itr != m_dataPointList.end();
			  itr++ )
		{
			itr->second->setToMonitorMode();
		}

		// set the proxies to monitor mode
		m_scadaProxyFactory->setProxiesToMonitorMode();
	}
	// else do nothing
}


void DataPointAgent::agentSetControl()
{
	// only proceed if not already in Control mode
	if ( false == m_agentSetControl )
	{
		// set the flag to indicate the agent is now in Control mode
		m_agentSetControl = true;

		// set the data points to monitor mode
		std::map< unsigned long, TA_Base_Bus::DataPoint * >::iterator itr;
		for ( itr = m_dataPointList.begin();
			  itr != m_dataPointList.end();
			  itr++ )
		{
			itr->second->setToControlMode();
		}

		// set the proxies to control mode
		m_scadaProxyFactory->setProxiesToControlMode();
	}
	// else do nothing
}


void DataPointAgent::notifyGroupOffline( const std::string& group )
{
	// do nothing
}


void DataPointAgent::notifyGroupOnline( const std::string& group )
{
	// do nothing
}


void DataPointAgent::registerForStateUpdates()
{
	// do nothing
}


void DataPointAgent::receiveSpecialisedMessage(const TA_Base_Core::StateUpdateMessageCorbaDef& message)
{
	// do nothing
}


void DataPointAgent::processOnlineUpdate(const TA_Base_Core::ConfigUpdateDetails& updateEvent)
{
	// do nothing
}


TA_Base_Bus::DataPoint * DataPointAgent::getDataPoint ( unsigned long entityKey )
{
	TA_Base_Bus::DataPoint * theDataPoint = 0;

	// find if there is a data point whose pkey matches with the specified entity key
	std::map< unsigned long, TA_Base_Bus::DataPoint * >::iterator itr = m_dataPointList.find ( entityKey );

	// if found one
	if ( itr != m_dataPointList.end() )
	{
		// get the reference to the data point
		theDataPoint = itr->second;
	}
	// else do nothing

	return theDataPoint;
}


TA_Base_Core::EOperationMode DataPointAgent::getOperationMode()
{
	return ( ( true == m_agentSetControl ) ? TA_Base_Core::Control : TA_Base_Core::Monitor );
}


void DataPointAgent::updateDataPointFieldState ( unsigned long entityKey, TA_Base_Bus::DataPointState & newState )
{
	// find if there is a data point whose pkey matches with the specified entity key
	std::map< unsigned long, TA_Base_Bus::DataPoint * >::iterator itr = m_dataPointList.find ( entityKey );

	// if found one
	if ( itr != m_dataPointList.end() )
	{
		// update the data point with the specified state
		itr->second->updateFieldState ( newState );
	}
	// else do nothing
}


void DataPointAgent::startAgent()
{
	// check the runtime parameter OperationMode
	std::string operationMode ( "" );
	operationMode = TA_Base_Core::RunParams::getInstance().get ( "OperationMode" );

	// if defined as "Control"
	if ( ( 0 < operationMode.length() ) && ( "Control" == operationMode ) )
	{
		agentSetControl();
	}
	else
	{
		agentSetMonitor();
	}

	// start the thread to delete StateUpdate messages submitted by the data points
	start();

	// activate the ServantBase of the base class DataPointAgentCorbaDef_Impl
	activateServantWithName ( m_agentName );

	// start the Generic Agent loop
	//m_genericAgent->run();
}


void DataPointAgent::run()
{
	while ( !m_threadTerminated )
	{
		int maxLimit = 50;
		int count = 0;

		while ( count <= maxLimit )
		{
			// Check State Update Event queue
			if ( ! m_agentStateUpdateQ->isEmpty() )
			{
				TA_Base_Bus::DataPointStateManuallyUpdate * newEvent = m_agentStateUpdateQ->getNext();

				delete newEvent;

				count++;
			}
			else
			{
				break;
			}
		}

		TA_Base_Core::Thread::sleep ( 1000 );
	}
}


void DataPointAgent::terminate()
{
	m_threadTerminated = true;
}


void DataPointAgent::getBooleanDataPointEntityKeys ( std::vector < unsigned long > & listOfEntityKeys )
{
	// for each of the data points in the list
	std::map< unsigned long, TA_Base_Bus::DataPoint * >::iterator itr;
	for ( itr = m_dataPointList.begin();
		  itr != m_dataPointList.end();
		  itr++ )
	{
		// if the data point is a digital 
		if ( true == itr->second->getIsDigitalDataPoint() )
		{
			// transfer the entity key to the output list
			listOfEntityKeys.push_back ( itr->first );
		}
	}
}


void DataPointAgent::getAnalogueDataPointEntityKeys ( std::vector < unsigned long > & listOfEntityKeys )
{
	// for each of the data points in the list
	std::map< unsigned long, TA_Base_Bus::DataPoint * >::iterator itr;
	for ( itr = m_dataPointList.begin();
		  itr != m_dataPointList.end();
		  itr++ )
	{
		// if the data point is an analogue
		if ( true == itr->second->getIsAnalogueDataPoint() )
		{
			// transfer the entity key to the output list
			listOfEntityKeys.push_back ( itr->first );
		}
	}
}
