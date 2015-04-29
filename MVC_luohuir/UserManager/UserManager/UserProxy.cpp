#include "StdAfx.h"
#include "UserProxy.h"



UserProxy* UserProxy::m_instance = 0;

UserProxy& UserProxy::getInstance()
{
	if (m_instance==NULL)
	{
		m_instance=new UserProxy();
	}
	return *m_instance;
}

UserProxy::UserProxy(void)
{
}

UserProxy::~UserProxy(void)
{
}
