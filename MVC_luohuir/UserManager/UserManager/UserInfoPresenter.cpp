#include "StdAfx.h"
#include "UserInfoPresenter.h"
 
#include "IUserInfoView.h"
#include "IUserProxy.h"
#include "ViewManager.h"
#include "NotifyManager.h"
#include "ConstDefinition.h"

UserInfoPresenter::UserInfoPresenter(void)
{
	NotifyManager::getInstance().registerObserver(this);
}

UserInfoPresenter::~UserInfoPresenter(void)
{
	NotifyManager::getInstance().unRegisterObserver(this);
}


void UserInfoPresenter::attach(IModel* model, IView* view)
{
	m_userProxy=(IUserProxy*)model;
	m_userInfoView=(IUserInfoView*)view;//

}

void UserInfoPresenter::NotifyObserver(NotifyObject& notifyObj) 
{
// 	if (notifyObj.getType()=="UpdateUser")
// 	{		 
// 		CUserInfo* user= (CUserInfo*) notifyObj.getBody();	
// 		
// 		if (m_userInfoView!=NULL)
// 		{
// 			m_userInfoView->displayUser(user);
// 		}
// 	}
}

bool UserInfoPresenter::updateUser(CUserInfo* user)
{
	  bool r=m_userProxy->updateUser(user);
	  if (r)
	  {
		  m_userInfoView->displayUser(user);
		  NotifyManager::getInstance().send(conMsg_UserUpdate,user, user->getUserID());
	  }
	  return r;

}