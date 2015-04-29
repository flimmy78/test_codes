#include "StdAfx.h"
#include "UserInfo.h"

// CUserInfo::CUserInfo(void)
// {
// 	m_strUserID = "";
// 	m_strUserName = "";
// }

CUserInfo::~CUserInfo(void)
{
}

CUserInfo::CUserInfo(std::string strUserID, std::string strUserName)
{
	m_strUserID = strUserID;
	m_strUserName = strUserName;
}

void CUserInfo::setUserName(std::string strNewUserName)
{
	m_strUserName = strNewUserName;
}