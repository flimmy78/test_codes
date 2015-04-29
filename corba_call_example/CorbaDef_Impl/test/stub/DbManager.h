/**
  * The source code in this file is the property of
  * Ripple Systems and is not for redistribution
  * in any form.
  *
  * Source:   $File: //depot/4669_TIP/TA_BASE/transactive/bus/scada/DataPointAgentCorbaDef_Impl/test/stub/DbManager.h $
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

#if !defined(_DBMANAGER_H_)
#define _DBMANAGER_H_

#include <map>
#include <sstream>

#include "core/data_access_interface/src/SimpleDbDatabase.h"
#include "core/data_access_interface/src/IData.h"
#include "core/exceptions/src/DatabaseException.h"

using TA_Base_Core::SimpleDbDatabase;

class DbManager
{
public:
    // The entity names.
    const std::string AgentName;
    const std::string DnName;
    const std::string BooleanReadDpName;
    const std::string BooleanWriteDpName;
    const std::string AnalogueReadDpName;
    const std::string DerivedInput0DpName;
    const std::string DerivedInput1DpName;
    const std::string DerivedReadDpName;
    const std::string MeteredInputDpName;
    const std::string MeteredDpName;
    const std::string SafetyDpName;
    const std::string SafetyOutput0DpName;
    const std::string SafetyOutput1DpName;

    unsigned int getEntityKey( std::string entityName );
    unsigned int getTypeKey( std::string typeName );

    DbManager();
    ~DbManager();

    void addEntities();
    void removeEntities();

private:
    // Methods for accessing type and entity keys.
    unsigned int getEntityTypeKey( std::string name );
    unsigned int getEntityParameterKey( std::string name, unsigned int type );

    // Methods for adding entities.
    unsigned int addTestAgent( unsigned int scadaRootType );

    // Methods for adding datapoints and datanodes.
    unsigned int addDataNode( std::string name, unsigned int agentKey );
    unsigned int addDataPoint( std::string name, std::string description, unsigned int agentKey, unsigned int parentKey );

    // Methods for adding derived datapoint information.
    void addDerivedInfo( unsigned int derivedKey, unsigned int input0Key, unsigned int input1Key );

    // Methods for adding SafetyOutputDataPoint information.
    void addSafetyOutputInfo( unsigned int safetyKey, unsigned int output0Key, unsigned int output1Key );

    // Methods for adding parameters.
    void addParameter( unsigned int entityKey, unsigned int entityType, std::string parameter, std::string value );

    // Methods for removing events.
    void removeEvents( unsigned int entityKey );

    // Methods for removing entities.
    void removeEntity( unsigned int entityKey );

    // Methods for removing parameters.
    void removeParameters( unsigned int entityKey );

    // Methods for removing derived information.
    void removeDerivedInfo( unsigned int entityKey );

    // Methods for removing SafetyOutput information.
    void removeSafetyOutputInfo( unsigned int entityKey );

    // The database connection.
    SimpleDbDatabase m_db;

    typedef std::map<std::string,unsigned int> KeyMap;
    typedef std::pair<std::string,unsigned int> StringUintPair;
    typedef std::map<StringUintPair,unsigned int> ParameterMap;
    KeyMap m_entityKeys;
    KeyMap m_typeKeys;
    ParameterMap m_parameterKeys;
};

#endif
