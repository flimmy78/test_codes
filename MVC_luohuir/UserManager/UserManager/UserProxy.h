#pragma once
#include "IModel.h"
#include <list>
#include "UserInfo.h"
#include "IUserProxy.h"
#include <sstream>
using namespace MVC;

class UserProxy :	public IUserProxy
{
public:
	UserProxy(void);

	static UserProxy& getInstance();
	
	virtual std::list<CUserInfo*> getUsers()
	{
		std::list<CUserInfo*> lst;
		for (int i = 0; i < 5; i++)
		{
			std::string strTempName;
			std::string strTempID;
			CUserInfo* pUserInfo = NULL;

			std::ostringstream strStreamID;		 
			strStreamID << "User ID" << (i+1001);
			std::ostringstream strStreamName;		 
			strStreamName << "User Name" << (i+1001);
 

			strTempID=strStreamID.str();
		 
			strTempName=strStreamName.str();

			pUserInfo = new CUserInfo(strTempID, strTempName);
			lst.push_back(pUserInfo);
		}
		return lst;
	}

	virtual std::string TypeName()
	{
		return "UserProxy";
	}


	virtual bool updateUser(CUserInfo* user)
	{
		//update user
		user->setUserName(user->getUserName() + "-Proxy");
		return true;
	}

public:
	virtual ~UserProxy(void);
private:
	static UserProxy* m_instance;
};
