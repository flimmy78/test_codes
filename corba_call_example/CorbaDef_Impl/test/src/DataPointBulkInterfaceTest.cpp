/**
  * The source code in this file is the property of
  * Ripple Systems and is not for redistribution
  * in any form.
  *
  * Source:   $File: //depot/4669_TIP/TA_BASE/transactive/bus/scada/DataPointAgentCorbaDef_Impl/test/src/DataPointBulkInterfaceTest.cpp $
  * @author:  Bradley Cleaver
  * @version: $Revision: #1 $
  *
  * Last modification: $DateTime: 2008/10/31 12:12:40 $
  * Last modified by:  $Author: grace.koh $
  *
  * This class implements the unit tests for the DataPoint Bulk Interface library.
  *
  */


#include <stdio.h>
#include <vector>

#include "core/utilities/src/TAAssert.h"
#include "bus/scada/DataPointCorbaDef_Impl/src/AgentStateUpdateQueue.h"
#include "bus\scada\DataPointAgentCorbaDef_Impl\test\stub\DbManager.h"
#include "bus\scada\DataPointAgentCorbaDef_Impl\test\stub\DataPointAgent.h"
#include "bus\scada\DataPointAgentCorbaDef_Impl\test\stub\DataPointAgentClient.h"
#include "bus/scada/DataPointAgentCorbaDef_Impl/test/src/DataPointBulkInterfaceTest.h"


DataPointBulkInterfaceTest::DataPointBulkInterfaceTest()
:
TestCase ( "" ),
m_mainObserverId ( 0 ),
m_dataPointAgent ( 0 ),
m_dataPointAgentClient ( 0 ),
m_dbManager ( 0 )
{

}


DataPointBulkInterfaceTest::DataPointBulkInterfaceTest ( const std::string & name, DbManager * dbManager, DataPointAgent * dataPointAgent, DataPointAgentClient * dataPointAgentClient )
:
TestCase ( name ),
m_mainObserverId ( 0 ),
m_dataPointAgent ( dataPointAgent ),
m_dataPointAgentClient ( dataPointAgentClient ),
m_dbManager ( dbManager )
{

}


DataPointBulkInterfaceTest::~DataPointBulkInterfaceTest()
{
	m_dataPointAgent = 0;
	m_dataPointAgentClient = 0;
	m_dbManager = 0;
}


//---------- Methods Overridden from TestCase.

/**
 * setUp
 * -----
 * The method called before each test case is executed.
 *
 * @param INFile ???
 * @param OUTFile ???
 */
void DataPointBulkInterfaceTest::setUp( const std::string & INFile , const std::string & OUTFile)
{
	//
	// set up agent to run in Control mode
	//

	m_dataPointAgent->agentSetControl();

	//
	// client request agent to create an observer
	//

	m_mainObserverId = 0;
	m_mainObserverId = m_dataPointAgentClient->createObserver();

	//
	// get the list of boolean data points' entity key from the data point agent
	//

	std::vector < unsigned long > listOfEntityKeys;
	listOfEntityKeys.clear();
	m_dataPointAgent->getBooleanDataPointEntityKeys ( listOfEntityKeys );

	//
	// construct TA_Base_Bus::DataPointAgentCorbaDef::keySequence and setup some test data
	//

	TA_Base_Bus::DataPointAgentCorbaDef::keySequence entityKeys;
	entityKeys.length ( listOfEntityKeys.size() );

	{
		for ( unsigned int index = 0; index < listOfEntityKeys.size(); index++ )
		{
			// get the data point's entity key
			unsigned long entityKey = listOfEntityKeys [ index ];

			// setup boolean data point with a true value
			TA_Base_Bus::DataPointValue dpValue;
			dpValue.setBoolean ( true );
			TA_Base_Bus::DataPointState newState ( dpValue, time(NULL) , QUALITY_GOOD_NO_SPECIFIC_REASON );

			// update the value
			m_dataPointAgent->updateDataPointFieldState ( entityKey, newState );

			entityKeys [ index ] = entityKey;
		}
	}

	//
	// add the data points specified by the entity keys to the observer
	// and get the list of DataPointCompleteInternalState for each of the 
	// data points
	//

	TA_Base_Bus::DataPointAgentCorbaDef::DataPointStateSequence * dataPointStateSequence = 0;
	dataPointStateSequence = m_dataPointAgentClient->addDataPointsToObserver ( m_mainObserverId, entityKeys );

	// clean up corba data
	delete dataPointStateSequence;
	dataPointStateSequence = 0;
}

/**
 * tearDown
 * --------
 * The method called after each test case is executed.
 *
 * @param INFile ???
 */
void DataPointBulkInterfaceTest::tearDown( const std::string & INFile )
{
	//
	// set up agent to run in Control mode
	//

	m_dataPointAgent->agentSetControl();

	// destroy the main observer
	m_dataPointAgentClient->destroyObserver ( m_mainObserverId );
}

/**
 * setUpSuite
 * ----------
 * The method called before any of the test cases have executed.
 *
 * @param inFile ???
 */
void DataPointBulkInterfaceTest::setUpSuite( const std::string & inFile )
{

}

/**
 * tearDownSuite
 * -------------
 * The method called after all of the test cases have executed.
 */
void DataPointBulkInterfaceTest::tearDownSuite()
{

}

/**
 * suite
 * -----
 * Returns the suite of tests to run.
 *
 * @return TestSuite* The suite of tests to run.
 */
TestSuite* DataPointBulkInterfaceTest::suite()
{
    // Must have same name as test class.
    TestSuite * testSuite = new TestSuite( "DataPointBulkInterfaceTest" );

    //////////////////////////
    // update Test Methods. //
    //////////////////////////

    testSuite->addTest( new TestCaller< DataPointBulkInterfaceTest >( "createObserverThrowOperationModeExceptionTest",
															  &DataPointBulkInterfaceTest::createObserverThrowOperationModeExceptionTest,
															  this ) );

    testSuite->addTest( new TestCaller< DataPointBulkInterfaceTest >( "createObserverTest",
															  &DataPointBulkInterfaceTest::createObserverTest,
															  this ) );

    testSuite->addTest( new TestCaller< DataPointBulkInterfaceTest >( "destroyObserverThrowOperationModeExceptionTest",
															  &DataPointBulkInterfaceTest::destroyObserverThrowOperationModeExceptionTest,
															  this ) );

    testSuite->addTest( new TestCaller< DataPointBulkInterfaceTest >( "destroyObserverThrowBadParameterExceptionTest",
															  &DataPointBulkInterfaceTest::destroyObserverThrowBadParameterExceptionTest,
															  this ) );

    testSuite->addTest( new TestCaller< DataPointBulkInterfaceTest >( "destroyObserverTest",
															  &DataPointBulkInterfaceTest::destroyObserverTest,
															  this ) );

    testSuite->addTest( new TestCaller< DataPointBulkInterfaceTest >( "addDataPointsToObserverTest",
															  &DataPointBulkInterfaceTest::addDataPointsToObserverTest,
															  this ) );

    testSuite->addTest( new TestCaller< DataPointBulkInterfaceTest >( "removeDataPointsFromObserverTest",
															  &DataPointBulkInterfaceTest::removeDataPointsFromObserverTest,
															  this ) );

    testSuite->addTest( new TestCaller< DataPointBulkInterfaceTest >( "getConfigurationTest",
															  &DataPointBulkInterfaceTest::getConfigurationTest,
															  this ) );

    testSuite->addTest( new TestCaller< DataPointBulkInterfaceTest >( "getUpdatesTest",
															  &DataPointBulkInterfaceTest::getUpdatesTest,
															  this ) );

    testSuite->addTest( new TestCaller< DataPointBulkInterfaceTest >( "getFieldValueTest",
															  &DataPointBulkInterfaceTest::getFieldValueTest,
															  this ) );

    return testSuite;
}


//---------- test methods


void DataPointBulkInterfaceTest::createObserverThrowOperationModeExceptionTest()
{
	unsigned long observerId = 0;

	// set up agent to run in monitor mode
	m_dataPointAgent->agentSetMonitor();

	// client request agent to create an observer, expecting TA_Base_Core::OperationModeException
	try
	{
		observerId = m_dataPointAgentClient->createObserver();
	}
	catch ( TA_Base_Core::OperationModeException & )
	{
		// got TA_Base_Core::OperationModeException,
		// make sure observer ID = 0 so that the next TA_ASSERT will pass
		observerId = 0;
	}

	// test passed if observer ID = 0
	TA_ASSERT ( observerId == 0, "The observer ID is not 0" );
}


void DataPointBulkInterfaceTest::createObserverTest()
{
	unsigned long observerId = 0;

	// set up agent to run in Control mode
	m_dataPointAgent->agentSetControl();

	// client request agent to create an observer
	try
	{
		observerId = m_dataPointAgentClient->createObserver();
	}
	catch ( TA_Base_Core::OperationModeException & )
	{
		// set observer ID = 0 so that the next TA_ASSERT will fail
		observerId = 0;
	}

	// test passed if observer ID > 0
	TA_ASSERT ( observerId > 0, "The observer ID is not greater than 0" );
}


void DataPointBulkInterfaceTest::destroyObserverThrowOperationModeExceptionTest()
{
	unsigned long observerId = 1000;

	// set up agent to run in monitor mode
	m_dataPointAgent->agentSetMonitor();

	// client request agent to destroy an observer, expecting TA_Base_Core::OperationModeException
	try
	{
		m_dataPointAgentClient->destroyObserver ( observerId );
	}
	catch ( TA_Base_Core::OperationModeException & )
	{
		// reset the observer Id so that the next TA_ASSERT will pass
		observerId = 0;
	}

	// test passed if observer ID = 0
	TA_ASSERT ( observerId == 0, "The observer ID is not 0" );
}


void DataPointBulkInterfaceTest::destroyObserverThrowBadParameterExceptionTest()
{
	unsigned long observerId = 1000;

	// set up agent to run in Control mode
	m_dataPointAgent->agentSetControl();

	// client request agent to destroy an unknown observer, expecting TA_Base_Core::BadParameterException
	try
	{
		m_dataPointAgentClient->destroyObserver ( observerId );
	}
	catch ( TA_Base_Core::OperationModeException & )
	{
	}
	catch ( TA_Base_Core::BadParameterException & )
	{
		// reset the observer Id so that the next TA_ASSERT will pass
		observerId = 0;
	}

	// test passed if observer ID = 0
	TA_ASSERT ( observerId == 0, "The observer ID is not 0" );
}


void DataPointBulkInterfaceTest::destroyObserverTest()
{
	unsigned long observerId = 0;

	// set up agent to run in Control mode
	m_dataPointAgent->agentSetControl();

	// client request agent to create an observer
	try
	{
		observerId = m_dataPointAgentClient->createObserver();
	}
	catch ( TA_Base_Core::OperationModeException & )
	{
		// got TA_Base_Core::OperationModeException
		// set observer ID = 0 so that the next TA_ASSERT will fail
		observerId = 0;
	}

	// test passed if observer ID > 0
	TA_ASSERT ( observerId > 0, "The observer ID is not greater than 0" );

	// destroy the observer, the observer ID should stay the same
	// don't expect to see any exception
	try
	{
		m_dataPointAgent->destroyObserver ( observerId );
	}
	catch ( TA_Base_Core::OperationModeException & )
	{
		// reset the observer Id so that the next TA_ASSERT will fail
		observerId = 0;
	}

	// test passed if observer ID > 0
	TA_ASSERT ( observerId > 0, "The observer ID is not greater than 0" );
}


void DataPointBulkInterfaceTest::addDataPointsToObserverTest()
{
	//
	// set up agent to run in Control mode
	//

	m_dataPointAgent->agentSetControl();

	//
	// client request agent to create an observer
	//

	unsigned long observerId = 0;
	observerId = m_dataPointAgentClient->createObserver();

	//
	// get the list of boolean data points' entity key from the data point agent
	//

	std::vector < unsigned long > listOfEntityKeys;
	listOfEntityKeys.clear();
	m_dataPointAgent->getBooleanDataPointEntityKeys ( listOfEntityKeys );

	//
	// construct TA_Base_Bus::DataPointAgentCorbaDef::keySequence and setup some test data
	//

	TA_Base_Bus::DataPointAgentCorbaDef::keySequence entityKeys;
	entityKeys.length ( listOfEntityKeys.size() );

	{
		for ( unsigned int index = 0; index < listOfEntityKeys.size(); index++ )
		{
			// get the data point's entity key
			unsigned long entityKey = listOfEntityKeys [ index ];

			// setup boolean data point with a true value
			TA_Base_Bus::DataPointValue dpValue;
			dpValue.setBoolean ( true );
			TA_Base_Bus::DataPointState newState ( dpValue, time(NULL) , QUALITY_GOOD_NO_SPECIFIC_REASON );

			// update the value
			m_dataPointAgent->updateDataPointFieldState ( entityKey, newState );

			entityKeys [ index ] = entityKey;
		}
	}

	//
	// add the data points specified by the entity keys to the observer
	// and get the list of DataPointCompleteInternalState for each of the 
	// data points
	//

	TA_Base_Bus::DataPointAgentCorbaDef::DataPointStateSequence * dataPointStateSequence = 0;
	dataPointStateSequence = m_dataPointAgentClient->addDataPointsToObserver ( observerId, entityKeys );

	//
	// verifying the result
	//

	// the pointer to TA_Base_Bus::DataPointAgentCorbaDef::DataPointStateSequence must not be null
	TA_ASSERT ( dataPointStateSequence != 0, "Failed to get the list of complete states for data points" );

	// the size of TA_Base_Bus::DataPointAgentCorbaDef::DataPointStateSequence must not be 0
	TA_ASSERT ( dataPointStateSequence->length() > 0, "Failed to get the list of complete states for data points" );

	// the size of TA_Base_Bus::DataPointAgentCorbaDef::DataPointStateSequence returned must
	// be equal to the number of boolean data points that have been added to the observer
	TA_ASSERT ( dataPointStateSequence->length() == listOfEntityKeys.size(), "Failed to get the list of complete states for data points" );

	{
		for ( unsigned int index = 0; index < listOfEntityKeys.size(); index++ )
		{
			TA_Base_Bus::DataPointAgentCorbaDef::DataPointState dpState = dataPointStateSequence->operator[](index);

			// the entity key specified in the TA_Base_Bus::DataPointAgentCorbaDef::DataPointState
			// must match the one in the input list
			TA_ASSERT ( listOfEntityKeys[index] == dpState.entityKey , "Failed to get the correct entity key" );

			// the entity key specified in the TA_Base_Bus::DataPointAgentCorbaDef::DataPointState
			// must have a boolean value true
			TA_ASSERT ( true == dpState.state.fieldValue.value.booleanValue(), "The boolean data point does not have the true value" );
		}
	}

	// clean up corba data
	delete dataPointStateSequence;
	dataPointStateSequence = 0;

	// remove the observer
	m_dataPointAgentClient->destroyObserver ( observerId );
}


void DataPointBulkInterfaceTest::removeDataPointsFromObserverTest()
{
	//
	// set up agent to run in Control mode
	//

	m_dataPointAgent->agentSetControl();

	//
	// client request agent to create an observer
	//

	unsigned long observerId = 0;
	observerId = m_dataPointAgentClient->createObserver();

	//
	// get the list of boolean data points' entity key from the data point agent
	//

	std::vector < unsigned long > listOfEntityKeys;
	listOfEntityKeys.clear();
	m_dataPointAgent->getBooleanDataPointEntityKeys ( listOfEntityKeys );

	//
	// construct TA_Base_Bus::DataPointAgentCorbaDef::keySequence and setup some test data
	//

	TA_Base_Bus::DataPointAgentCorbaDef::keySequence entityKeys;
	entityKeys.length ( listOfEntityKeys.size() );

	{
		for ( unsigned int index = 0; index < listOfEntityKeys.size(); index++ )
		{
			// get the data point's entity key
			unsigned long entityKey = listOfEntityKeys [ index ];

			// setup boolean data point with a true value
			TA_Base_Bus::DataPointValue dpValue;
			dpValue.setBoolean ( true );
			TA_Base_Bus::DataPointState newState ( dpValue, time(NULL) , QUALITY_GOOD_NO_SPECIFIC_REASON );

			// update the value
			m_dataPointAgent->updateDataPointFieldState ( entityKey, newState );

			entityKeys [ index ] = entityKey;
		}
	}

	//
	// add the data points specified by the entity keys to the observer
	// and get the list of DataPointCompleteInternalState for each of the 
	// data points
	//

	TA_Base_Bus::DataPointAgentCorbaDef::DataPointStateSequence * dataPointStateSequence = 0;
	dataPointStateSequence = m_dataPointAgentClient->addDataPointsToObserver ( observerId, entityKeys );

	//
	// verifying the result
	//

	// test passed if the pointer to TA_Base_Bus::DataPointAgentCorbaDef::DataPointStateSequence
	// is not null
	TA_ASSERT ( dataPointStateSequence != 0, "Failed to get the list of complete states for data points" );

	// test passed if the size of TA_Base_Bus::DataPointAgentCorbaDef::DataPointStateSequence
	// is > 0
	TA_ASSERT ( dataPointStateSequence->length() > 0, "Failed to get the list of complete states for data points" );

	// the size of TA_Base_Bus::DataPointAgentCorbaDef::DataPointStateSequence returned must
	// be equal to the number of boolean data points that have been added to the observer
	TA_ASSERT ( dataPointStateSequence->length() == listOfEntityKeys.size(), "Failed to get the list of complete states for data points" );

	//
	// remove the data points that have been added to the observer created in this test
	//

	m_dataPointAgentClient->removeDataPointsFromObserver ( observerId, entityKeys );

	//
	// verifying the result
	//

	TA_Base_Bus::DataPointAgentCorbaDef::DataPointUpdateSequence * updateSequence = 0;
	updateSequence = m_dataPointAgentClient->getUpdates ( observerId );

	// test passed if the pointer to TA_Base_Bus::DataPointAgentCorbaDef::DataPointUpdateSequence
	// is not null
	TA_ASSERT ( updateSequence != 0, "Failed to get the list of updates for data points" );

	// test passed if the size of TA_Base_Bus::DataPointAgentCorbaDef::DataPointUpdateSequence
	// is 0
	TA_ASSERT ( updateSequence->length() == 0, "The list of updates for data points is not empty" );

	// clean up corba data
	delete updateSequence;
	updateSequence = 0;

	// remove the observer
	m_dataPointAgentClient->destroyObserver ( observerId );
}


void DataPointBulkInterfaceTest::getConfigurationTest()
{
	//
	// set up agent to run in Control mode
	//

	m_dataPointAgent->agentSetControl();

	//
	// get the list of boolean data points' entity key from the data point agent
	//

	std::vector < unsigned long > listOfEntityKeys;
	listOfEntityKeys.clear();
	m_dataPointAgent->getBooleanDataPointEntityKeys ( listOfEntityKeys );

	// get the configuration from the first data point in the list, which have already
	// been added to the observer created from the test case setup
	TA_Base_Bus::DataPointAgentCorbaDef::DataPointConfigSequence * configSequence = 0;
	configSequence = m_dataPointAgentClient->getConfiguration ( listOfEntityKeys[0] );

	//
	// verifying the result
	//

	// test passed if the pointer to TA_Base_Bus::DataPointAgentCorbaDef::DataPointConfigSequence
	// is not null
	TA_ASSERT ( configSequence != 0, "Failed to get the list of configuration for data point" );

	// test passed if the size of TA_Base_Bus::DataPointAgentCorbaDef::DataPointUpdateSequence
	// is > 0
	TA_ASSERT ( configSequence->length() > 0, "The list of updates for data points is empty" );

	TA_Base_Bus::DataPointAgentCorbaDef::DataPointConfig dpConfig;
	dpConfig = configSequence->operator[](0);

	// test passed if the entity key associated with the config sequence matches with
	// the entity key of the first data point in the list
	TA_ASSERT ( dpConfig.entityKey == listOfEntityKeys[0], "Entity key associated with the config sequence does not match" );
	TA_ASSERT ( dpConfig.config.entityKey == listOfEntityKeys[0], "Entity key associated with the config sequence does not match" );

	// test passed if the data point type is TA_Base_Bus::DataPointCorbaDef::DPT_BOOLEAN
	TA_ASSERT ( TA_Base_Bus::DataPointCorbaDef::DPT_BOOLEAN == dpConfig.config.type, "Entity associated with the config sequence is not a boolean" );

	// clean up corba data
	delete configSequence;
	configSequence = 0;
}


void DataPointBulkInterfaceTest::getFieldValueTest()
{
	//
	// set up agent to run in Control mode
	//

	m_dataPointAgent->agentSetControl();

	//
	// get the list of boolean data points' entity key from the data point agent
	//

	std::vector < unsigned long > listOfEntityKeys;
	listOfEntityKeys.clear();
	m_dataPointAgent->getBooleanDataPointEntityKeys ( listOfEntityKeys );

	// get the field value of the first data point in the list, which have already
	// been added to the observer created from test case setup
	TA_Base_Bus::DataPointCorbaDef::ClientDataPointState * fieldValue = 0;
	fieldValue = m_dataPointAgentClient->getFieldValue ( listOfEntityKeys[0] );

	//
	// verifying the result
	//

	// test passed if the pointer to TA_Base_Bus::DataPointCorbaDef::ClientDataPointState
	// is not null
	TA_ASSERT ( fieldValue != 0, "Failed to get the field value for data point" );

	// test passed if the data point type is TA_Base_Bus::DataPointCorbaDef::DPT_BOOLEAN
	TA_ASSERT ( true == fieldValue->value.booleanValue(), "Field value is not a true boolean" );

	// clean up corba data
	delete fieldValue;
	fieldValue = 0;
}


void DataPointBulkInterfaceTest::getUpdatesTest()
{
	//
	// get the list of boolean data points' entity key from the data point agent
	//

	std::vector < unsigned long > listOfEntityKeys;
	listOfEntityKeys.clear();
	m_dataPointAgent->getBooleanDataPointEntityKeys ( listOfEntityKeys );

	// for each of the boolean data points
	{		
		for ( unsigned int index = 0; index < listOfEntityKeys.size(); index++ )
		{
			// get the data point's entity key
			unsigned long entityKey = listOfEntityKeys [ index ];

			// setup boolean data point with a false value, which we verify by getting 
			// the false value back from the updates
			TA_Base_Bus::DataPointValue dpValue;
			dpValue.setBoolean ( false );
			TA_Base_Bus::DataPointState newState ( dpValue, time(NULL) , QUALITY_GOOD_NO_SPECIFIC_REASON );

			// update the value
			m_dataPointAgent->updateDataPointFieldState ( entityKey, newState );
		}
	}

	// pause here a little bit so that the threads that processing data point update for
	// observer can finish their tasks
	TA_Base_Core::Thread::sleep ( 1000 );

	// get the updates from the main observer

	TA_Base_Bus::DataPointAgentCorbaDef::DataPointUpdateSequence * updateSequence = 0;
	updateSequence = m_dataPointAgentClient->getUpdates ( m_mainObserverId );

	// test passed if the pointer to TA_Base_Bus::DataPointAgentCorbaDef::DataPointUpdateSequence
	// is not null
	TA_ASSERT ( updateSequence != 0, "Failed to get the list of updates for data points" );

	// test passed if the size of TA_Base_Bus::DataPointAgentCorbaDef::DataPointUpdateSequence
	// is > 0
	TA_ASSERT ( updateSequence->length() > 0, "The list of updates for data points is empty" );

	// for of the TA_Base_Bus::DataPointAgentCorbaDef::DataPointUpdate in the sequence
	{
		for ( unsigned int index = 0; index < updateSequence->length(); index++ )
		{
			TA_Base_Bus::DataPointAgentCorbaDef::DataPointUpdate dpUpdate = updateSequence->operator[](index);

			// test passed if the update shows false boolean value
			TA_ASSERT ( false == dpUpdate.details.value().value.booleanValue(), "DataPointUpdate does not have a boolean false value" );
		}
	}

	// clean up corba data
	delete updateSequence;
	updateSequence = 0;
}






