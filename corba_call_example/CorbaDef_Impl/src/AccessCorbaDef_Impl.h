
#ifndef ACCESS_CORBA_IMPL_H
#define ACCESS_CORBA_IMPL_H

#include <map>
#include <sys/timeb.h>

#include "omniORB4/CORBA.h"

#include "IDL_src/src/CorbaTypes.h"
#include "IDL_src/src/IAccessCorbaDef.h"
#include "string"

namespace Base_Bus
{

	//TD15618, use timer to trigger if the observers are timeout
	class AccessCorbaDef_Impl : public virtual POA_Base_Bus::IAccessCorbaDef
	{
	public:


		AccessCorbaDef_Impl (int port, const std::string & objName);

		virtual ~AccessCorbaDef_Impl();

		virtual void SetATestValue(CorbaTypes::EDatapointAlarm v);
		virtual void sendStringToSvt(const char* s);
		void activateServantWithName( const std::string& objectName );
		void setServantKey(PortableServer::ServantBase* theServant, const std::string& key);
		CORBA::ORB& getOrb();
		bool initialise(int port);

		CORBA::ORB_var m_orbVar;
	};
}

#endif //DATAPOINT_ACCESS_CORBA_IMPL_H

