/**
  * The source code in this file is the property of
  * Ripple Systems and is not for redistribution
  * in any form.
  *
  * Source:   $File: //depot/4669_TIP/TA_BASE/transactive/bus/scada/DataPointAgentCorbaDef_Impl/test/stub/DbManager.cpp $
  * @author:  Bradley Cleaver
  * @version: $Revision: #1 $
  *
  * Last modification: $DateTime: 2008/10/31 12:12:40 $
  * Last modified by:  $Author: grace.koh $
  *
  * This class prepares the database to allow the DataNode and
  * DataPoint tests to execute, and cleans up the database afterwards.
  *
  */

#include "DbManager.h"

using TA_Base_Core::SimpleDbDatabase;
using TA_Base_Core::IData;
using TA_Base_Core::DatabaseException;

DbManager::DbManager() : AgentName( "ScadaTestAgent" ),
         DnName( "OCC."+AgentName+".TestDataNode" ),
         BooleanReadDpName( "OCC."+AgentName+".TestBooleanReadDataPoint" ),
         BooleanWriteDpName( "OCC."+AgentName+".TestBooleanWriteDataPoint" ),
         AnalogueReadDpName( "OCC."+AgentName+".TestAnalogueReadDataPoint" ),
         DerivedInput0DpName( "OCC."+AgentName+".TestDerivedInput0DataPoint" ),
         DerivedInput1DpName( "OCC."+AgentName+".TestDerivedInput1DataPoint" ),
         DerivedReadDpName( "OCC."+AgentName+".TestDerivedReadDataPoint" ),
         MeteredInputDpName( "OCC."+AgentName+".TestMeteredInputDataPoint" ),
         MeteredDpName( "OCC."+AgentName+".TestMeteredDataPoint" ),
         SafetyDpName( "OCC."+AgentName+".TestSafetyDataPoint" ),
         SafetyOutput0DpName( "OCC."+AgentName+".TestSafetyOutput0DataPoint" ),
         SafetyOutput1DpName( "OCC."+AgentName+".TestSafetyOutput1DataPoint" )
{
    m_entityKeys.clear();
    m_typeKeys.clear();
    m_parameterKeys.clear();
}

DbManager::~DbManager()
{
// Nothing yet.
}

/** 
  * DbManager::getEntityKey
  *
  * Retrieves the entity key for the specified entity.
  *
  * @param entityName The entity name.
  *
  * @return unsigned int The entity key.
  */
unsigned int DbManager::getEntityKey( std::string entityName )
{
    // Search the entity key map for the provided entity name.
    KeyMap::iterator it = m_entityKeys.find( entityName );
    if ( it != m_entityKeys.end() )
    {
	    return it->second;
    }

    return 0;
}

/** 
  * DbManager::getTypeKey
  *
  * Retrieves the type key for the specified type.
  *
  * @param typeName The type name.
  *
  * @return unsigned int The type key.
  */
unsigned int DbManager::getTypeKey( std::string typeName )
{
    // Search the entity key map for the provided entity name.
    KeyMap::iterator it = m_typeKeys.find( typeName );
    if ( it != m_typeKeys.end() )
    {
	    return it->second;
    }

    return 0;
}

/** 
  * DbManager::addEntities
  *
  * Adds all entities required for testing.
  *
  */
void DbManager::addEntities()
{
    try
    {
        unsigned int AgentKey;
        unsigned int DnKey;
        unsigned int BooleanReadDpKey;
        unsigned int BooleanWriteDpKey;
        unsigned int AnalogueReadDpKey;
        unsigned int DerivedInput0DpKey;
        unsigned int DerivedInput1DpKey;
        unsigned int DerivedReadDpKey;
        unsigned int MeteredInputDpKey;
        unsigned int MeteredDpKey;
        unsigned int SafetyDpKey;
        unsigned int SafetyOutput0DpKey;
        unsigned int SafetyOutput1DpKey;

        // Connect to the database.
        m_db.connect();

        // Add the TestAgent.
        AgentKey = addTestAgent( getEntityTypeKey( "SCADAROOT" ) );
        m_entityKeys.insert( StringUintPair( AgentName, AgentKey ) );

        // Add the DataNode.
        DnKey = addDataNode( DnName, AgentKey );
        m_entityKeys.insert( std::pair<std::string,unsigned int>(DnName,DnKey) );

        // Add the DataNode Parameters.
        addParameter( DnKey, getEntityTypeKey( "DataNode" ), "Label", "DataNode Label" );
        addParameter( DnKey, getEntityTypeKey( "DataNode" ), "ShortLabel", "DataNode Short Label" );
        addParameter( DnKey, getEntityTypeKey( "DataNode" ), "AssetName", "DataNode AssetName" );

        // Add the Boolean Read DataPoint.
        BooleanReadDpKey = addDataPoint( BooleanReadDpName, "Readable Boolean DataPoint", AgentKey, AgentKey );
        m_entityKeys.insert( std::pair<std::string,unsigned int>(BooleanReadDpName,BooleanReadDpKey) );

        // Add the Boolean Read DataPoint Parameters.
        addParameter( BooleanReadDpKey, getEntityTypeKey( "DataPoint" ), "DataPointType", "Boolean" );
        addParameter( BooleanReadDpKey, getEntityTypeKey( "DataPoint" ), "DataTypeShortName", "bool" );
        addParameter( BooleanReadDpKey, getEntityTypeKey( "DataPoint" ), "EnableTrending", "0" );
        addParameter( BooleanReadDpKey, getEntityTypeKey( "DataPoint" ), "FalseAlarmSeverity", "4" );
        addParameter( BooleanReadDpKey, getEntityTypeKey( "DataPoint" ), "FalseAlarmDelay", "2" );
        addParameter( BooleanReadDpKey, getEntityTypeKey( "DataPoint" ), "FalseAlarmMessage", "False Alarm Message" );
        addParameter( BooleanReadDpKey, getEntityTypeKey( "DataPoint" ), "FalseAlarmEnable", "1" );
        addParameter( BooleanReadDpKey, getEntityTypeKey( "DataPoint" ), "TrueAlarmSeverity", "1" );
        addParameter( BooleanReadDpKey, getEntityTypeKey( "DataPoint" ), "TrueAlarmDelay", "1" );
        addParameter( BooleanReadDpKey, getEntityTypeKey( "DataPoint" ), "TrueAlarmMessage", "True Alarm Message" );
        addParameter( BooleanReadDpKey, getEntityTypeKey( "DataPoint" ), "TrueAlarmEnable", "1" );
        addParameter( BooleanReadDpKey, getEntityTypeKey( "DataPoint" ), "FalseLabel", "false" );
        addParameter( BooleanReadDpKey, getEntityTypeKey( "DataPoint" ), "TrueLabel", "true" );
        addParameter( BooleanReadDpKey, getEntityTypeKey( "DataPoint" ), "AllowWrite", "0" );
        addParameter( BooleanReadDpKey, getEntityTypeKey( "DataPoint" ), "ServiceState", "IN" );
        addParameter( BooleanReadDpKey, getEntityTypeKey( "DataPoint" ), "DataType", "BOOL" );
        addParameter( BooleanReadDpKey, getEntityTypeKey( "DataPoint" ), "DisplayOrder", "-1" );

        // Add the Boolean Write DataPoint.
        BooleanWriteDpKey = addDataPoint( BooleanWriteDpName, "Boolean DataPoint", AgentKey, AgentKey );
        m_entityKeys.insert( std::pair<std::string,unsigned int>(BooleanWriteDpName,BooleanWriteDpKey) );

        // Add the Boolean Write DataPoint Parameters.
        addParameter( BooleanWriteDpKey, getEntityTypeKey( "DataPoint" ), "DataPointType", "Boolean" );
        addParameter( BooleanWriteDpKey, getEntityTypeKey( "DataPoint" ), "DataTypeShortName", "bool" );
        addParameter( BooleanWriteDpKey, getEntityTypeKey( "DataPoint" ), "HelpURL", "http://helpurl.com/" );
        addParameter( BooleanWriteDpKey, getEntityTypeKey( "DataPoint" ), "EnableHelpURL", "1" );
        addParameter( BooleanWriteDpKey, getEntityTypeKey( "DataPoint" ), "EngineeringNote", "Engineering Note" );
        addParameter( BooleanWriteDpKey, getEntityTypeKey( "DataPoint" ), "EnableEngineeringNote", "1" );
        addParameter( BooleanWriteDpKey, getEntityTypeKey( "DataPoint" ), "EnableTrending", "0" );
        addParameter( BooleanWriteDpKey, getEntityTypeKey( "DataPoint" ), "FalseLabel", "false" );
        addParameter( BooleanWriteDpKey, getEntityTypeKey( "DataPoint" ), "TrueLabel", "true" );
        addParameter( BooleanWriteDpKey, getEntityTypeKey( "DataPoint" ), "AllowWrite", "1" );
        addParameter( BooleanWriteDpKey, getEntityTypeKey( "DataPoint" ), "ServiceState", "IN" );
        addParameter( BooleanWriteDpKey, getEntityTypeKey( "DataPoint" ), "DataType", "BOOL" );
        addParameter( BooleanWriteDpKey, getEntityTypeKey( "DataPoint" ), "DisplayOrder", "-1" );
        addParameter( BooleanWriteDpKey, getEntityTypeKey( "DataPoint" ), "LaunchCondition", "{"+BooleanReadDpName+"} = FALSE" );
        addParameter( BooleanWriteDpKey, getEntityTypeKey( "DataPoint" ), "MaxTextLength", "100" );

        // Add the Analogue Read DataPoint.
        AnalogueReadDpKey = addDataPoint( AnalogueReadDpName, "A nonwritable analogue datapoint", AgentKey, AgentKey );
        m_entityKeys.insert( std::pair<std::string,unsigned int>(AnalogueReadDpName,AnalogueReadDpKey) );

        // Add the Analogue Read DataPoint Parameters.
        addParameter(AnalogueReadDpKey, getEntityTypeKey( "DataPoint" ), "DataPointType", "Analogue" );
        addParameter(AnalogueReadDpKey, getEntityTypeKey( "DataPoint" ), "DataTypeShortName", "analogue" );
        addParameter(AnalogueReadDpKey, getEntityTypeKey( "DataPoint" ), "EnableTrending", "0" );
        addParameter(AnalogueReadDpKey, getEntityTypeKey( "DataPoint" ), "LoLoSeverity", "4" );
        addParameter(AnalogueReadDpKey, getEntityTypeKey( "DataPoint" ), "LoLoAlarmDelay", "0" );
        addParameter(AnalogueReadDpKey, getEntityTypeKey( "DataPoint" ), "LoLoAlarmMessage", "Thank god I have an athlon" );
        addParameter(AnalogueReadDpKey, getEntityTypeKey( "DataPoint" ), "LoLoAlarmValue", "20" );
        addParameter(AnalogueReadDpKey, getEntityTypeKey( "DataPoint" ), "LoLoAlarmEnabled", "1" );
        addParameter(AnalogueReadDpKey, getEntityTypeKey( "DataPoint" ), "LoSeverity", "3" );
        addParameter(AnalogueReadDpKey, getEntityTypeKey( "DataPoint" ), "LoAlarmDelay", "0" );
        addParameter(AnalogueReadDpKey, getEntityTypeKey( "DataPoint" ), "LoAlarmMessage", "Starting to get cold" );
        addParameter(AnalogueReadDpKey, getEntityTypeKey( "DataPoint" ), "LoAlarmValue", "40" );
        addParameter(AnalogueReadDpKey, getEntityTypeKey( "DataPoint" ), "LoAlarmEnabled", "1" );
        addParameter(AnalogueReadDpKey, getEntityTypeKey( "DataPoint" ), "HiSeverity", "2" );
        addParameter(AnalogueReadDpKey, getEntityTypeKey( "DataPoint" ), "HiAlarmDelay", "0" );
        addParameter(AnalogueReadDpKey, getEntityTypeKey( "DataPoint" ), "HiAlarmMessage", "I hope western power can cope" );
        addParameter(AnalogueReadDpKey, getEntityTypeKey( "DataPoint" ), "HiAlarmValue", "60" );
        addParameter(AnalogueReadDpKey, getEntityTypeKey( "DataPoint" ), "HiAlarmEnabled", "1" );
        addParameter(AnalogueReadDpKey, getEntityTypeKey( "DataPoint" ), "HiHiSeverity", "1" );
        addParameter(AnalogueReadDpKey, getEntityTypeKey( "DataPoint" ), "HiHiAlarmDelay", "0" );
        addParameter(AnalogueReadDpKey, getEntityTypeKey( "DataPoint" ), "HiHiAlarmMessage", "Time to leave work" );
        addParameter(AnalogueReadDpKey, getEntityTypeKey( "DataPoint" ), "HiHiAlarmValue", "80" );
        addParameter(AnalogueReadDpKey, getEntityTypeKey( "DataPoint" ), "HiHiAlarmEnabled", "1" );
        addParameter(AnalogueReadDpKey, getEntityTypeKey( "DataPoint" ), "EngineeringLimitHigh", "100" );
        addParameter(AnalogueReadDpKey, getEntityTypeKey( "DataPoint" ), "EngineeringLimitLow", "0" );
        addParameter(AnalogueReadDpKey, getEntityTypeKey( "DataPoint" ), "RawLimitHigh", "50" );
        addParameter(AnalogueReadDpKey, getEntityTypeKey( "DataPoint" ), "RawLimitLow", "0" );
        addParameter(AnalogueReadDpKey, getEntityTypeKey( "DataPoint" ), "ZeroValueThreshold", "10" );
        addParameter(AnalogueReadDpKey, getEntityTypeKey( "DataPoint" ), "Precision", "0" );
        addParameter(AnalogueReadDpKey, getEntityTypeKey( "DataPoint" ), "UnitLabel", "Temperature" );
        addParameter(AnalogueReadDpKey, getEntityTypeKey( "DataPoint" ), "ConversionEnabled", "1" );
        addParameter(AnalogueReadDpKey, getEntityTypeKey( "DataPoint" ), "UpdateTimeLimit", "1" );
        addParameter(AnalogueReadDpKey, getEntityTypeKey( "DataPoint" ), "UpdateThreshold", "20" );
        addParameter(AnalogueReadDpKey, getEntityTypeKey( "DataPoint" ), "AllowWrite", "0" );
        addParameter(AnalogueReadDpKey, getEntityTypeKey( "DataPoint" ), "ServiceState", "IN" );
        addParameter(AnalogueReadDpKey, getEntityTypeKey( "DataPoint" ), "DataType", "INT_32" );

        // Add the first Derived Input DataPoint.
        DerivedInput0DpKey = addDataPoint( DerivedInput0DpName, "Forward", AgentKey, AgentKey );
        m_entityKeys.insert( std::pair<std::string,unsigned int>(DerivedInput0DpName,DerivedInput0DpKey) );

        // Add the first Derived Input DataPoint Parameters.
        addParameter( DerivedInput0DpKey, getEntityTypeKey( "DataPoint" ), "DataPointType", "Boolean" );
        addParameter( DerivedInput0DpKey, getEntityTypeKey( "DataPoint" ), "DataTypeShortName", "bool" );
        addParameter( DerivedInput0DpKey, getEntityTypeKey( "DataPoint" ), "EnableTrending", "0" );
        addParameter( DerivedInput0DpKey, getEntityTypeKey( "DataPoint" ), "FalseLabel", "false" );
        addParameter( DerivedInput0DpKey, getEntityTypeKey( "DataPoint" ), "TrueLabel", "true" );
        addParameter( DerivedInput0DpKey, getEntityTypeKey( "DataPoint" ), "AllowWrite", "0" );
        addParameter( DerivedInput0DpKey, getEntityTypeKey( "DataPoint" ), "ServiceState", "IN" );
        addParameter( DerivedInput0DpKey, getEntityTypeKey( "DataPoint" ), "DataType", "BOOL" );

        // Add the second Derived Input DataPoint.
        DerivedInput1DpKey = addDataPoint( DerivedInput1DpName, "Reverse", AgentKey, AgentKey );
        m_entityKeys.insert( std::pair<std::string,unsigned int>(DerivedInput1DpName,DerivedInput1DpKey) );

        // Add the second Derived Input DataPoint Parameters.
        addParameter( DerivedInput1DpKey, getEntityTypeKey( "DataPoint" ), "DataPointType", "Boolean" );
        addParameter( DerivedInput1DpKey, getEntityTypeKey( "DataPoint" ), "DataTypeShortName", "bool" );
        addParameter( DerivedInput1DpKey, getEntityTypeKey( "DataPoint" ), "EnableTrending", "0" );
        addParameter( DerivedInput1DpKey, getEntityTypeKey( "DataPoint" ), "FalseLabel", "false" );
        addParameter( DerivedInput1DpKey, getEntityTypeKey( "DataPoint" ), "TrueLabel", "true" );
        addParameter( DerivedInput1DpKey, getEntityTypeKey( "DataPoint" ), "AllowWrite", "0" );
        addParameter( DerivedInput1DpKey, getEntityTypeKey( "DataPoint" ), "ServiceState", "IN" );
        addParameter( DerivedInput1DpKey, getEntityTypeKey( "DataPoint" ), "DataType", "BOOL" );

        // Add the Derived DataPoint.
        DerivedReadDpKey = addDataPoint( DerivedReadDpName, "Derived Fan datapoint", AgentKey, AgentKey );
        m_entityKeys.insert( std::pair<std::string,unsigned int>(DerivedReadDpName,DerivedReadDpKey) );

        // Add the Derived DataPoint Parameters.
        addParameter( DerivedReadDpKey, getEntityTypeKey( "DataPoint" ), "DataPointType", "Derived" );
        addParameter( DerivedReadDpKey, getEntityTypeKey( "DataPoint" ), "DataTypeShortName", "derived" );
        addParameter( DerivedReadDpKey, getEntityTypeKey( "DataPoint" ), "EnableTrending", "0" );
        addParameter( DerivedReadDpKey, getEntityTypeKey( "DataPoint" ), "AllowWrite", "0" );
        addParameter( DerivedReadDpKey, getEntityTypeKey( "DataPoint" ), "ServiceState", "IN" );
        addParameter( DerivedReadDpKey, getEntityTypeKey( "DataPoint" ), "DataType", "DERIVED" );

        // Add the hardcoded information for the derived DataPoint.
        addDerivedInfo( DerivedReadDpKey, DerivedInput0DpKey, DerivedInput1DpKey );

        
        // Add the Metered Input DataPoint.
        MeteredInputDpKey = addDataPoint( MeteredInputDpName, "A metered input data point", AgentKey, AgentKey );
        m_entityKeys.insert( std::pair<std::string,unsigned int>(MeteredInputDpName,MeteredInputDpKey) );

        // Add the Metered Input DataPoint Parameters.
        addParameter(MeteredInputDpKey, getEntityTypeKey( "DataPoint" ), "DataPointType", "Analogue" );
        addParameter(MeteredInputDpKey, getEntityTypeKey( "DataPoint" ), "DataTypeShortName", "analogue" );
        addParameter(MeteredInputDpKey, getEntityTypeKey( "DataPoint" ), "EnableTrending", "0" );
        addParameter(MeteredInputDpKey, getEntityTypeKey( "DataPoint" ), "ZeroValueThreshold", "0" );
        addParameter(MeteredInputDpKey, getEntityTypeKey( "DataPoint" ), "Precision", "0" );
        addParameter(MeteredInputDpKey, getEntityTypeKey( "DataPoint" ), "UpdateTimeLimit", "0" );
        addParameter(MeteredInputDpKey, getEntityTypeKey( "DataPoint" ), "UpdateThreshold", "0" );
        addParameter(MeteredInputDpKey, getEntityTypeKey( "DataPoint" ), "AllowWrite", "0" );
        addParameter(MeteredInputDpKey, getEntityTypeKey( "DataPoint" ), "ServiceState", "IN" );
        addParameter(MeteredInputDpKey, getEntityTypeKey( "DataPoint" ), "DataType", "INT_16" );

        // Add the Metered DataPoint.
        MeteredDpKey = addDataPoint( MeteredDpName, "A metered datapoint", AgentKey, AgentKey );
        m_entityKeys.insert( std::pair<std::string,unsigned int>(MeteredDpName,MeteredDpKey) );
        
        // Add the Metered DataPoint Parameters.
        char buffer[20];
        addParameter(MeteredDpKey, getEntityTypeKey( "DataPoint" ), "DataPointType", "Metered" );
        addParameter(MeteredDpKey, getEntityTypeKey( "DataPoint" ), "EnableTrending", "0" );
        addParameter(MeteredDpKey, getEntityTypeKey( "DataPoint" ), "AllowWrite", "0" );
        addParameter(MeteredDpKey, getEntityTypeKey( "DataPoint" ), "ServiceState", "IN" );
        addParameter(MeteredDpKey, getEntityTypeKey( "DataPoint" ), "DataType", "INT_16" );
        addParameter(MeteredDpKey, getEntityTypeKey( "DataPoint" ), "InputDependency", std::string( _itoa( MeteredInputDpKey, buffer, 10 ) ) );
        addParameter(MeteredDpKey, getEntityTypeKey( "DataPoint" ), "RolloverConstant", "100" );
        addParameter(MeteredDpKey, getEntityTypeKey( "DataPoint" ), "MeterFactor", "1" );

        // Add the first safety output DataPoint.
        SafetyOutput0DpKey = addDataPoint( SafetyOutput0DpName, "Boolean DataPoint", AgentKey, AgentKey );
        m_entityKeys.insert( std::pair<std::string,unsigned int>(SafetyOutput0DpName,SafetyOutput0DpKey) );

        // Add the first safety output DataPoint Parameters.
        addParameter( SafetyOutput0DpKey, getEntityTypeKey( "DataPoint" ), "DataPointType", "Boolean" );
        addParameter( SafetyOutput0DpKey, getEntityTypeKey( "DataPoint" ), "EnableTrending", "0" );
        addParameter( SafetyOutput0DpKey, getEntityTypeKey( "DataPoint" ), "FalseLabel", "false" );
        addParameter( SafetyOutput0DpKey, getEntityTypeKey( "DataPoint" ), "TrueLabel", "true" );
        addParameter( SafetyOutput0DpKey, getEntityTypeKey( "DataPoint" ), "AllowWrite", "1" );
        addParameter( SafetyOutput0DpKey, getEntityTypeKey( "DataPoint" ), "ServiceState", "IN" );
        addParameter( SafetyOutput0DpKey, getEntityTypeKey( "DataPoint" ), "DataType", "BOOL" );

        // Add the second safety output DataPoint.
        SafetyOutput1DpKey = addDataPoint( SafetyOutput1DpName, "Boolean DataPoint", AgentKey, AgentKey );
        m_entityKeys.insert( std::pair<std::string,unsigned int>(SafetyOutput1DpName,SafetyOutput1DpKey) );

        // Add the second safety output DataPoint Parameters.
        addParameter( SafetyOutput1DpKey, getEntityTypeKey( "DataPoint" ), "DataPointType", "Boolean" );
        addParameter( SafetyOutput1DpKey, getEntityTypeKey( "DataPoint" ), "EnableTrending", "0" );
        addParameter( SafetyOutput1DpKey, getEntityTypeKey( "DataPoint" ), "FalseLabel", "false" );
        addParameter( SafetyOutput1DpKey, getEntityTypeKey( "DataPoint" ), "TrueLabel", "true" );
        addParameter( SafetyOutput1DpKey, getEntityTypeKey( "DataPoint" ), "AllowWrite", "1" );
        addParameter( SafetyOutput1DpKey, getEntityTypeKey( "DataPoint" ), "ServiceState", "IN" );
        addParameter( SafetyOutput1DpKey, getEntityTypeKey( "DataPoint" ), "DataType", "BOOL" );

        // Add the SafetyOutputDataPoint.
        SafetyDpKey = addDataPoint( SafetyDpName, "Boolean DataPoint", AgentKey, AgentKey );
        m_entityKeys.insert( std::pair<std::string,unsigned int>(SafetyDpName,SafetyDpKey) );

        // Add the SafetyOutputDataPoint Parameters.
        addParameter( SafetyDpKey, getEntityTypeKey( "DataPoint" ), "DataPointType", "SafetyOutput" );
        addParameter( SafetyDpKey, getEntityTypeKey( "DataPoint" ), "EnableTrending", "0" );
        addParameter( SafetyDpKey, getEntityTypeKey( "DataPoint" ), "AllowWrite", "1" );
        addParameter( SafetyDpKey, getEntityTypeKey( "DataPoint" ), "ServiceState", "IN" );
        addParameter( SafetyDpKey, getEntityTypeKey( "DataPoint" ), "DataType", "UINT_16" );

        // Add the safety specific details.
        addSafetyOutputInfo( SafetyDpKey, SafetyOutput0DpKey, SafetyOutput1DpKey );

        // Disconnect from the database.
        m_db.disconnect();
    }
    catch ( ... )
    {
        // Disconnect from the database - removeEntites connects again.
        m_db.disconnect();

        // Remove all the entities.
        removeEntities();

        // Throw the exception on.
        throw;
    }
}

/** 
  * DbManager::removeEntities
  *
  * Removes all entities.
  *
  */
void DbManager::removeEntities()
{
    // Only bother if there are elements in the map.
    if ( m_entityKeys.size() > 0 )
    {
        // Connect to the database.
        m_db.connect();

        // Iterator through the entities (in reverse).
        KeyMap::iterator it = m_entityKeys.end();
    
        for ( --it;;it-- )
        {
            // Remove any events associated with the entity.
            removeEvents( it->second );

            // Remove any parameters associated with the entity.
            removeParameters( it->second );

            // Remove any SafetyOutput information.
            removeSafetyOutputInfo( it->second );

            // Remove any derived information.
            removeDerivedInfo( it->second );

            // Remove the entity itself.
            removeEntity( it->second );

            // Exit the for loop.
            if ( it == m_entityKeys.begin() )
            {
                break;
            }
        }

        // Clear the list.
        m_entityKeys.clear();

        // Disconnect from the database.
        m_db.disconnect();
    }
}

/** 
  * DbManager::getEntityTypeKey
  *
  * Determines the pkey for EntityType 'name'.
  *
  * @param name The name to find.
  *
  * @return unsigned int The pkey.
  *
  */
unsigned int DbManager::getEntityTypeKey( std::string name )
{
    // Search the type key map for the provided type name.
    KeyMap::iterator it = m_typeKeys.find( name );
    if ( it != m_typeKeys.end() )
    {
	    return it->second;
    }

    // If the key wasn't found retrieve it from the database.
    unsigned int pkey = 0;

    IData* id = NULL;
    std::vector<std::string> columns;
    columns.push_back( "pkey" );
    id = m_db.executeQuery( "SELECT pkey FROM entitytype WHERE name = '"+name+"'", columns );

    if ( id->getNumRows() == 1 )
    {
        pkey = id->getUnsignedLongData( 0, "pkey" );

        delete id;
        id = NULL;
    }
    else
    {
        delete id;
        id = NULL;

        std::string message = "Couldnt find EntityType "+name;
        throw DatabaseException( message.c_str(), DatabaseException::REQUEST_FAILED );
    }

    // Insert the type into the map.
    m_typeKeys.insert( std::pair<std::string,unsigned int>( name, pkey ) );

    return pkey;
}

/** 
  * DbManager::getEntityParameterKey
  *
  * Determines the pkey for EntityParameter 'name' associated with 'type'.
  *
  * @param name The name to find.
  * @param type The type of the parameter.
  *
  * @return unsigned int The pkey.
  *
  */
unsigned int DbManager::getEntityParameterKey( std::string name, unsigned int type )
{
    // Search the type key map for the provided type name.
    ParameterMap::iterator it = m_parameterKeys.find( StringUintPair(name,type) );
    if ( it != m_parameterKeys.end() )
    {
	    return it->second;
    }

    // If the key wasn't found retrieve it from the database.
    
    unsigned int pkey = 0;

    IData* id = NULL;
    std::vector<std::string> columns;
    columns.push_back( "pkey" );

    std::ostringstream query;
    query << "SELECT pkey FROM entityparameter WHERE name = '";
    query << name;
    query << "' AND typekey = ";
    query << type;
    id = m_db.executeQuery( query.str(), columns );

    if ( id->getNumRows() == 1 )
    {
        pkey = id->getUnsignedLongData( 0, "pkey" );

        delete id;
        id = NULL;
    }
    else
    {
        delete id;
        id = NULL;

        std::string message = "Couldnt find unique EntityParameter "+name;
        throw DatabaseException( message.c_str(), DatabaseException::REQUEST_FAILED );
    }

    // Insert the parameter into the map.
    m_parameterKeys.insert( std::pair<StringUintPair,unsigned int>( StringUintPair(name,type), pkey ) );

    return pkey;
}

/** 
  * DbManager::addTestAgent
  *
  * Adds the test agent to the Entity table.
  *
  * @return unsigned int The pkey of the test agent.
  */
unsigned int DbManager::addTestAgent( unsigned int scadaRootType )
{
    unsigned int agentKey = 0;

    // Get the SCADAROOT type.
    IData* id = NULL;
    std::vector<std::string> columns;
    columns.push_back( "pkey" );

    // See if the agent already exists.
    id = m_db.executeQuery( "SELECT pkey FROM entity WHERE name = '"+AgentName+"'", columns );

    // Add the agent if it doesn't.
    if ( id->getNumRows() == 0 )
    {
        delete id;
        id = NULL;

        std::ostringstream query;
        query << "INSERT INTO entity ";
        query << "(pkey,name,address,description,subsystemkey,locationkey,typekey,";
        query << "agentkey,parentkey) VALUES (ENTITY_SEQ.NEXTVAL,'";
        query << AgentName;
        query << "','VIRTUAL','Test Agent',6,1,";
        query << scadaRootType;
        query << ",ENTITY_SEQ.NEXTVAL,0)";
        m_db.executeModification( query.str() );

        // Get the pkey of the agent.
        id = m_db.executeQuery( "SELECT pkey FROM entity WHERE name = '"+AgentName+"'", columns );
    }

    agentKey = id->getUnsignedLongData( 0, "pkey" );

    delete id;
    id = NULL;
   
    return agentKey;
}

/** 
  * DbManager::addDataNode
  *
  * Adds the DataNode to the Entity table.
  *
  * @param parentKey The pkey of the parent.
  * @return unsigned int The pkey of the datanode.
  */
unsigned int DbManager::addDataNode( std::string name, unsigned int agentKey )
{
    unsigned int dataNodeType = getEntityTypeKey( "DataNode" );
    unsigned int dataNodeKey = 0;

    IData* id = NULL;
    std::vector<std::string> columns;
    columns.push_back( "pkey" );

    // See if the agent already exists.
    id = m_db.executeQuery( "SELECT pkey FROM entity WHERE name = '"+name+"'", columns );

    // Add the agent if it doesn't.
    if ( id->getNumRows() == 0 )
    {
        delete id;
        id = NULL;

        std::ostringstream query;
        query << "INSERT INTO entity ";
        query << "(pkey,name,address,description,subsystemkey,locationkey,typekey,";
        query << "agentkey,parentkey) VALUES (ENTITY_SEQ.NEXTVAL,'";
        query << name;
        query << "','Test DataNode','Test DataNode',6,1,";
        query << dataNodeType;
        query << ",";
        query << agentKey;
        query << ",";
        query << agentKey;
        query << ")";
        m_db.executeModification( query.str() );

        // Get the DataNode's pkey.
        id = m_db.executeQuery( "SELECT pkey FROM entity WHERE name = '"+name+"'", columns );
        dataNodeKey = id->getUnsignedLongData( 0, "pkey" );

        delete id;
        id = NULL;
    }
    else
    {
        // If the DataNode exists, make sure no parameters are set.
        dataNodeKey = id->getUnsignedLongData( 0, "pkey" );

        delete id;
        id = NULL;

        // Make sure the DataNode has no parameters.
        removeParameters( dataNodeKey );
    }
    
    return dataNodeKey;
}

/** 
  * DbManager::addDataPoint
  *
  * Adds a DataPoint to the database.
  *
  * @param name The name of the DataPoint.
  * @param dataPointType The type 
  * @param agentKey The 
  * @param 
  *
  * @return 
  *
  */
unsigned int DbManager::addDataPoint( std::string name, std::string description, unsigned int agentKey, unsigned int parentKey )
{
    unsigned int dataPointType = getEntityTypeKey( "DataPoint" );
    unsigned int dataPointKey = 0;

    IData* id = NULL;
    std::vector<std::string> columns;
    columns.push_back( "pkey" );

    // See if the agent already exists.
    id = m_db.executeQuery( "SELECT pkey FROM entity WHERE name = '"+name+"'", columns );

    // Add the agent if it doesn't.
    if ( id->getNumRows() == 0 )
    {
        delete id;
        id = NULL;

        std::ostringstream query;
        query << "INSERT INTO entity ";
        query << "(pkey,name,address,description,subsystemkey,locationkey,typekey,";
        query << "agentkey,parentkey) VALUES (ENTITY_SEQ.NEXTVAL,'";
        query << name;
        query << "','VIRTUAL','";
        query << description;
        query << "',6,1,";
        query << dataPointType;
        query << ",";
        query << agentKey;
        query << ",";
        query << parentKey;
        query << ")";
        m_db.executeModification( query.str() );

        // Get the DataNode's pkey.
        id = m_db.executeQuery( "SELECT pkey FROM entity WHERE name = '"+name+"'", columns );
        dataPointKey = id->getUnsignedLongData( 0, "pkey" );

        delete id;
        id = NULL;
    }
    else
    {
        // If the DataNode exists, make sure no parameters are set.
        dataPointKey = id->getUnsignedLongData( 0, "pkey" );

        delete id;
        id = NULL;

        // Make sure the DataPoint has no parameters.
        removeParameters( dataPointKey );

        // Make sure there is no associated safety information.
        removeSafetyOutputInfo( dataPointKey );

        // Make sure there is no associated derived information.
        removeDerivedInfo( dataPointKey );
    }

    return dataPointKey;
}


/** 
  * DbManager::addParameter
  *
  * Adds the specified parameter to the specified entity.
  *
  * @param entityKey The entity to add the parameter to.
  * @param entityType The type of the entity.
  * @param parameter The parameter to set.
  * @param value The value of the parameter.
  *
  */
void DbManager::addParameter( unsigned int entityKey, unsigned int entityType, std::string parameter, std::string value )
{
    // Determine the parameter key.
    unsigned int parameterKey = getEntityParameterKey( parameter, entityType );
    if ( parameterKey == 0 )
    {
        std::string message = "Couldnt find paramete key for "+parameter;
        throw DatabaseException( message.c_str(), DatabaseException::REQUEST_FAILED );
    }

    // Add the parameter.
    std::ostringstream query;
    query << "INSERT INTO entityparametervalue ( pkey,entitykey,parameterkey,value ) VALUES ";
    query << "( ENTITYPARAMETERVALUE_SEQ.NEXTVAL,";
    query << entityKey;
    query << ",";
    query << parameterKey;
    query << ",'";
    query << value;
    query << "')";
    m_db.executeModification( query.str() );
}

/**
  * DbManager::addDerivedInfo
  *
  * Adds the correct information to the derived DataPoint.
  *
  * @param entityKey The entity key to add the information to.
  */
void DbManager::addDerivedInfo( unsigned int derivedKey, unsigned int input0Key, unsigned int input1Key )
{
    std::ostringstream query;

    // Add the input associations.
    query << "INSERT INTO sc_input_association ( sciass_id,main_entity_pkey,";
    query << "input_entity_pkey,input_calc_order ) VALUES ( SCADA_SEQ.NEXTVAL,";
    query << derivedKey;
    query << ",";
    query << input0Key;
    query << ",0 )";
    m_db.executeModification( query.str() );

    query.str("");
    query << "INSERT INTO sc_input_association ( sciass_id,main_entity_pkey,";
    query << "input_entity_pkey,input_calc_order ) VALUES ( SCADA_SEQ.NEXTVAL,";
    query << derivedKey;
    query << ",";
    query << input1Key;
    query << ",1 )";
    m_db.executeModification( query.str() );

    // Add the states.
    query.str("");
    query << "INSERT INTO sc_derived_state ( scdsta_id,derived_dp_pkey,state_value,";
    query << "state_description,alarm_enabled,alarm_delay,alarm_message,";
    query << "alarm_severity ) VALUES ( SCADA_SEQ.NEXTVAL,";
    query << derivedKey;
    query << ",0,'State 0',0,0,'State 0 Alarm',0 )";
    m_db.executeModification( query.str() );

    query.str("");
    query << "INSERT INTO sc_derived_state ( scdsta_id,derived_dp_pkey,state_value,";
    query << "state_description,alarm_enabled,alarm_delay,alarm_message,";
    query << "alarm_severity ) VALUES ( SCADA_SEQ.NEXTVAL,";
    query << derivedKey;
    query << ",1,'State 1',0,0,'State 1 Alarm',0 )";
    m_db.executeModification( query.str() );

    query.str("");
    query << "INSERT INTO sc_derived_state ( scdsta_id,derived_dp_pkey,state_value,";
    query << "state_description,alarm_enabled,alarm_delay,alarm_message,";
    query << "alarm_severity ) VALUES ( SCADA_SEQ.NEXTVAL,";
    query << derivedKey;
    query << ",2,'State 2',0,0,'State 2 Alarm',0 )";
    m_db.executeModification( query.str() );

    query.str("");
    query << "INSERT INTO sc_derived_state ( scdsta_id,derived_dp_pkey,state_value,";
    query << "state_description,alarm_enabled,alarm_delay,alarm_message,";
    query << "alarm_severity ) VALUES ( SCADA_SEQ.NEXTVAL,";
    query << derivedKey;
    query << ",3,'State 3',1,0,'State 3 Alarm',1 )";
    m_db.executeModification( query.str() );
}

/**
  * DbManager::addSafetyOutputInfo
  *
  * Adds the correct information to the SafetyOutputDataPoint.
  *
  * @param entityKey The entity key to add the information to.
  */
void DbManager::addSafetyOutputInfo( unsigned int safetyKey, unsigned int output0Key, unsigned int output1Key )
{
    unsigned int state0Key = 0;
    unsigned int state1Key = 0;
    IData* id = NULL;
    std::vector<std::string> columns;
    columns.push_back( "scdsta_id" );

    std::ostringstream query;

    // Add the states.
    query.str("");
    query << "INSERT INTO sc_derived_state ( scdsta_id,derived_dp_pkey,state_value,";
    query << "state_description,alarm_enabled,alarm_delay,alarm_message,";
    query << "alarm_severity ) VALUES ( SCADA_SEQ.NEXTVAL,";
    query << safetyKey;
    query << ",0,'State 0',0,0,'State 0 Alarm',0 )";
    m_db.executeModification( query.str() );

    query.str("");
    query << "INSERT INTO sc_derived_state ( scdsta_id,derived_dp_pkey,state_value,";
    query << "state_description,alarm_enabled,alarm_delay,alarm_message,";
    query << "alarm_severity ) VALUES ( SCADA_SEQ.NEXTVAL,";
    query << safetyKey;
    query << ",1,'State 1',0,0,'State 1 Alarm',0 )";
    m_db.executeModification( query.str() );

    // Get the keys.
    query.str("");
    query << "SELECT scdsta_id FROM sc_derived_state WHERE derived_dp_pkey = ";
    query << safetyKey;
    query << " ORDER BY scdsta_id";
    id = m_db.executeQuery( query.str(), columns );
    if ( id->getNumRows() != 2 )
    {
        delete id;
        id = NULL;
        throw DatabaseException( "Couldn't find both safety output states!", DatabaseException::REQUEST_FAILED );
    }
    state0Key = id->getUnsignedLongData( 0, "scdsta_id" );
    state1Key = id->getUnsignedLongData( 1, "scdsta_id" );
    delete id;
    id = NULL;

    // Add the output associations.
    query.str("");
    query << "INSERT INTO sc_derived_output_association ( scdoas_id,scdsta_id,";
    query << "output_dp_pkey,output_value ) VALUES ( SCADA_SEQ.NEXTVAL,";
    query << state0Key;
    query << ",";
    query << output0Key;
    query << ",1 )";
    m_db.executeModification( query.str() );

    query.str("");
    query << "INSERT INTO sc_derived_output_association ( scdoas_id,scdsta_id,";
    query << "output_dp_pkey,output_value ) VALUES ( SCADA_SEQ.NEXTVAL,";
    query << state0Key;
    query << ",";
    query << output1Key;
    query << ",0 )";
    m_db.executeModification( query.str() );

    query.str("");
    query << "INSERT INTO sc_derived_output_association ( scdoas_id,scdsta_id,";
    query << "output_dp_pkey,output_value ) VALUES ( SCADA_SEQ.NEXTVAL,";
    query << state1Key;
    query << ",";
    query << output0Key;
    query << ",0 )";
    m_db.executeModification( query.str() );

    query.str("");
    query << "INSERT INTO sc_derived_output_association ( scdoas_id,scdsta_id,";
    query << "output_dp_pkey,output_value ) VALUES ( SCADA_SEQ.NEXTVAL,";
    query << state1Key;
    query << ",";
    query << output1Key;
    query << ",1 )";
    m_db.executeModification( query.str() );
}

/** 
  * DbManager::removeEvents
  *
  * Removes the specified events from the database.
  *
  * @param entityKey The entity key to remove events for.
  *
  */
void DbManager::removeEvents( unsigned int entityKey )
{
    try
    {
        std::ostringstream query;
        query << "DELETE FROM event WHERE entitykey = ";
        query << entityKey;
        m_db.executeModification( query.str() );
    }
    catch ( ... )
    {
    }
}

/** 
  * DbManager::removeEntity
  *
  * Removes the specified entity from the database.
  *
  * @param entityKey The entity to remove.
  *
  */
void DbManager::removeEntity( unsigned int entityKey )
{
    try
    {
        std::ostringstream query;
        query << "DELETE FROM entity WHERE pkey = ";
        query << entityKey;
        m_db.executeModification( query.str() );
    }
    catch ( ... )
    {
    }
}

/** 
  * DbManager::removeParameters
  *
  * Removes the parameters for the specified entity.
  *
  * @param entityKey The entity to remove the parameters for.
  */
void DbManager::removeParameters( unsigned int entityKey )
{
    try
    {
        std::ostringstream query;
        query << "DELETE FROM entityparametervalue WHERE entitykey = ";
        query << entityKey;
        m_db.executeModification( query.str() );
    }
    catch ( ... )
    {
    }
}

/**
  * DbManager::removeDerivedInfo
  *
  * Removes the information related to a derived data point.
  *
  * @param entityKey The entity to remove the derived information for.
  */
void DbManager::removeDerivedInfo( unsigned int entityKey )
{
    // Remove the states.
    try
    {
        std::ostringstream query;
        query << "DELETE FROM sc_derived_state WHERE derived_dp_pkey = ";
        query << entityKey;
        m_db.executeModification( query.str() );
    }
    catch ( ... )
    {
    }

    // Remove the input associations.
    try
    {
        std::ostringstream query;
        query << "DELETE FROM sc_input_association WHERE main_entity_pkey = ";
        query << entityKey;
        m_db.executeModification( query.str() );
    }
    catch ( ... )
    {
    }
}

/**
  * DbManager::removeSafetyOutputInfo
  *
  * Removes the information related to a SafetyOutputDataPoint.
  *
  * @param entityKey The entity to remove the SafetyOutput information for.
  */
void DbManager::removeSafetyOutputInfo( unsigned int entityKey )
{
    // Remove the output associations.
    try
    {
        std::ostringstream query;
        query << "DELETE FROM sc_derived_output_association WHERE output_dp_pkey = ";
        query << entityKey;
        m_db.executeModification( query.str() );
    }
    catch ( ... )
    {
    }
    
    // Remove the states.
    try
    {
        std::ostringstream query;
        query << "DELETE FROM sc_derived_state WHERE derived_dp_pkey = ";
        query << entityKey;
        m_db.executeModification( query.str() );
    }
    catch ( ... )
    {
    }
}
