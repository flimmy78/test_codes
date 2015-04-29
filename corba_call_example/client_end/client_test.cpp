

#include <stdio.h>
#include <time.h>
#include "src/AccessCorbaDef_Impl.h"

int main()
{
	printf("start...\n");
	int a = 2;
	time_t sta_sec;
	sta_sec = time (NULL);
	printf("start:%d\n", sta_sec);
	Base_Bus::AccessCorbaDef_Impl obj(5555, "my_client_obj");
	CORBA::ORB& o = obj.getOrb();

	CORBA::String_var objToString((o.object_to_string((CORBA::Object *)&obj)) );
    printf("ObjectToString: %s\n", objToString.in() );
	
	printf("string_to_object bgn\n");
	CORBA::Object_var tmpVar = o.string_to_object("corbaloc::192.168.253.124:6000/my_first_obj");

	printf("string_to_object ok\n");

	CORBA::String_var objToString2((o.object_to_string(tmpVar)) );
    printf("ObjectToString2: %s\n", objToString2.in() );

    //omniORB::setClientCallTimeout(tmpVar, 20000);
	try
	{
		Base_Bus::IAccessCorbaDef_var objRep = Base_Bus::IAccessCorbaDef::_narrow(tmpVar);

		if ( !CORBA::is_nil(objRep) )
		{
			objRep->SetATestValue(Base_Bus::CorbaTypes::HighAlarm);
			objRep->SetATestValue(Base_Bus::CorbaTypes::OverScaleHighAlarm);
			objRep->SetATestValue(Base_Bus::CorbaTypes::GeneralAlarm);

			char s[1024];
			while (scanf("%s", &s))
			{
				if (s[0] == 'e')
					break;
				objRep->sendStringToSvt(s);
			}
		}
		CORBA::release(objRep);
	}
	catch( const CORBA::Exception& ex )
    {
		CORBA::SystemException* sysEx = CORBA::SystemException::_downcast((CORBA::SystemException *)&ex );
        if (sysEx == NULL)
        {
            throw 0;
        }
		const char* buf = sysEx->NP_minorString();
		if ( NULL != buf )
		{
			printf("[CL-21230] Caught COBAException: %s\n", buf);
		}

    }
    catch( ... )
    {
        
    }
	time_t end_sec;
	end_sec = time (NULL);
	printf("end_sec - sta_sec = %ds\n", end_sec - sta_sec);

	printf("end.\n");
	char c;
	while (scanf("%c", &c))
	{
		break;
	}
	return 0;
}