#include "StdAfx.h"
#include "UserManagerViewFactory.h" 
#include "resource.h"	 
#include "UserInfoDlg.h"
#include "UserManagerDlg.h"
#include "UserManagerPresenter.h"
#include "UserProxy.h"
#include "ViewManager.h"
#include "ConstDefinition.h"


#include "UserInfoPresenter.h"
 

UserManagerViewFactory::UserManagerViewFactory(void)
{
}

UserManagerViewFactory::~UserManagerViewFactory(void)
{
}


IView*  UserManagerViewFactory::createView(std::string id, std::string type)
{
	IView* v=NULL;
	IPresenter* p=NULL;
	if (type==conView_UserInfo)
	{
		v=(IView*)new CUserInfoDlg();
		v->setViewID(id);
		p=new UserInfoPresenter();
		p->attach( &UserProxy::getInstance(),v);	
		v->attachPresenter(p);
		ViewManager::getInstance().registerView(v);
	}
	else if (type==conView_UserManager)
	{
		v=(IView*)new CUserManagerDlg();
		p=new UserManagerPresenter();
		p->attach( &UserProxy::getInstance(),v);	
		v->attachPresenter(p);
		v->setViewID(id);
		ViewManager::getInstance().registerView(v);
	}
	return v;
}