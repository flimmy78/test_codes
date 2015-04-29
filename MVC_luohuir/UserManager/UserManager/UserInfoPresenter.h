#pragma once


#include "IPresenter.h"
#include "IUserInfoPresenter.h"


class IUserProxy;
class IUserInfoView;

class UserInfoPresenter : public IUserInfoPresenter
	 
{
public:
	UserInfoPresenter(void);
public:
	virtual ~UserInfoPresenter(void);

	virtual void attach(IModel* model, IView* view);

	virtual void NotifyObserver(NotifyObject& notifyObj) ;


	virtual bool updateUser(CUserInfo* user);
private:


	IUserProxy* m_userProxy;
	IUserInfoView*   m_userInfoView;
};
