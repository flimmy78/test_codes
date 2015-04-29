# Microsoft Developer Studio Project File - Name="bus.scada.datapointagentcorbadef_impl.TA_DataPointAgentCorbaDef_Impl" - Package Owner=<4>
# Microsoft Developer Studio Generated Build File, Format Version 6.00
# ** DO NOT EDIT **

# TARGTYPE "Win32 (x86) Static Library" 0x0104

CFG=bus.scada.datapointagentcorbadef_impl.TA_DataPointAgentCorbaDef_Impl - Win32 Debug
!MESSAGE This is not a valid makefile. To build this project using NMAKE,
!MESSAGE use the Export Makefile command and run
!MESSAGE 
!MESSAGE NMAKE /f "CorbaDef_Impl.mak".
!MESSAGE 
!MESSAGE You can specify a configuration when running NMAKE
!MESSAGE by defining the macro CFG on the command line. For example:
!MESSAGE 
!MESSAGE NMAKE /f "CorbaDef_Impl.mak" CFG="bus.scada.datapointagentcorbadef_impl.TA_DataPointAgentCorbaDef_Impl - Win32 Debug"
!MESSAGE 
!MESSAGE Possible choices for configuration are:
!MESSAGE 
!MESSAGE "bus.scada.datapointagentcorbadef_impl.TA_DataPointAgentCorbaDef_Impl - Win32 Release" (based on "Win32 (x86) Static Library")
!MESSAGE "bus.scada.datapointagentcorbadef_impl.TA_DataPointAgentCorbaDef_Impl - Win32 Debug" (based on "Win32 (x86) Static Library")
!MESSAGE 

# Begin Project
# PROP AllowPerConfigDependencies 0
# PROP Scc_ProjName "bus.scada.datapointagentcorbadef_impl.TA_DataPointAgentCorbaDef_Impl"
# PROP Scc_LocalPath "."
CPP=cl.exe
RSC=rc.exe

!IF  "$(CFG)" == "bus.scada.datapointagentcorbadef_impl.TA_DataPointAgentCorbaDef_Impl - Win32 Release"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "Release"
# PROP BASE Intermediate_Dir "Release"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "../../../../../build/win32_nr/"
# PROP Intermediate_Dir "../../../../../build/win32_nr/transactive/bus/scada/datapointagentcorbadef_impl"
# PROP Target_Dir ""
MTL=midl.exe
LINK32=link.exe -link
# ADD BASE CPP /nologo /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_MBCS" /D "_LIB" /YX /FD /c
# ADD CPP /nologo /MD /W3 /GR /GX /O2 /I ".\src" /I "..\..\..\\" /I "..\..\..\..\..\build\win32_n\transactive" /I "..\..\..\..\..\build\win32_n\transactive\core\exceptions\IDL\src" /I "..\..\..\..\..\build\win32_n\transactive\core\message\IDL\src" /I "..\..\..\..\..\build\win32_n\transactive\bus\scada\common_library\IDL\src" /I "..\..\..\..\cots\omniORB\omniORB_4.0.5\include" /I "..\..\..\..\cots\ACE\5_3\ACE_wrappers" /I "..\..\..\..\cots\boost\boost_1_31_0" /D "WIN32" /D "NDEBUG" /D "_MBCS" /D "_LIB" /D "__WIN32__" /D "__x86__" /D "__NT__" /D __OSVERSION__=4 /D _WIN32_WINNT=0x400 /FD /c
# SUBTRACT CPP /YX
# ADD BASE RSC /l 0x409 /d "NDEBUG"
# ADD RSC /l 0x409 /d "NDEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LIB32=link.exe -lib
# ADD BASE LIB32 /nologo
# ADD LIB32 /nologo /out:"../../../../../build/win32_nr/TA_DataPointAgentCorbaDef_Impl.lib"

!ELSEIF  "$(CFG)" == "bus.scada.datapointagentcorbadef_impl.TA_DataPointAgentCorbaDef_Impl - Win32 Debug"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 1
# PROP BASE Output_Dir "Debug"
# PROP BASE Intermediate_Dir "Debug"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 1
# PROP Output_Dir "./debug/"
# PROP Intermediate_Dir "./debug/"
# PROP Target_Dir ""
MTL=midl.exe
LINK32=link.exe -link
# ADD BASE CPP /nologo /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_MBCS" /D "_LIB" /YX /FD /GZ /c
# ADD CPP /nologo /MDd /W3 /Gm /GR /GX /ZI /Od /I ".\src" /I "..\..\..\\" /I "..\..\..\..\..\build\win32_n\transactive" /I "..\..\..\..\..\build\win32_n\transactive\core\exceptions\IDL\src" /I "..\..\..\..\..\build\win32_n\transactive\core\message\IDL\src" /I "..\..\..\..\..\build\win32_n\transactive\bus\scada\common_library\IDL\src" /I "..\..\..\..\cots\omniORB\omniORB_4.0.5\include" /I "..\..\..\..\cots\ACE\5_3\ACE_wrappers" /I "..\..\..\..\cots\boost\boost_1_31_0" /I "..\..\..\..\..\build\win32_n\transactive\core\process_management\IDL\src\\" /I "..\omniORB_4.0.5\include\\" /I "..\\" /D "WIN32" /D "_DEBUG" /D "_MBCS" /D "_LIB" /D "__WIN32__" /D "__x86__" /D "__NT__" /D __OSVERSION__=4 /YX /FD /GZ /c
# ADD BASE RSC /l 0x409 /d "_DEBUG"
# ADD RSC /l 0x409 /i "../../omniORB_4.0.5/include/" /d "_DEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LIB32=link.exe -lib
# ADD BASE LIB32 /nologo
# ADD LIB32 /nologo /out:"./debug/CorbaDef_Impl_d.lib"

!ENDIF 

# Begin Target

# Name "bus.scada.datapointagentcorbadef_impl.TA_DataPointAgentCorbaDef_Impl - Win32 Release"
# Name "bus.scada.datapointagentcorbadef_impl.TA_DataPointAgentCorbaDef_Impl - Win32 Debug"
# Begin Group "src"

# PROP Default_Filter "cpp;c;cxx;rc;def;r;odl;idl;hpj;bat"
# Begin Source File

SOURCE=.\src\AccessCorbaDef_Impl.cpp
# End Source File
# Begin Source File

SOURCE=.\src\AccessCorbaDef_Impl.h
# End Source File
# End Group
# End Target
# End Project
