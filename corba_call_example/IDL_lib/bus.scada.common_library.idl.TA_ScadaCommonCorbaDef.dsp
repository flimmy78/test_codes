# Microsoft Developer Studio Project File - Name="bus.scada.common_library.idl.TA_ScadaCommonCorbaDef" - Package Owner=<4>
# Microsoft Developer Studio Generated Build File, Format Version 6.00
# ** DO NOT EDIT **

# TARGTYPE "Win32 (x86) Static Library" 0x0104

CFG=bus.scada.common_library.idl.TA_ScadaCommonCorbaDef - Win32 Debug
!MESSAGE This is not a valid makefile. To build this project using NMAKE,
!MESSAGE use the Export Makefile command and run
!MESSAGE 
!MESSAGE NMAKE /f "bus.scada.common_library.idl.TA_ScadaCommonCorbaDef.mak".
!MESSAGE 
!MESSAGE You can specify a configuration when running NMAKE
!MESSAGE by defining the macro CFG on the command line. For example:
!MESSAGE 
!MESSAGE NMAKE /f "bus.scada.common_library.idl.TA_ScadaCommonCorbaDef.mak" CFG="bus.scada.common_library.idl.TA_ScadaCommonCorbaDef - Win32 Debug"
!MESSAGE 
!MESSAGE Possible choices for configuration are:
!MESSAGE 
!MESSAGE "bus.scada.common_library.idl.TA_ScadaCommonCorbaDef - Win32 Release" (based on "Win32 (x86) Static Library")
!MESSAGE "bus.scada.common_library.idl.TA_ScadaCommonCorbaDef - Win32 Debug" (based on "Win32 (x86) Static Library")
!MESSAGE 

# Begin Project
# PROP AllowPerConfigDependencies 0
# PROP Scc_ProjName ""
# PROP Scc_LocalPath ""
CPP=cl.exe
RSC=rc.exe

!IF  "$(CFG)" == "bus.scada.common_library.idl.TA_ScadaCommonCorbaDef - Win32 Release"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "Release"
# PROP BASE Intermediate_Dir "Release"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "../../../../../../build/win32_nr/"
# PROP Intermediate_Dir "../../../../../../build/win32_nr/transactive/bus/scada/common_library/IDL/src"
# PROP Target_Dir ""
LINK32=link.exe -link
MTL=midl.exe
# ADD BASE CPP /nologo /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_MBCS" /D "_LIB" /YX /FD /c
# ADD CPP /nologo /MD /GR /GX /O2 /I "..\..\..\..\..\..\build\win32_n\transactive\bus\scada\common_library\IDL\src" /I "..\..\..\..\..\..\build\win32_n\transactive\core\exceptions\IDL\src" /I "..\..\..\..\..\..\build\win32_n\transactive\bus\scada\DataPointCorbaDef\src" /I "..\..\..\..\..\cots\omniOrb\omniORB_4.0.5\include" /I "..\..\..\..\..\cots\omniOrb\omniORB_4.0.5\include\COS" /D "WIN32" /D "NDEBUG" /D "_MBCS" /D "_LIB" /D "__WIN32__" /D "__x86__" /D "__NT__" /D __OSVERSION__=4 /FD /c
# SUBTRACT CPP /YX
# ADD BASE RSC /l 0x409 /d "NDEBUG"
# ADD RSC /l 0x409 /d "NDEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LIB32=link.exe -lib
# ADD BASE LIB32 /nologo
# ADD LIB32 /nologo /out:"../../../../../../build/win32_nr/TA_ScadaCommonCorbaDef.lib"

!ELSEIF  "$(CFG)" == "bus.scada.common_library.idl.TA_ScadaCommonCorbaDef - Win32 Debug"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 1
# PROP BASE Output_Dir "Debug"
# PROP BASE Intermediate_Dir "Debug"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 1
# PROP Output_Dir "../../../../../../build/win32_nd/"
# PROP Intermediate_Dir "../../../../../../build/win32_nd/transactive/bus/scada/common_library/IDL/src"
# PROP Target_Dir ""
LINK32=link.exe -link
MTL=midl.exe
# ADD BASE CPP /nologo /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_MBCS" /D "_LIB" /YX /FD /GZ /c
# ADD CPP /nologo /MDd /Gm /GR /GX /ZI /Od /I "..\..\..\..\..\..\build\win32_n\transactive\bus\scada\common_library\IDL\src" /I "..\..\..\..\..\..\build\win32_n\transactive\core\exceptions\IDL\src" /I "..\..\..\..\..\..\build\win32_n\transactive\bus\scada\DataPointCorbaDef\src" /I "..\..\..\..\..\cots\omniOrb\omniORB_4.0.5\include" /I "..\..\..\..\..\cots\omniOrb\omniORB_4.0.5\include\COS" /D "WIN32" /D "_DEBUG" /D "_MBCS" /D "_LIB" /D "__WIN32__" /D "__x86__" /D "__NT__" /D __OSVERSION__=4 /YX /FD /GZ /c
# ADD BASE RSC /l 0x409 /d "_DEBUG"
# ADD RSC /l 0x409 /d "_DEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LIB32=link.exe -lib
# ADD BASE LIB32 /nologo
# ADD LIB32 /nologo /out:"../../../../../../build/win32_nd/TA_ScadaCommonCorbaDef_d.lib"

!ENDIF 

# Begin Target

# Name "bus.scada.common_library.idl.TA_ScadaCommonCorbaDef - Win32 Release"
# Name "bus.scada.common_library.idl.TA_ScadaCommonCorbaDef - Win32 Debug"
# Begin Group "src"

# PROP Default_Filter "cpp;c;cxx;rc;def;r;odl;idl;hpj;bat"
# Begin Source File

SOURCE=..\..\..\..\..\..\build\win32_n\transactive\bus\scada\common_library\IDL\src\DataNodeCorbaTypes.cpp
# End Source File
# Begin Source File

SOURCE=..\..\..\..\..\..\build\win32_n\transactive\bus\scada\common_library\IDL\src\DataNodeCorbaTypes.h
# End Source File
# Begin Source File

SOURCE=..\..\..\..\..\..\build\win32_n\transactive\bus\scada\common_library\IDL\src\DataNodeCorbaTypes_skel.cpp
# End Source File
# Begin Source File

SOURCE=..\..\..\..\..\..\build\win32_n\transactive\bus\scada\common_library\IDL\src\DataPointCorbaTypes.cpp
# End Source File
# Begin Source File

SOURCE=..\..\..\..\..\..\build\win32_n\transactive\bus\scada\common_library\IDL\src\DataPointCorbaTypes.h
# End Source File
# Begin Source File

SOURCE=..\..\..\..\..\..\build\win32_n\transactive\bus\scada\common_library\IDL\src\DataPointCorbaTypes_skel.cpp
# End Source File
# Begin Source File

SOURCE=..\..\..\..\..\..\build\win32_n\transactive\bus\scada\common_library\IDL\src\IDataNodeAccessCorbaDef.cpp
# End Source File
# Begin Source File

SOURCE=..\..\..\..\..\..\build\win32_n\transactive\bus\scada\common_library\IDL\src\IDataNodeAccessCorbaDef.h
# End Source File
# Begin Source File

SOURCE=..\..\..\..\..\..\build\win32_n\transactive\bus\scada\common_library\IDL\src\IDataNodeAccessCorbaDef_skel.cpp
# End Source File
# Begin Source File

SOURCE=..\..\..\..\..\..\build\win32_n\transactive\bus\scada\common_library\IDL\src\IDataNodeAgentCorbaDef.cpp
# End Source File
# Begin Source File

SOURCE=..\..\..\..\..\..\build\win32_n\transactive\bus\scada\common_library\IDL\src\IDataNodeAgentCorbaDef.h
# End Source File
# Begin Source File

SOURCE=..\..\..\..\..\..\build\win32_n\transactive\bus\scada\common_library\IDL\src\IDataNodeAgentCorbaDef_skel.cpp
# End Source File
# Begin Source File

SOURCE=..\..\..\..\..\..\build\win32_n\transactive\bus\scada\common_library\IDL\src\IDataPointAccessCorbaDef.cpp
# End Source File
# Begin Source File

SOURCE=..\..\..\..\..\..\build\win32_n\transactive\bus\scada\common_library\IDL\src\IDataPointAccessCorbaDef.h
# End Source File
# Begin Source File

SOURCE=..\..\..\..\..\..\build\win32_n\transactive\bus\scada\common_library\IDL\src\IDataPointAccessCorbaDef_skel.cpp
# End Source File
# Begin Source File

SOURCE=..\..\..\..\..\..\build\win32_n\transactive\bus\scada\common_library\IDL\src\IDataPointAgentCorbaDef.cpp
# End Source File
# Begin Source File

SOURCE=..\..\..\..\..\..\build\win32_n\transactive\bus\scada\common_library\IDL\src\IDataPointAgentCorbaDef.h
# End Source File
# Begin Source File

SOURCE=..\..\..\..\..\..\build\win32_n\transactive\bus\scada\common_library\IDL\src\IDataPointAgentCorbaDef_skel.cpp
# End Source File
# Begin Source File

SOURCE=..\..\..\..\..\..\build\win32_n\transactive\bus\scada\common_library\IDL\src\IDataPointStateUpdateCorbaDef.cpp
# End Source File
# Begin Source File

SOURCE=..\..\..\..\..\..\build\win32_n\transactive\bus\scada\common_library\IDL\src\IDataPointStateUpdateCorbaDef.h
# End Source File
# Begin Source File

SOURCE=..\..\..\..\..\..\build\win32_n\transactive\bus\scada\common_library\IDL\src\IDataPointStateUpdateCorbaDef_skel.cpp
# End Source File
# Begin Source File

SOURCE=..\..\..\..\..\..\build\win32_n\transactive\bus\scada\common_library\IDL\src\ScadaCorbaTypes.cpp
# End Source File
# Begin Source File

SOURCE=..\..\..\..\..\..\build\win32_n\transactive\bus\scada\common_library\IDL\src\ScadaCorbaTypes.h
# End Source File
# Begin Source File

SOURCE=..\..\..\..\..\..\build\win32_n\transactive\bus\scada\common_library\IDL\src\ScadaCorbaTypes_skel.cpp
# End Source File
# End Group
# End Target
# End Project
