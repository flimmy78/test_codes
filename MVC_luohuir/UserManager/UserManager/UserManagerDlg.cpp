// UserManagerDlg.cpp : implementation file
//

#include "stdafx.h"
#include "UserManager.h"
#include "UserManagerDlg.h"
#include "UserInfoDlg.h"

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


// CUserManagerDlg dialog




CUserManagerDlg::CUserManagerDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CUserManagerDlg::IDD, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CUserManagerDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_LST_USER, m_listUserInfo);
}

BEGIN_MESSAGE_MAP(CUserManagerDlg, CDialog)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	//}}AFX_MSG_MAP
	ON_BN_CLICKED(IDC_BTN_EDIT, &CUserManagerDlg::OnBnClickedBtnEdit)
	ON_WM_DESTROY()
END_MESSAGE_MAP()


// CUserManagerDlg message handlers

BOOL CUserManagerDlg::OnInitDialog()
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
	initialize();
	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CUserManagerDlg::OnSysCommand(UINT nID, LPARAM lParam)
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

void CUserManagerDlg::OnPaint()
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
HCURSOR CUserManagerDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}
void CUserManagerDlg::displayUsers(std::list<CUserInfo*> userlist)
{	
	// Setup users
	std::list<CUserInfo*>::iterator iter=userlist.begin();
	for (;iter!=userlist.end();iter++)
	{
		m_vecUserInfo.push_back(*iter);
	}
	 
	for (int i = 0; i<m_vecUserInfo.size(); i++)
	{
		m_listUserInfo.InsertItem(i, m_vecUserInfo[i]->getUserID().c_str());
		m_listUserInfo.SetItemText(i, 1, m_vecUserInfo[i]->getUserName().c_str());
	}
// 	for (int i = 0; i < 5; i++)
// 	{
// 		CString strTempName;
// 		CString strTempID;
// 		CUserInfo* pUserInfo = NULL;
// 
// 		strTempID.Format("User ID %d", i+1001);
// 		strTempName.Format("User name %d", i+1001);
// 
// 		pUserInfo = new CUserInfo(strTempID, strTempName);
// 		m_vecUserInfo.push_back(pUserInfo);
// 	}
// 
// 	// Insert user info to list
// 	for (int i = 0; i<5; i++)
// 	{
// 		m_listUserInfo.InsertItem(i, m_vecUserInfo[i]->getUserID());
// 		m_listUserInfo.SetItemText(i, 1, m_vecUserInfo[i]->getUserName());
// 	}
}

void CUserManagerDlg::initialize()
{
	// Setup List Control
	m_listUserInfo.InsertColumn(0, "User ID", LVCFMT_CENTER, 100);
	m_listUserInfo.InsertColumn(1, "User Name", LVCFMT_LEFT, 200);

	if (m_presenter!=NULL)
	{
		m_presenter->displayUsers();
	}

	
}
void CUserManagerDlg::OnBnClickedBtnEdit()
{
	// TODO: Add your control notification handler code here
	POSITION pos = m_listUserInfo.GetFirstSelectedItemPosition();
	if (NULL != pos)
	{
		int nIndex = m_listUserInfo.GetNextSelectedItem(pos);

		if (m_presenter!=NULL)
		{
			m_presenter->displayUser(m_vecUserInfo[nIndex]);
		}
	
// 		CUserInfoDlg * pUserInfoDlg = NULL;
// 		pUserInfoDlg = new CUserInfoDlg(this, m_vecUserInfo[nIndex]);
// 		pUserInfoDlg->Create(IDD_DLG_USER_INFO);
// 		pUserInfoDlg->ShowWindow(SW_SHOW);
// 		//pUserInfoDlg->DoModal();
// 
// 		//delete pUserInfoDlg;
// 		pUserInfoDlg = NULL;
	}
}

void CUserManagerDlg::refreshUser(CUserInfo* user)
{
	updateDisplay(user);
}

void CUserManagerDlg::updateDisplay(CUserInfo* pUserInfo)
{
	for (int i=0; i < m_listUserInfo.GetItemCount(); i++)
	{
		if (m_listUserInfo.GetItemText(i,0) == pUserInfo->getUserID().c_str())
		{
			m_listUserInfo.SetItemText(i, 1, pUserInfo->getUserName().c_str());
			break;
		}
	}
}
void CUserManagerDlg::OnDestroy()
{
	CDialog::OnDestroy();
	
	for (int i=0; i<m_vecUserInfo.size(); i++)
	{
		delete m_vecUserInfo[i];
		m_vecUserInfo[i] = NULL;
	}
	
	m_vecUserInfo.clear();
	if (m_presenter!=NULL) delete m_presenter;
	// TODO: Add your message handler code here
}
