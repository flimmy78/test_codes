#pragma once

#include "IUserInfoView.h"
#include "IUserInfoPresenter.h"
#include "ConstDefinition.h"
using namespace MVC;
// forward declaration
#include <string>
class CUserManagerDlg;
class CUserInfo;

// CUserInfoDlg dialog
class CUserInfoDlg : public CDialog, IUserInfoView
{
	DECLARE_DYNAMIC(CUserInfoDlg)

public:
	CUserInfoDlg(CWnd* pParent = NULL);   // standard constructor 
	CUserInfoDlg(CUserManagerDlg* pUserManager, CUserInfo* pUserInfo, CWnd* pParent = NULL);
	virtual ~CUserInfoDlg();

// Dialog Data
	enum { IDD = IDD_DLG_USER_INFO };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()

private:
	//CUserManagerDlg* m_pUserManager;
	CUserInfo* m_pUserInfo;
public:
	CString m_strUserID;
	CString m_strUserName;
	afx_msg void OnShowWindow(BOOL bShow, UINT nStatus);
	afx_msg void OnBnClickedBtnUpdate();

private:
	std::string m_viewID;
    bool  m_isCreate;
public:

	virtual void destroyView(){};
	virtual std::string getViewID() { return m_viewID.c_str();};
	virtual std::string getViewTypeName() { return conView_UserInfo;};
	virtual void hideView() {};
	virtual void initView() {};
	virtual void setViewID(std::string newVal) {m_viewID=newVal.c_str();};
	virtual void setViewTypeName(std::string newVal) {};
	virtual void showView() 
	{
		if (m_isCreate==false)
		{
			this->Create(IDD_DLG_USER_INFO); 
			m_isCreate=true;
		}
		
		this->ShowWindow(SW_NORMAL);
		this->SetFocus();
	};
	 

	virtual void displayUser(CUserInfo* user) {
		m_pUserInfo=user; 
		if (m_isCreate==false)
		{
			this->Create(IDD_DLG_USER_INFO); 
			m_isCreate=true;
		}
		if (m_pUserInfo!=NULL)
		{


			m_strUserID = CString(m_pUserInfo->getUserID().c_str());
			m_strUserName = CString(m_pUserInfo->getUserName().c_str());
		}

		UpdateData(FALSE);
		this->ShowWindow(SW_SHOW);
	};


	virtual void putObject(void* obj,std::string objectName="");
	 

	virtual void attachPresenter(IPresenter* presenter){m_presenter=(IUserInfoPresenter*)presenter;};
 
private:

	IUserInfoPresenter* m_presenter;





	    
	afx_msg void OnBnClickedOk();
};
