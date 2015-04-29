// MDITest.h : main header file for the MDITEST application
//

#if !defined(AFX_MDITEST_H__7A7CAB97_92D7_48D7_A8A1_8DCD3578E504__INCLUDED_)
#define AFX_MDITEST_H__7A7CAB97_92D7_48D7_A8A1_8DCD3578E504__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CMDITestApp:
// See MDITest.cpp for the implementation of this class
//

class CMDITestApp : public CWinApp
{
public:
	CMDITestApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMDITestApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CMDITestApp)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MDITEST_H__7A7CAB97_92D7_48D7_A8A1_8DCD3578E504__INCLUDED_)
