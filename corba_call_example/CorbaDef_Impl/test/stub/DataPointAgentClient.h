/**
  * The source code in this file is the property of
  * Ripple Systems and is not for redistribution
  * in any form.
  *
  * Source:   $File: //depot/4669_TIP/TA_BASE/transactive/bus/scada/DataPointAgentCorbaDef_Impl/test/stub/DataPointAgentClient.h $
  * @author:  HoaVu
  * @version: $Revision: #1 $
  *
  * Last modification: $DateTime: 2008/10/31 12:12:40 $
  * Last modified by:  $Author: grace.koh $
  *
  * DataPointClientAgent stub
  *
  */

#if !defined DATA_POINT_AGENT_CLIENT_STUB_H
#define DATA_POINT_AGENT_CLIENT_STUB_H


#include "core/naming/src/NamedObject.h"
#include "bus/scada/DataPointCorbaDef/src/DataPointAgentCorbaDef.h"


class DataPointAgentClient
{
public:


	DataPointAgentClient ( const std::string & agentName );
    virtual ~DataPointAgentClient();


	unsigned long createObserver();


	TA_Base_Bus::DataPointAgentCorbaDef::DataPointStateSequence * addDataPointsToObserver ( unsigned long observerId, const TA_Base_Bus::DataPointAgentCorbaDef::keySequence & entityKeys );


	void removeDataPointsFromObserver ( unsigned long observerId, const TA_Base_Bus::DataPointAgentCorbaDef::keySequence & entityKeys );


	void destroyObserver ( unsigned long observerId );


	TA_Base_Bus::DataPointAgentCorbaDef::DataPointUpdateSequence * getUpdates ( unsigned long observerId );


	TA_Base_Bus::DataPointAgentCorbaDef::DataPointConfigSequence * getConfiguration ( unsigned long entityKey );


	TA_Base_Bus::DataPointCorbaDef::ClientDataPointState * getFieldValue ( unsigned long entityKey );


private:


	DataPointAgentClient() {};
    DataPointAgentClient ( const DataPointAgentClient & obj ) {};
	DataPointAgentClient & operator= ( const DataPointAgentClient &) {};

	const std::string m_agentName;

	// Corba Interface to DataPointAgent
	TA_Base_Core::NamedObject<TA_Base_Bus::DataPointAgentCorbaDef,
						 TA_Base_Bus::DataPointAgentCorbaDef_ptr,
						 TA_Base_Bus::DataPointAgentCorbaDef_var> m_dataPointAgentNamedObject;
};

#endif
