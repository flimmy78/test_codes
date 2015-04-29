#pragma once
#include "IPresenter.h"
#include "IUserManagerPresenter.h"


class IUserProxy;
class IUserManagerView;

class UserManagerPresenter :public IUserManagerPresenter
{
public:
	UserManagerPresenter(void); 
	virtual ~UserManagerPresenter(void);

	virtual void attach(IModel* model, IView* view);

	virtual void NotifyObserver(NotifyObject& notifyObj);

	virtual void displayUsers();
	virtual void displayUser(CUserInfo* user);
private:

	IUserProxy* m_userProxy;
	IUserManagerView*   m_userManagerView;

};
