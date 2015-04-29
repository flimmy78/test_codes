#pragma once
#include <string>

class CUserInfo
{
public:
	//CUserInfo(void);
	CUserInfo(std::string strUserID, std::string strUserName);
	~CUserInfo(void);

	void setUserName(std::string strNewUserName);
	std::string getUserID(){return m_strUserID;};
	std::string getUserName(){return m_strUserName;};
private:
	std::string m_strUserID;
	std::string m_strUserName;
};
