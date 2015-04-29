// read_excel.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <Windows.h>
#include <Objbase.h>
#include <stdlib.h>

char g_str[100000 * 10 * 50];

void set_Clipboard()
{
	int n = 100000 * 10 * 50;
	for (int i = 0; i < n; ++i)
	{
		if (0 == i % 500)
			g_str[i] = '\n';
		else if (0 == i % 50)
			g_str[i] = '\t';
		else
			g_str[i] = 'a' + i % 20;
	}
	g_str[n-1] = '\0';
	//文本内容保存在source变量中 
	if(OpenClipboard(NULL)) 
	{ 
		HGLOBAL clipbuffer; 
		char * buffer; 
		EmptyClipboard(); 
		clipbuffer = GlobalAlloc(GMEM_DDESHARE, strlen(g_str)+1); 
		buffer = (char*)GlobalLock(clipbuffer); 
		strcpy(buffer, g_str); 
		GlobalUnlock(clipbuffer); 
		SetClipboardData(CF_TEXT,clipbuffer); 
		CloseClipboard(); 
	}
	printf("set clip board ok\n");
}

void get_Clipboard()
{
	char * buffer = NULL; 
	//打开剪贴板 
	//CString fromClipboard; 
	if ( OpenClipboard(NULL) ) 
	{ 
		HANDLE hData = GetClipboardData(CF_TEXT); 
		char * buffer = (char*)GlobalLock(hData); 
		//fromClipboard = buffer; 
		printf("%buf is: %s\n", buffer);
		GlobalUnlock(hData); 
		CloseClipboard(); 
	}
}


int _tmain(int argc, _TCHAR* argv[])
{
	set_Clipboard();
	//get_Clipboard();

	HRESULT h = CoInitialize(NULL);
	if (FAILED(h))
	{
		printf("failed: CoInitialize: %d\n", h);
		return 0;
	}

	// read: http://www.codeproject.com/KB/wtl/WTLExcel.aspx
	Excel::_ApplicationPtr pApplication;

	if ( FAILED( pApplication.CreateInstance( _T("Excel.Application") ) ) )
	{
		printf( "Failed to initialize Excel::_Application!\n");
		return 0;
	}

	pApplication->PutVisible(0, VARIANT_TRUE);
	Excel::_WorkbookPtr wbPtr;

	wbPtr = pApplication->Workbooks->Add();
	wbPtr->Activate();

	printf("created\n");

	wbPtr->Sheets->Add();

	printf("shts:%d\n", wbPtr->Sheets->Count);

	Excel::_WorksheetPtr sheetPtr = wbPtr->Sheets->GetItem(1);

	Excel::RangePtr rg;
	rg = sheetPtr->GetRange("b1", "b1");
	//rg->Select();

	rg->PasteSpecial(Excel::XlPasteType::xlPasteAll,
		Excel::XlPasteSpecialOperation::xlPasteSpecialOperationAdd);
	//rg->PutItem(1, 1, "hi\tabcd\nsdfsdf\tfdsjkfdjk\tjsdkfjk\nsdfdskf");	// from 1;
	try
	{
	wbPtr->SaveAs("E:\\test_code\\read_excel\\debug\\testxx.xls",
		Excel::XlFileFormat::xlWorkbookNormal,
		"", "", false, false, Excel::XlSaveAsAccessMode::xlNoChange,
		Excel::XlSaveConflictResolution::xlLocalSessionChanges, false);

	//printf("%s", pApplication->ActiveWorkbook->Name);
	}
	catch (...)
	{
		printf("exception\n");
	}

	pApplication->Quit();
	
	//pApplication->Release();


	return 0;
}

