# Microsoft Developer Studio Project File - Name="DataPointBulkInterfaceTest" - Package Owner=<4>
# Microsoft Developer Studio Generated Build File, Format Version 6.00
# ** DO NOT EDIT **

# TARGTYPE "Win32 (x86) Console Application" 0x0103

CFG=DataPointBulkInterfaceTest - Win32 Debug
!MESSAGE This is not a valid makefile. To build this project using NMAKE,
!MESSAGE use the Export Makefile command and run
!MESSAGE 
!MESSAGE NMAKE /f "DataPointBulkInterfaceTest.mak".
!MESSAGE 
!MESSAGE You can specify a configuration when running NMAKE
!MESSAGE by defining the macro CFG on the command line. For example:
!MESSAGE 
!MESSAGE NMAKE /f "DataPointBulkInterfaceTest.mak" CFG="DataPointBulkInterfaceTest - Win32 Debug"
!MESSAGE 
!MESSAGE Possible choices for configuration are:
!MESSAGE 
!MESSAGE "DataPointBulkInterfaceTest - Win32 Release" (based on "Win32 (x86) Console Application")
!MESSAGE "DataPointBulkInterfaceTest - Win32 Debug" (based on "Win32 (x86) Console Application")
!MESSAGE 

# Begin Project
# PROP AllowPerConfigDependencies 0
# PROP Scc_ProjName ""
# PROP Scc_LocalPath ""
CPP=cl.exe
RSC=rc.exe

!IF  "$(CFG)" == "DataPointBulkInterfaceTest - Win32 Release"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "Release"
# PROP BASE Intermediate_Dir "Release"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "Release"
# PROP Intermediate_Dir "Release"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_CONSOLE" /D "_MBCS" /YX /FD /c
# ADD CPP /nologo /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_CONSOLE" /D "_MBCS" /YX /FD /c
# ADD BASE RSC /l 0x409 /d "NDEBUG"
# ADD RSC /l 0x409 /d "NDEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /subsystem:console /machine:I386
# ADD LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /subsystem:console /machine:I386

!ELSEIF  "$(CFG)" == "DataPointBulkInterfaceTest - Win32 Debug"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 1
# PROP BASE Output_Dir "Debug"
# PROP BASE Intermediate_Dir "Debug"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 1
# PROP Output_Dir "Debug"
# PROP Intermediate_Dir "Debug"
# PROP Ignore_Export_Lib 0
# PROP Target_Dir ""
# ADD BASE CPP /nologo /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_CONSOLE" /D "_MBCS" /YX /FD /GZ /c
# ADD CPP /nologo /MDd /W3 /Gm /GR /GX /ZI /Od /I "..\..\..\..\\" /I "../../../../.././" /I ".\src" /I "..\..\..\..\bus\scada\common_library\src" /I "..\..\..\..\bus\scada\datanode_library\IDL\src" /I "..\..\..\..\bus\scada\DataPointCorbaDef\src" /I "..\..\..\..\bus\scada\DataPointCorbaDef_Impl\src" /I "..\..\..\..\core\versioning\src" /I "..\..\..\..\core\uuid\src" /I "..\..\..\..\core\utilities\src" /I "..\..\..\..\core\threads\src" /I "..\..\..\..\core\synchronisation\src" /I "..\..\..\..\core\sockets\src" /I "..\..\..\..\core\process_management\src" /I "..\..\..\..\core\process_management\IDL\src" /I "..\..\..\..\core\naming\src" /I "..\..\..\..\core\naming\IDL\src" /I "..\..\..\..\core\message\types" /I "..\..\..\..\core\message\src" /I "..\..\..\..\core\message\IDL\src" /I "..\..\..\..\core\exceptions\src" /I "..\..\..\..\core\database\src" /I "..\..\..\..\core\data_access_interface\src" /I "..\..\..\..\core\data_access_interface\alarm_rule\src" /I "..\..\..\..\core\data_access_interface\entity_access\src" /I "..\..\..\..\core\corba_named_obj\src" /I "..\..\..\..\core\corba\src" /I "..\..\..\..\core\alarm\src" /I "..\..\..\..\core\alarm\IDL\src" /I "..\..\..\..\bus\modbus_comms\src" /I "..\..\..\..\bus\generic_agent\src" /I "..\..\..\..\..\cots\omniORB\omniORB_4.0.5\include" /I "..\..\..\..\..\cots\ACE\5_3\ACE_wrappers" /I "../../../../../../build/win32_n/transactive" /I "../../../../../../build/win32_n/transactive/core/exceptions/IDL/src" /I "../../../../../../build/win32_n/transactive/core/message/IDL/src" /I "../../../../../../build/win32_n/transactive/bus/scada/datapointcorbadef/src" /I "../../../../../../build/win32_n/transactive/core/process_management/idl/src" /D "WIN32" /D "_DEBUG" /D "_CONSOLE" /D "_MBCS" /D "__WIN32__" /D "__x86__" /D "__NT__" /D __OSVERSION__=4 /YX /FD /GZ /c
# ADD BASE RSC /l 0x409 /d "_DEBUG"
# ADD RSC /l 0x409 /d "_DEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /subsystem:console /debug /machine:I386 /pdbtype:sept
# ADD LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib Rpcrt4.lib oci.lib omniORB405_rtd.lib omniDynamic405_rtd.lib omnithread30_rtd.lib COS405_rtd.lib TA_Utilities_d.lib TA_Thread_d.lib TA_Synchronisation_d.lib TA_Sockets_d.lib TA_ProcessManagementCorbaDef_d.lib TA_ProcessManagement_d.lib TA_NamingCorbaDef_d.lib TA_Naming_d.lib TA_MessageCorbaDef_d.lib TA_Message_d.lib TA_Exceptions_d.lib DataAccessLib_d.lib TA_DataAccessInterface_d.lib TA_EntityAccess_d.lib TA_CorbaDef_d.lib TA_CorbaUtil_d.lib TA_AlarmAgentCorbaDef_d.lib TA_Alarm_d.lib modbus_comms.lib TA_GenericAgent_d.lib DataPointCorbaDef.lib DataPointCorbaDef_Impl.lib TA_ConfigurationUpdates.lib RightsAgentCorbaDef.lib TA_RightsLibrary.lib TA_Logging_Library.lib TA_AlarmRuleDAI.lib TA_DerivedDataPointDAI.lib DataNodeCorbaDef.lib ScadaProxies.lib MathematicalEvaluation.lib TA_SecurityUtilities.lib AuthenticationAgentCorbaDef.lib ScadaCommonLib.lib DutyAgentCorbaDef.lib MmsCorbaDef.lib DataPointAgentCorbaDef_Impl.lib TA_Version.lib TAuuid.lib /nologo /subsystem:console /debug /machine:I386 /pdbtype:sept /libpath:"..\..\..\..\\" /libpath:"..\..\..\..\cots\CppUnit\lib\nt_x86" /libpath:"..\..\..\..\..\cots\oracle\920\winnt\lib" /libpath:"..\..\..\..\..\cots\omniORB\omniORB_4.0.5\lib\x86_win32" /libpath:"..\..\..\..\core\versioning\Debug" /libpath:"..\..\..\..\core\uuid\Debug" /libpath:"..\..\..\..\core\utilities\Debug" /libpath:"..\..\..\..\core\threads\Debug" /libpath:"..\..\..\..\core\synchronisation\Debug" /libpath:"..\..\..\..\core\sockets\Debug" /libpath:"..\..\..\..\core\process_management\IDL\Debug" /libpath:"..\..\..\..\core\process_management\Debug" /libpath:"..\..\..\..\core\naming\IDL\Debug" /libpath:"..\..\..\..\core\naming\Debug" /libpath:"..\..\..\..\core\message\IDL\Debug" /libpath:"..\..\..\..\core\message\Debug" /libpath:"..\..\..\..\core\exceptions\Debug" /libpath:"..\..\..\..\core\database\Debug" /libpath:"..\..\..\..\core\data_access_interface\Debug" /libpath:"..\..\..\..\core\corba_named_obj\Debug" /libpath:"..\..\..\..\core\corba\IDL\Debug" /libpath:"..\..\..\..\core\corba\Debug" /libpath:"..\..\..\..\core\alarm\IDL\Debug" /libpath:"..\..\..\..\core\alarm\Debug" /libpath:"..\..\..\..\core\configuration_updates\Debug" /libpath:"..\..\..\..\core\logging\Debug" /libpath:"..\..\..\..\core\data_access_interface\alarm_rule\Debug" /libpath:"..\..\..\..\core\data_access_interface\derived_datapoints\Debug" /libpath:"..\..\..\..\bus\modbus_comms\Debug" /libpath:"..\..\..\..\bus\generic_agent\Debug" /libpath:"..\..\..\..\bus\scada\DataPointCorbaDef\Debug" /libpath:"..\..\..\..\bus\scada\DataPointCorbaDef_Impl\Debug" /libpath:"..\..\..\..\bus\security\rights_agent\IDL\Debug" /libpath:"..\..\..\..\bus\security\rights_library\Debug" /libpath:"..\..\..\..\bus\scada\datanode_library\IDL\Debug" /libpath:"..\..\..\..\bus\scada\proxies2\Debug" /libpath:"..\..\..\..\bus\mathematical_evaluation\Debug" /libpath:"..\..\..\..\bus\security\security_utilities\Debug" /libpath:"..\..\..\..\bus\security\authentication_agent\IDL\AuthenticationAgentCorbaDef___Win32_Debug" /libpath:"..\..\..\..\bus\scada\common_library\Debug" /libpath:"..\..\..\..\bus\security\duty_agent\IDL\Debug" /libpath:"..\..\..\..\bus\maintenance_management\mmsCorbaDef\Debug" /libpath:"..\..\..\..\bus\scada\DataPointAgentCorbaDef_Impl\Debug" /libpath:"..\..\..\..\core\data_access_interface\entity_access\Debug" /libpath:"../../../../../../sdk/win32_nd/"

!ENDIF 

# Begin Target

# Name "DataPointBulkInterfaceTest - Win32 Release"
# Name "DataPointBulkInterfaceTest - Win32 Debug"
# Begin Group "Source Files"

# PROP Default_Filter "cpp;c;cxx;rc;def;r;odl;idl;hpj;bat"
# Begin Source File

SOURCE=.\src\DataPointBulkInterfaceTest.cpp
# End Source File
# Begin Source File

SOURCE=.\src\main.cpp
# End Source File
# Begin Source File

SOURCE=.\src\VersionGen.cpp
# End Source File
# End Group
# Begin Group "Header Files"

# PROP Default_Filter "h;hpp;hxx;hm;inl"
# Begin Source File

SOURCE=.\src\DataPointBulkInterfaceTest.h
# End Source File
# End Group
# Begin Group "Resource Files"

# PROP Default_Filter "ico;cur;bmp;dlg;rc2;rct;bin;rgs;gif;jpg;jpeg;jpe"
# End Group
# Begin Group "cfg"

# PROP Default_Filter ""
# Begin Source File

SOURCE=.\cfg\config.ini
# End Source File
# End Group
# Begin Group "stub"

# PROP Default_Filter ""
# Begin Source File

SOURCE=.\stub\DataPointAgent.cpp
# End Source File
# Begin Source File

SOURCE=.\stub\DataPointAgent.h
# End Source File
# Begin Source File

SOURCE=.\stub\DataPointAgentClient.cpp
# End Source File
# Begin Source File

SOURCE=.\stub\DataPointAgentClient.h
# End Source File
# Begin Source File

SOURCE=.\stub\DbManager.cpp
# End Source File
# Begin Source File

SOURCE=.\stub\DbManager.h
# End Source File
# End Group
# End Target
# End Project
