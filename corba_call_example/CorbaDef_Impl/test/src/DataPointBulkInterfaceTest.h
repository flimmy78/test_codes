/**
  * The source code in this file is the property of
  * Ripple Systems and is not for redistribution
  * in any form.
  *
  * Source:   $File: //depot/4669_TIP/TA_BASE/transactive/bus/scada/DataPointAgentCorbaDef_Impl/test/src/DataPointBulkInterfaceTest.h $
  * @author:  HoaVu
  * @version: $Revision: #1 $
  *
  * Last modification: $DateTime: 2008/10/31 12:12:40 $
  * Last modified by:  $Author: grace.koh $
  *
  * This class implements the unit tests for the DataPoint Bulk Interface library.
  *
  */

#ifndef ALARM_ACK_STATE_H
#define ALARM_ACK_STATE_H

#include <time.h>
#include <vector>

#include "cots/CppUnit/src/TestFramework.h"


class DbManager;
class DataPointAgent;
class DataPointAgentClient;

class DataPointBulkInterfaceTest : public TestCase
{
public:

	DataPointBulkInterfaceTest ( const std::string & name, DbManager * dbManager, DataPointAgent * dataPointAgent, DataPointAgentClient * dataPointAgentClient );
	virtual ~DataPointBulkInterfaceTest();


    /**
     * suite
     * -----
     * Returns the suite of tests to run.
     *
     * @return TestSuite* The suite of tests to run.
     */
    virtual TestSuite* suite();


    /**
     * setUp
     * -----
     * The method called before each test case is executed.
     *
     * @param INFile ???
     * @param OUTFile ???
     */
    virtual void setUp( const std::string & INFile , const std::string & OUTFile);


    /**
     * tearDown
     * --------
     * The method called after each test case is executed.
     *
     * @param INFile ???
     */
    virtual void tearDown( const std::string & INFile );


    /**
     * setUpSuite
     * ----------
     * The method called before any of the test cases have executed.
     *
     * @param inFile ???
     */
    virtual void setUpSuite( const std::string & inFile );


    /**
     * tearDownSuite
     * -------------
     * The method called after all of the test cases have executed.
     */
    virtual void tearDownSuite();


protected:


	//
	// specific test cases, as listed in config file
	//

	void createObserverThrowOperationModeExceptionTest();
	void createObserverTest();
	void destroyObserverThrowOperationModeExceptionTest();
	void destroyObserverThrowBadParameterExceptionTest();
	void destroyObserverTest();
	void addDataPointsToObserverTest();
	void removeDataPointsFromObserverTest();
	void getConfigurationTest();
	void getUpdatesTest();
	void getFieldValueTest();


private:

	unsigned long m_mainObserverId;

	DbManager * m_dbManager;
	DataPointAgent * m_dataPointAgent;
	DataPointAgentClient * m_dataPointAgentClient;
	DataPointBulkInterfaceTest();



};

#endif
