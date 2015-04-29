// UserManagerDlg.h : header file
//

#pragma once
#include "UserInfo.h"
#include <vector>
#include "afxcmn.h"
#include "IUserManagerView.h"
#include "IUserManagerPresenter.h"
#include "ConstDefinition.h"
// CUserManagerDlg dialog
using namespace MVC;
class CUserManagerDlg : public CDialog, IUserManagerView
{
// Construction
public:
	CUserManagerDlg(CWnd* pParent = NULL);	// standard constructor
	void updateDisplay(CUserInfo* pUserInfo);
	afx_msg void OnDestroy();
	afx_msg void OnBnClickedBtnEdit();
// Dialog Data
	enum { IDD = IDD_USERMANAGER_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	
public:
	CListCtrl m_listUserInfo;
	

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()

private: // functions
	void initialize();

private: // variables
	std::vector<CUserInfo* > m_vecUserInfo;



public:
	virtual void destroyView(){this->OnDestroy();};
	virtual std::string getViewID() { return "";};
	virtual std::string getViewTypeName() { return conView_UserManager;};
	virtual void hideView() {};
	virtual void initView() {};
	virtual void setViewID(std::string newVal) {};
	virtual void setViewTypeName(std::string newVal) {};
	virtual void showView() {this->DoModal();};
    virtual void attachPresenter(IPresenter* presenter){m_presenter=(IUserManagerPresenter*)presenter;};
	virtual void displayUsers(std::list<CUserInfo*> userlist);
	virtual void putObject(void* obj,std::string objectName=""){};

	virtual void refreshUser(CUserInfo* user);
private:

	IUserManagerPresenter* m_presenter;

};
