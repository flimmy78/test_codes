#pragma once
#include "IPresenter.h"
#include "UserInfo.h"
using namespace MVC;

class IUserManagerPresenter :	public IPresenter
{
public:
	IUserManagerPresenter(void){}; 
	virtual ~IUserManagerPresenter(void){};

	virtual void displayUsers()=0;
	virtual void displayUser(CUserInfo* user)=0;
};
