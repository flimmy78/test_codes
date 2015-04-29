#pragma once
#include "IPresenter.h"
#include "UserInfo.h"
using namespace MVC;

class IUserInfoPresenter :	public IPresenter
{
public:
	IUserInfoPresenter(void){}; 
	virtual ~IUserInfoPresenter(void){};
    virtual bool updateUser(CUserInfo* user)=0;
	 
};
