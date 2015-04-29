/**
  * The source code in this file is the property of
  * Ripple Systems and is not for redistribution
  * in any form.
  *
  * Source:   $File: //depot/4669_TIP/TA_BASE/transactive/bus/scada/DataPointAgentCorbaDef_Impl/test/stub/DataPointAgentClient.cpp $
  * @author:  HoaVu
  * @version: $Revision: #1 $
  *
  * Last modification: $DateTime: 2008/10/31 12:12:40 $
  * Last modified by:  $Author: grace.koh $
  *
  * DataPointClientAgent stub
  *
  */

#if defined(WIN32)
#pragma warning(disable:4786)
#pragma warning(disable:4101)
#pragma warning(disable:4250)
#endif


#include "core/data_access_interface/entity_access/src/EntityAccessFactory.h"
#include "bus/scada/DataPointAgentCorbaDef_Impl/test/stub/DataPointAgentClient.h"


DataPointAgentClient::DataPointAgentClient ( const std::string & agentName )
:
m_agentName ( agentName )
{
	m_dataPointAgentNamedObject.setCorbaName ( TA_Base_Core::EntityAccessFactory::getInstance().getCorbaNameOfEntity ( agentName ) );
}


DataPointAgentClient::~DataPointAgentClient()
{

}


unsigned long DataPointAgentClient::createObserver()
{
	return m_dataPointAgentNamedObject->createObserver();
}


TA_Base_Bus::DataPointAgentCorbaDef::DataPointStateSequence * DataPointAgentClient::addDataPointsToObserver ( unsigned long observerId, const TA_Base_Bus::DataPointAgentCorbaDef::keySequence & entityKeys )
{
	return m_dataPointAgentNamedObject->addDataPointsToObserver ( observerId, entityKeys );
}


void DataPointAgentClient::removeDataPointsFromObserver ( unsigned long observerId, const TA_Base_Bus::DataPointAgentCorbaDef::keySequence & entityKeys )
{
	m_dataPointAgentNamedObject->removeDataPointsFromObserver ( observerId, entityKeys );
}


void DataPointAgentClient::destroyObserver ( unsigned long observerId )
{
	m_dataPointAgentNamedObject->destroyObserver ( observerId );
}


TA_Base_Bus::DataPointAgentCorbaDef::DataPointUpdateSequence * DataPointAgentClient::getUpdates ( unsigned long observerId )
{
	return m_dataPointAgentNamedObject->getUpdates ( observerId );
}


TA_Base_Bus::DataPointAgentCorbaDef::DataPointConfigSequence * DataPointAgentClient::getConfiguration ( unsigned long entityKey )
{
	return m_dataPointAgentNamedObject->getConfiguration ( entityKey );
}


TA_Base_Bus::DataPointCorbaDef::ClientDataPointState * DataPointAgentClient::getFieldValue ( unsigned long entityKey )
{
	return m_dataPointAgentNamedObject->getFieldValue ( entityKey );
}


