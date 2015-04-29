# Microsoft Developer Studio Project File - Name="tstfwk" - Package Owner=<4>
# Microsoft Developer Studio Generated Build File, Format Version 6.00
# ** DO NOT EDIT **

# TARGTYPE "Win32 (x86) Static Library" 0x0104

CFG=tstfwk - Win32 Debug
!MESSAGE This is not a valid makefile. To build this project using NMAKE,
!MESSAGE use the Export Makefile command and run
!MESSAGE 
!MESSAGE NMAKE /f "CppUnit.mak".
!MESSAGE 
!MESSAGE You can specify a configuration when running NMAKE
!MESSAGE by defining the macro CFG on the command line. For example:
!MESSAGE 
!MESSAGE NMAKE /f "CppUnit.mak" CFG="tstfwk - Win32 Debug"
!MESSAGE 
!MESSAGE Possible choices for configuration are:
!MESSAGE 
!MESSAGE "tstfwk - Win32 Release" (based on "Win32 (x86) Static Library")
!MESSAGE "tstfwk - Win32 Debug" (based on "Win32 (x86) Static Library")
!MESSAGE 

# Begin Project
# PROP AllowPerConfigDependencies 0
# PROP Scc_ProjName ""$/4 - Engineering/4.24 Test framework/pub/src", TGAAAAAA"
# PROP Scc_LocalPath "."
CPP=cl.exe
RSC=rc.exe

!IF  "$(CFG)" == "tstfwk - Win32 Release"

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
MTL=midl.exe
LINK32=link.exe -link
# ADD BASE CPP /nologo /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_MBCS" /D "_LIB" /YX /FD /c
# ADD CPP /nologo /MD /W3 /GR /GX /O2 /I "..\inc" /D "WIN32" /D "NDEBUG" /D "_MBCS" /D "_LIB" /YX /FD /c
# ADD BASE RSC /l 0xc09 /d "NDEBUG"
# ADD RSC /l 0xc09 /d "NDEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LIB32=link.exe -lib
# ADD BASE LIB32 /nologo
# ADD LIB32 /nologo /out:"..\lib\nt_x86\tstfwk.lib"

!ELSEIF  "$(CFG)" == "tstfwk - Win32 Debug"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 1
# PROP BASE Output_Dir "Debug"
# PROP BASE Intermediate_Dir "Debug"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 1
# PROP Output_Dir "Debug"
# PROP Intermediate_Dir "Debug"
# PROP Target_Dir ""
MTL=midl.exe
LINK32=link.exe -link
# ADD BASE CPP /nologo /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_MBCS" /D "_LIB" /YX /FD /GZ /c
# ADD CPP /nologo /MDd /W3 /Gm /GR /GX /ZI /Od /D "_LIB" /D TA_ASSERT_FAIL=2 /D "WIN32" /D "_DEBUG" /D "_MBCS" /FD /GZ /c
# SUBTRACT CPP /YX
# ADD BASE RSC /l 0xc09 /d "_DEBUG"
# ADD RSC /l 0xc09 /d "_DEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LIB32=link.exe -lib
# ADD BASE LIB32 /nologo
# ADD LIB32 /nologo /out:".\lib\nt_x86\tstfwk.lib"

!ENDIF 

# Begin Target

# Name "tstfwk - Win32 Release"
# Name "tstfwk - Win32 Debug"
# Begin Group "Source Files"

# PROP Default_Filter "cpp;c;cxx;rc;def;r;odl;idl;hpj;bat"
# Begin Source File

SOURCE=.\src\AssertionFailedError.cpp
# End Source File
# Begin Source File

SOURCE=.\src\ConfigData.cpp
# End Source File
# Begin Source File

SOURCE=.\src\CppUnitException.cpp
# End Source File
# Begin Source File

SOURCE=.\src\Flag.cpp
# End Source File
# Begin Source File

SOURCE=.\src\INIFileException.cpp
# End Source File
# Begin Source File

SOURCE=.\src\INIFileTestCases.cpp
# End Source File
# Begin Source File

SOURCE=.\src\MethodsInputs.cpp
# End Source File
# Begin Source File

SOURCE=.\src\NoSuiteMethodException.cpp
# End Source File
# Begin Source File

SOURCE=.\src\ReadINIFile.cpp
# End Source File
# Begin Source File

SOURCE=.\src\TestCase.cpp
# End Source File
# Begin Source File

SOURCE=.\src\TestFailure.cpp
# End Source File
# Begin Source File

SOURCE=.\src\TestFrameworkBase.cpp
# End Source File
# Begin Source File

SOURCE=.\src\TestResult.cpp
# End Source File
# Begin Source File

SOURCE=.\src\TestRunner.cpp
# End Source File
# Begin Source File

SOURCE=.\src\TestSuite.cpp
# End Source File
# Begin Source File

SOURCE=.\src\TextOutputter.cpp
# End Source File
# Begin Source File

SOURCE=.\src\XmlOutputter.cpp
# End Source File
# End Group
# Begin Group "Header Files"

# PROP Default_Filter "h;hpp;hxx;hm;inl"
# Begin Source File

SOURCE=.\src\AssertionFailedError.h
# End Source File
# Begin Source File

SOURCE=.\src\ConfigData.h
# End Source File
# Begin Source File

SOURCE=.\src\CppUnitException.h
# End Source File
# Begin Source File

SOURCE=.\src\Flag.h
# End Source File
# Begin Source File

SOURCE=.\src\INIFileException.h
# End Source File
# Begin Source File

SOURCE=.\src\INIFileTestCases.h
# End Source File
# Begin Source File

SOURCE=.\src\MethodsInputs.h
# End Source File
# Begin Source File

SOURCE=.\src\NoSuiteMethodException.h
# End Source File
# Begin Source File

SOURCE=.\src\Outputter.h
# End Source File
# Begin Source File

SOURCE=.\src\ReadINIFile.h
# End Source File
# Begin Source File

SOURCE=.\src\SuiteException.h
# End Source File
# Begin Source File

SOURCE=.\src\Test.h
# End Source File
# Begin Source File

SOURCE=.\src\TestCaller.h
# End Source File
# Begin Source File

SOURCE=.\src\TestCase.h
# End Source File
# Begin Source File

SOURCE=.\src\TestFailure.h
# End Source File
# Begin Source File

SOURCE=.\src\TestFramework.h
# End Source File
# Begin Source File

SOURCE=.\src\TestFrameworkBase.h
# End Source File
# Begin Source File

SOURCE=.\src\TestResult.h
# End Source File
# Begin Source File

SOURCE=.\src\TestRunner.h
# End Source File
# Begin Source File

SOURCE=.\src\TestSuite.h
# End Source File
# Begin Source File

SOURCE=.\src\TextOutputter.h
# End Source File
# Begin Source File

SOURCE=.\src\XmlOutputter.h
# End Source File
# End Group
# End Target
# End Project
