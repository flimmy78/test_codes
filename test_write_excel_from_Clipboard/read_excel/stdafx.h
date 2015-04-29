// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

#ifndef _WIN32_WINNT		// Allow use of features specific to Windows XP or later.                   
#define _WIN32_WINNT 0x0501	// Change this to the appropriate value to target other versions of Windows.
#endif						

#include <stdio.h>
#include <tchar.h>

#import "C:\\Program Files\\Common Files\\Microsoft Shared\\OFFICE12\\MSO.DLL" \
    rename( "RGB", "MSORGB" )

using namespace Office;

#import "C:\\Program Files\\Common Files\\Microsoft Shared\\VBA\\VBA6\\VBE6EXT.OLB"

using namespace VBIDE;

#import "C:\\Program Files\\Microsoft Office\\OFFICE12\\EXCEL.EXE" \
    rename( "DialogBox", "ExcelDialogBox" ) \
    rename( "RGB", "ExcelRGB" ) \
    rename( "CopyFile", "ExcelCopyFile" ) \
    rename( "ReplaceText", "ExcelReplaceText")
// TODO: reference additional headers your program requires here
