#include "StdAfx.h"
#include "UserManagerPresenter.h"
#include "IUserManagerView.h"
#include "IUserProxy.h"
#include "ViewManager.h"
#include "NotifyManager.h"
#include  "ConstDefinition.h"

UserManagerPresenter::UserManagerPresenter(void)
{
	NotifyManager::getInstance().registerObserver(this);
}

UserManagerPresenter::~UserManagerPresenter(void)
{
	NotifyManager::getInstance().unRegisterObserver(this);
}


void UserManagerPresenter::attach(IModel* model, IView* view)
{
	m_userProxy=(IUserProxy*)model;
	m_userManagerView=(IUserManagerView*)view;
	//

}


void UserManagerPresenter::displayUsers()
{
	if(m_userManagerView!=NULL && m_userProxy!=NULL)
	{
		m_userManagerView->displayUsers(m_userProxy->getUsers());
	}
}

void UserManagerPresenter::NotifyObserver(NotifyObject& notifyObj) 
{
	if (notifyObj.getType()==conMsg_UserUpdate)
	{
		CUserInfo* user= (CUserInfo*) notifyObj.getBody();
		if (m_userManagerView!=NULL)
		{
			m_userManagerView->refreshUser(user);
		}
	}
}
 
void UserManagerPresenter::displayUser(CUserInfo* user)
{
	if(m_userManagerView!=NULL && m_userProxy!=NULL)
	{
		IView* v=ViewManager::getInstance().getView(conView_UserInfo,user->getUserID());
		v->putObject(user);
		v->showView();
		
		
		// 		CUserInfoDlg * pUserInfoDlg = NULL;
		// 		pUserInfoDlg = new CUserInfoDlg(this, m_vecUserInfo[nIndex]);
		// 
		// 		pUserInfoDlg->DoModal();
		// 
		// 		delete pUserInfoDlg;
		// 		pUserInfoDlg = NULL;
	}

}