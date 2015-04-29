// UserInfoDlg.cpp : implementation file
//

#include "stdafx.h"
#include "UserManager.h"
#include "UserInfoDlg.h"
#include "UserManagerDlg.h"
#include "ViewManager.h"


// CUserInfoDlg dialog

IMPLEMENT_DYNAMIC(CUserInfoDlg, CDialog)

CUserInfoDlg::CUserInfoDlg(CWnd* pParent /*=NULL*/)
	: m_presenter(0)
	, m_pUserInfo(0)
	, m_isCreate(false)
	, CDialog(CUserInfoDlg::IDD, pParent)
	, m_strUserID(_T(""))
	, m_strUserName(_T(""))
{

}

CUserInfoDlg::CUserInfoDlg(CUserManagerDlg* pUserManager, CUserInfo* pUserInfo, CWnd* pParent /*=NULL*/) 
	: m_presenter(0)
	, m_pUserInfo(0)
	, m_isCreate(false)
	, CDialog(CUserInfoDlg::IDD, pParent)
{
/*	m_pUserManager = pUserManager;*/
	m_pUserInfo = pUserInfo;
}

CUserInfoDlg::~CUserInfoDlg()
{
	ViewManager::getInstance().unRegisterView(this);
	if (m_presenter!=NULL) delete m_presenter;
}

void CUserInfoDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDT_USER_ID, m_strUserID);
	DDX_Text(pDX, IDC_EDT_USER_NAME, m_strUserName);
}


BEGIN_MESSAGE_MAP(CUserInfoDlg, CDialog)
	ON_WM_SHOWWINDOW()
	ON_BN_CLICKED(IDC_BTN_UPDATE, &CUserInfoDlg::OnBnClickedBtnUpdate)
	ON_BN_CLICKED(IDOK, &CUserInfoDlg::OnBnClickedOk)
END_MESSAGE_MAP()


// CUserInfoDlg message handlers

void CUserInfoDlg::OnShowWindow(BOOL bShow, UINT nStatus)
{
	CDialog::OnShowWindow(bShow, nStatus);

	if (m_pUserInfo!=NULL)
	{

	 
		m_strUserID = CString(m_pUserInfo->getUserID().c_str());
		m_strUserName = CString(m_pUserInfo->getUserName().c_str());
	}

	UpdateData(FALSE);
	// TODO: Add your message handler code here
}

void CUserInfoDlg::OnBnClickedBtnUpdate()
{
	// TODO: Add your control notification handler code here
	UpdateData(TRUE);
	if (m_pUserInfo!=NULL)
	{
		std::string userName=(LPCTSTR)m_strUserName;
		//std::string userInfo=(LPCTSTR)m_pUserInfo;
		m_pUserInfo->setUserName(userName);
		if (m_presenter!=NULL)
		{
			 m_presenter->updateUser(m_pUserInfo);
		}
		//m_pUserManager->updateDisplay(m_pUserInfo);
	}
}


void CUserInfoDlg::putObject(void* obj,std::string objectName)
{
	if (objectName=="")
	{
		m_pUserInfo=(CUserInfo*) obj;
	}

};
void CUserInfoDlg::OnBnClickedOk()
{
	// TODO: Add your control notification handler code here
	delete this;
}
