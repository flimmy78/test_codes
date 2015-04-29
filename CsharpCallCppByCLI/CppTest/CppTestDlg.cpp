// CppTestDlg.cpp : implementation file
//

#include "stdafx.h"
#include "CppTest.h"
#include "CppTestDlg.h"
#include <stdlib.h>
#include <windows.h>

#pragma comment(lib,"../debug/cppdll.lib")
#include "../cppdll/cppdll.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CAboutDlg dialog used for App About

class CAboutDlg : public CDialog
{
public:
	CAboutDlg();

// Dialog Data
	enum { IDD = IDD_ABOUTBOX };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

// Implementation
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialog(CAboutDlg::IDD)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialog)
END_MESSAGE_MAP()


// CCppTestDlg dialog




CCppTestDlg::CCppTestDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CCppTestDlg::IDD, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
	m_op = None;
}

void CCppTestDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_EDIT1, m_EditX);
	DDX_Control(pDX, IDC_EDIT2, m_EditY);
	DDX_Control(pDX, IDC_EDIT3, m_EditSum);
}

BEGIN_MESSAGE_MAP(CCppTestDlg, CDialog)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	//}}AFX_MSG_MAP
	ON_BN_CLICKED(IDC_BUTTON1, &CCppTestDlg::OnBnClickedButton1)
	ON_BN_CLICKED(IDCANCEL, &CCppTestDlg::OnBnClickedCancel)
	ON_BN_CLICKED(IDC_RADIO1, &CCppTestDlg::OnBnClickedRadio1)
	ON_BN_CLICKED(IDC_RADIO2, &CCppTestDlg::OnBnClickedRadio2)
	ON_BN_CLICKED(IDC_RADIO3, &CCppTestDlg::OnBnClickedRadio3)
END_MESSAGE_MAP()


// CCppTestDlg message handlers

BOOL CCppTestDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		CString strAboutMenu;
		strAboutMenu.LoadString(IDS_ABOUTBOX);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon

	// TODO: Add extra initialization here

	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CCppTestDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialog::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CCppTestDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

// The system calls this function to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CCppTestDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}


void CCppTestDlg::OnBnClickedButton1()
{
	switch(m_op)
	{
	case Add:
		{			
			CString xStr;
			m_EditX.GetWindowText(xStr);
			CString yStr;
			m_EditY.GetWindowText(yStr);

			double x = atof(xStr);
			double y = atof(yStr);	
			double sum =Math::Add(x, y); 
			

			CString sumStr;
			sumStr.Format("%f",sum);
			m_EditSum.SetWindowText(sumStr);
			break;
		}
	case Multiply:
		{
			CString xStr;
			m_EditX.GetWindowText(xStr);
			CString yStr;
			m_EditY.GetWindowText(yStr);

			double x = atof(xStr.GetBuffer());
			double y = atof(yStr);	
			double sum = Math::Multiply(x, y);

			CString sumStr;
			sumStr.Format("%f",sum);
			m_EditSum.SetWindowText(sumStr);
			break;
		}
	case Factorial:
		{
			CString xStr;
			m_EditX.GetWindowText(xStr);			

			double x = atoi(xStr);			
			double sum = AdvancedMath::Factorial(x);

			CString sumStr;
			sumStr.Format("%f",sum);
			m_EditSum.SetWindowText(sumStr);
		break;
		}
	default:
		break;
	}
}

void CCppTestDlg::OnBnClickedCancel()
{
	// TODO: Add your control notification handler code here
	OnCancel();
}

void CCppTestDlg::OnBnClickedRadio1()
{
	// TODO: Add your control notification handler code here
	m_op = Add;	
	m_EditY.EnableWindow(true);
}

void CCppTestDlg::OnBnClickedRadio2()
{
	// TODO: Add your control notification handler code here
	m_op = Multiply;
	m_EditY.EnableWindow(true);
}

void CCppTestDlg::OnBnClickedRadio3()
{
	// TODO: Add your control notification handler code here
	m_op = Factorial;
	m_EditY.EnableWindow(false);
}
