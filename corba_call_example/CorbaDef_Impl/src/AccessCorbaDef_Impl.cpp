/**
  * The source code in this file is the property of
  * Ripple Systems and is not for redistribution
  * in any form.
  *
  * Source : $File: //depot/4669_TIP/TA_BASE/transactive/bus/scada/DataPointAgentCorbaDef_Impl/src/AccessCorbaDef_Impl.cpp $
  * @author  HoaVu
  * @version $Revision: #2 $
  * Last modification : $DateTime: 2011/07/12 10:58:24 $
  * Last modified by : $Author: haijun.li $
  *
  *	AccessCorbaDef_Impl is an abstract base class that implements
  * the DataPointAgentCorbaDef interface, providing DataPoint configurations
  * and updates to remote clients.
  *
  */


#include "AccessCorbaDef_Impl.h"

namespace Base_Bus
{

	AccessCorbaDef_Impl::AccessCorbaDef_Impl (int port, const std::string & objName)
		:m_orbVar( CORBA::ORB::_nil() )
	{
		initialise(port);
		activateServantWithName (objName );
	}

	AccessCorbaDef_Impl::~AccessCorbaDef_Impl()
	{
		//deactivateServant();
		try
		{

			// Get the default POA
			PortableServer::POA_var poa = this->_default_POA();

			// Get the object ID
			PortableServer::ObjectId_var id = poa->servant_to_id(this);

			// Deactivate the object
			poa->deactivate_object( id.in() );

			
			/////////////////////////////
			m_orbVar->shutdown( CORBA::Boolean(true) );
			// Clean up the orb entirely
			m_orbVar->destroy();
			m_orbVar = CORBA::ORB::_nil();
			///////////////////////////
		}
		catch ( const PortableServer::POA::ObjectNotActive& )
		{
			// The servant has already been implicitly de-activated
			// Or never activated
		}
		catch ( ... )
		{
			printf("xxx\n");
		}
	}

	void AccessCorbaDef_Impl::SetATestValue(CorbaTypes::EDatapointAlarm v)
	{
		printf("getEnum:%d\n", v);
		//Sleep(5000000);
	}

	void AccessCorbaDef_Impl::sendStringToSvt(const char* s)
	{
		printf("getstring:%s\n", s);
	}
	
	void AccessCorbaDef_Impl::activateServantWithName( const std::string& objectName )
	{
		bool deactivated = true;
		try
		{
			// Get the POA we want
			PortableServer::POA_var poa = this->_default_POA();

			// Activate the object
			PortableServer::ObjectId_var oid = poa->activate_object(this);

			// The servant is activated
			deactivated = false;
		}
		catch ( const PortableServer::POA::ServantAlreadyActive& )
		{
			// The servant has already been implicitly activated
			deactivated = false;
		}
		catch ( ... )
		{
			printf("ffff\n");
		}

		// register the name
		//registerNamedObject( objectName );
		{
				// Get a reference to the poa
			PortableServer::POA_var poa = this->_default_POA();

			// Store the object in the TDNS, using the poa to get the object ref
		//	Naming::registerName( poa->servant_to_reference( this ), m_objectName );
			setServantKey(this, objectName);
		}
	}

	void AccessCorbaDef_Impl::setServantKey(PortableServer::ServantBase* theServant,
											 const std::string& key)
	{

		try
		{
			// Resolve the omnibootstrapping POA and activate it
			CORBA::Object_var obj = getOrb().resolve_initial_references("omniINSPOA");
			PortableServer::POA_var poa = PortableServer::POA::_narrow(obj);
			PortableServer::POAManager_var mgr = poa->the_POAManager();
			mgr->activate();

			// Activate the servant with the bootstrapping POA
			PortableServer::ObjectId_var oid =
				PortableServer::string_to_ObjectId(key.c_str());

			poa->activate_object_with_id(oid, theServant);

			// Add the bootstrapping POA to the list of POAs the
			// servant is activated with.
			//theServant->addPOA(poa);
		}
		catch(...)//(const CORBA::SystemException& ex)
		{
			printf("SystemException\n");
			throw 222;
		}
	}
	CORBA::ORB& AccessCorbaDef_Impl::getOrb()
	{
		return *(m_orbVar.in());
	}

	bool AccessCorbaDef_Impl::initialise(int port)
	{
		std::string timeout;
		
		timeout = "20";

		// timeouts in milliseconds
		timeout += "000";

		// The following code is likely to raise an exception if we are
		// not configured properly
		try
		{
			// Dummy the runtime parameters and use to initialise the ORB
			if (CORBA::is_nil(m_orbVar))
			{
				int     argc = 0;
				char*   argv[1];
				argv[0] = "NULL";

				char portstr[32];
				if (port > 0)           // pin the port
				{
					sprintf(portstr, "giop:tcp::%d", port);
				}
				else
				{
					sprintf(portstr, "giop:tcp::");
				}

				//TD14082
				//marvin++
				//TODO:Need to verify with derrick on how to properly handle agent synchronization with high volume of corba messages being sent
				//probably need to send it in batches of 10K alarms
				//TODO:Make GIOP_MAX_MSG_SIZE a runtime parameter
                const char* GIOP_MAX_MSG_SIZE = "104857600";	// 100 MB message size
				//TD14082
				//++marvin

                const char* options[][2] =
                    { { "endPoint", portstr }, 
					{ "clientCallTimeOutPeriod", timeout.c_str() },
					{ "serverCallTimeOutPeriod", timeout.c_str() },
					{ "giopMaxMsgSize", GIOP_MAX_MSG_SIZE }, 
					{ 0, 0 } }; 


				m_orbVar = CORBA::ORB_init(argc, argv,"omniORB4",options);
/*
				// Check to see if we should be using the omni log
				if ( RunParams::getInstance().isSet( "WithOmniLog" ) )
				{
                    // If OmniToDbgLog is ALSO set, omni logging will be written to the debug log,
                    // interleaved with other LOG statements, otherwise it will be written to
                    // a separate log file.
                    if ( RunParams::getInstance().isSet( "OmniToDbgLog" ) )
                    {
                        // NOTE that the DebugLevel must be at least DebugNorm.
					    LOG0(SourceInfo, TA_Base_Core::DebugUtil::DebugInfo,
					        "CorbaUtil::initialise(): omni will write to the debug log file " );

                        omniORB::setLogFunction( writeOmniToDbgLog );
                    }
                    else
                    {
                        // The file seems to be put in the same directory as the omni configuration file.

					    LOG1(SourceInfo, TA_Base_Core::DebugUtil::DebugInfo,
					        "CorbaUtil::initialise(): omni will write to a separate log file "
                            "with the prefix %s_OMNILog_",
                            RunParams::getInstance().get( RPARAM_ENTITYNAME ).c_str() );

					    omniORB::setLogFunction( writeOmniToSeparateLog );
                    }
                                    
                    // Set the OmniOrb trace level. Refer to the OmniOrb documentation, section 
                    // 4.2 Tracing options. The following levels are defined in OmniOrb 4.0.5:
                    // level 0 critical errors only 
                    // level 1 informational messages only 
                    // level 2 configuration information and warnings 
                    // level 5 notifications when server threads are created and communication endpoints are shutdown 
                    // level 10 execution and exception traces 
                    // level 25 trace each send or receive of a giop message 
                    // level 30 dump up to 128 bytes of each giop message 
                    // level 40 dump complete contents of each giop message 
					CORBA::ULong traceLevel = 15;     // Set the default to 15
					if ( RunParams::getInstance().isSet( "OmniLogLevel" ) )
					{
						traceLevel = strtoul( RunParams::getInstance().get( "OmniLogLevel" ).c_str(), NULL, 10 );
					}

                    // Set whether local and remote invocations are logged (in addition to any logging that 
                    // may have been selected with traceLevel).
					CORBA::Boolean traceInvocations( false );
					if ( RunParams::getInstance().isSet( "OmniLogTraceInvocations" ) )
					{
						traceInvocations = true;
					}

					// set the logging level
					omniORB::traceLevel = traceLevel;
					omniORB::traceInvocations = traceInvocations;
				}*/

			}
			else // the orb is already ativated
			{
				printf("have \n");
			}
		}/*
		catch(CORBA::Exception& ex)
		{
			printf("have 2\n");
			return false;
		}*/
		catch(...)
		{
			printf("have 3\n");
			return false;
		}

		return true;
	}
}
