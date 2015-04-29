# Microsoft Developer Studio Project File - Name="bus.scada.common_library.idl.TA_ScadaCommonLibraryIDL" - Package Owner=<4>
# Microsoft Developer Studio Generated Build File, Format Version 6.00
# ** DO NOT EDIT **

# TARGTYPE "Win32 (x86) Generic Project" 0x010a

CFG=bus.scada.common_library.idl.TA_ScadaCommonLibraryIDL - Win32 Debug
!MESSAGE This is not a valid makefile. To build this project using NMAKE,
!MESSAGE use the Export Makefile command and run
!MESSAGE 
!MESSAGE NMAKE /f "bus.scada.common_library.idl.TA_ScadaCommonIDL.mak".
!MESSAGE 
!MESSAGE You can specify a configuration when running NMAKE
!MESSAGE by defining the macro CFG on the command line. For example:
!MESSAGE 
!MESSAGE NMAKE /f "bus.scada.common_library.idl.TA_ScadaCommonIDL.mak" CFG="bus.scada.common_library.idl.TA_ScadaCommonLibraryIDL - Win32 Debug"
!MESSAGE 
!MESSAGE Possible choices for configuration are:
!MESSAGE 
!MESSAGE "bus.scada.common_library.idl.TA_ScadaCommonLibraryIDL - Win32 Release" (based on "Win32 (x86) Generic Project")
!MESSAGE "bus.scada.common_library.idl.TA_ScadaCommonLibraryIDL - Win32 Debug" (based on "Win32 (x86) Generic Project")
!MESSAGE 

# Begin Project
# PROP AllowPerConfigDependencies 0
# PROP Scc_ProjName ""
# PROP Scc_LocalPath ""
MTL=midl.exe

!IF  "$(CFG)" == "bus.scada.common_library.idl.TA_ScadaCommonLibraryIDL - Win32 Release"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "Release"
# PROP BASE Intermediate_Dir "Release"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "../../../../../../build/win32_n/transactive/bus/scada/common_library/IDL/src"
# PROP Intermediate_Dir "../../../../../../build/win32_n/transactive/bus/scada/common_library/IDL/src"
# PROP Target_Dir ""

!ELSEIF  "$(CFG)" == "bus.scada.common_library.idl.TA_ScadaCommonLibraryIDL - Win32 Debug"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 1
# PROP BASE Output_Dir "Debug"
# PROP BASE Intermediate_Dir "Debug"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 1
# PROP Output_Dir "../../../../../../build/win32_n/transactive/bus/scada/common_library/IDL/src"
# PROP Intermediate_Dir "../../../../../../build/win32_n/transactive/bus/scada/common_library/IDL/src"
# PROP Target_Dir ""

!ENDIF 

# Begin Target

# Name "bus.scada.common_library.idl.TA_ScadaCommonLibraryIDL - Win32 Release"
# Name "bus.scada.common_library.idl.TA_ScadaCommonLibraryIDL - Win32 Debug"
# Begin Group "IDL Files"

# PROP Default_Filter ""
# Begin Source File

SOURCE=.\src\CorbaTypes.idl

!IF  "$(CFG)" == "bus.scada.common_library.idl.TA_ScadaCommonLibraryIDL - Win32 Release"

# PROP Ignore_Default_Tool 1
# Begin Custom Build
InputPath=.\src\CorbaTypes.idl
InputName=CorbaTypes

BuildCmds= \
	..\..\..\..\..\cots\omniORB\omniORB_4.0.5\bin\x86_win32\omniidl -nf -bcxx -Wba -Wbh=.h -Wbs=.cpp -Wbd=_skel.cpp -I. -I..\..\..\.. -C..\IDL_src\src src/$(InputName).idl

"..\IDL_src\src\$(InputName).h" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
   $(BuildCmds)

"..\IDL_src\src\$(InputName).cpp" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
   $(BuildCmds)

"..\IDL_src\src\$(InputName)_skel.cpp" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
   $(BuildCmds)
# End Custom Build

!ELSEIF  "$(CFG)" == "bus.scada.common_library.idl.TA_ScadaCommonLibraryIDL - Win32 Debug"

# PROP Ignore_Default_Tool 1
# Begin Custom Build
InputPath=.\src\CorbaTypes.idl
InputName=CorbaTypes

BuildCmds= \
	..\omniORB_4.0.5\bin\x86_win32\omniidl -nf -bcxx -Wba -Wbh=.h -Wbs=.cpp -Wbd=_skel.cpp -I. -I..\..\..\.. -C..\IDL_src\src src/$(InputName).idl

"..\IDL_src\src\$(InputName).h" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
   $(BuildCmds)

"..\IDL_src\src\$(InputName).cpp" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
   $(BuildCmds)

"..\IDL_src\src\$(InputName)_skel.cpp" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
   $(BuildCmds)
# End Custom Build

!ENDIF 

# End Source File
# Begin Source File

SOURCE=.\src\IAccessCorbaDef.idl

!IF  "$(CFG)" == "bus.scada.common_library.idl.TA_ScadaCommonLibraryIDL - Win32 Release"

# PROP Ignore_Default_Tool 1
# Begin Custom Build
InputPath=.\src\IAccessCorbaDef.idl
InputName=IAccessCorbaDef

BuildCmds= \
	..\..\..\..\..\cots\omniORB\omniORB_4.0.5\bin\x86_win32\omniidl -nf -bcxx -Wba -Wbh=.h -Wbs=.cpp -Wbd=_skel.cpp -I. -I..\..\..\.. -C..\IDL_src\src src/$(InputName).idl

"..\IDL_src\src\$(InputName).h" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
   $(BuildCmds)

"..\IDL_src\src\$(InputName).cpp" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
   $(BuildCmds)

"..\IDL_src\src\$(InputName)_skel.cpp" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
   $(BuildCmds)
# End Custom Build

!ELSEIF  "$(CFG)" == "bus.scada.common_library.idl.TA_ScadaCommonLibraryIDL - Win32 Debug"

# PROP Ignore_Default_Tool 1
# Begin Custom Build
InputPath=.\src\IAccessCorbaDef.idl
InputName=IAccessCorbaDef

BuildCmds= \
	..\omniORB_4.0.5\bin\x86_win32\omniidl -nf -bcxx -Wba -Wbh=.h -Wbs=.cpp -Wbd=_skel.cpp -I. -I..\..\..\.. -C..\IDL_src\src src/$(InputName).idl

"..\IDL_src\src\$(InputName).h" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
   $(BuildCmds)

"..\IDL_src\src\$(InputName).cpp" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
   $(BuildCmds)

"..\IDL_src\src\$(InputName)_skel.cpp" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
   $(BuildCmds)
# End Custom Build

!ENDIF 

# End Source File
# End Group
# End Target
# End Project
