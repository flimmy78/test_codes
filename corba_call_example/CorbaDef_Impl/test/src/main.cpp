/**
  * The source code in this file is the property of
  * Ripple Systems and is not for redistribution
  * in any form.
  *
  * Source:   $File: //depot/4669_TIP/TA_BASE/transactive/bus/scada/DataPointAgentCorbaDef_Impl/test/src/main.cpp $
  * @author:  HoaVu
  * @version: $Revision: #1 $
  *
  * Last modification: $DateTime: 2008/10/31 12:12:40 $
  * Last modified by:  $Author: grace.koh $
  *
  * This is the main source file for testing the SCADA DataPoint Bulk Interface library.
  *
  */

#if defined(WIN32)
#pragma warning(disable:4786)
#endif

// Standard Includes.
#include <io.h>
#include <iostream>

// Transactive Includes.
#include "core/utilities/src/DebugUtil.h"
#include "core/utilities/src/RunParams.h"

// Unit Test Includes.
#include "cots/CppUnit/src/TestRunner.h"

// Test Class Includes.
#include "bus/scada/DataPointCorbaDef_Impl/src/AgentStateUpdateQueue.h"
#include "bus\scada\DataPointAgentCorbaDef_Impl\test\stub\DbManager.h"
#include "bus\scada\DataPointAgentCorbaDef_Impl\test\stub\DataPointAgent.h"
#include "bus\scada\DataPointAgentCorbaDef_Impl\test\src\DataPointBulkInterfaceTest.h"
#include "bus\scada\DataPointAgentCorbaDef_Impl\test\stub\DataPointAgentClient.h"

int main()
{
	//
    // Set the run time parameters.
	//

	// need to adjust this db connection parameter accordingly
    TA_Base_Core::RunParams::getInstance().set( RPARAM_DBCONNECTION, "TRA_DEV2:unittest:unittest" );

	// need to adjust this notify hosts parameter accordingly
	TA_Base_Core::RunParams::getInstance().set( RPARAM_NOTIFYHOSTS, "10.205.81.35:6668,10.205.81.35" );	

	// all these parameters can be set via the "dummy system controller" process
    //TA_Base_Core::RunParams::getInstance().set( RPARAM_LOCATIONKEY, "1" );
    //TA_Base_Core::RunParams::getInstance().set( RPARAM_MGRPORT, "9999" );
	//TA_Base_Core::RunParams::getInstance().set( RPARAM_MGRPORT, "6668" );
    //TA_Base_Core::RunParams::getInstance().set( RPARAM_OPERATIONMODE, "Control" );

    TA_Base_Core::DebugUtil::getInstance().setFile( "DataPointBulkInterfaceTest.log" );
    TA_Base_Core::RunParams::getInstance().set( "DebugAlwaysTrueRightsLib", "true" );

    // create test runner
    TestRunner runner;

	// create stubs
    DbManager * db = 0;;
    DataPointAgent * dataPointAgent = 0;
	DataPointAgentClient * dataPointAgentClient = 0;

    try
    {
        // Prepare the database.
		db = new DbManager();
		db->removeEntities();
        db->addEntities();

        // create the agent that loads the DataPoints.
		TA_Base_Core::RunParams::getInstance().set( RPARAM_ENTITYNAME, db->AgentName.c_str() );
        dataPointAgent = new DataPointAgent ( db->AgentName );
        dataPointAgent->startAgent();

		// create DataPointAgentClient
		dataPointAgentClient = new DataPointAgentClient ( db->AgentName );

        // Test all public DataPoint members using a BooleanData point.
        DataPointBulkInterfaceTest testcase1 ( "DataPointBulkInterfaceTest", db, dataPointAgent, dataPointAgentClient );
        runner.addSuite( testcase1.suite() );

        // Run the tests defined in the config file
        runner.begin( "./cfg/config.ini" );
    }
    catch ( TA_Base_Core::TransactiveException& ex )
    {
        std::cout << "TransactiveException: " << ex.what() << std::endl;
    }
    catch ( ... )
    {
		std::cout << "Caught an unknown exception" << std::endl;
	}

    // Terminate the agent
	if ( 0 != dataPointAgent )
	{
		dataPointAgent->terminateAndWait();

		dataPointAgent->deactivateAndDeleteServant();
		dataPointAgent = 0;
	}

	// Clean up the agent client
	if ( 0 != dataPointAgentClient )
	{
		delete dataPointAgentClient;
		dataPointAgentClient = 0;
	}

    // Clean up the database.
	if ( 0 != db )
	{
		db->removeEntities();
		delete db;
		db = 0;
	}

    return 0;
}
