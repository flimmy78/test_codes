/*_############################################################################
  _## 
  _##  snmpBulk.cpp  
  _##
  _##  SNMP++v3.2.16
  _##  -----------------------------------------------
  _##  Copyright (c) 2001-2004 Jochen Katz, Frank Fock
  _##
  _##  This software is based on SNMP++2.6 from Hewlett Packard:
  _##  
  _##    Copyright (c) 1996
  _##    Hewlett-Packard Company
  _##  
  _##  ATTENTION: USE OF THIS SOFTWARE IS SUBJECT TO THE FOLLOWING TERMS.
  _##  Permission to use, copy, modify, distribute and/or sell this software 
  _##  and/or its documentation is hereby granted without fee. User agrees 
  _##  to display the above copyright notice and this license notice in all 
  _##  copies of the software and any documentation of the software. User 
  _##  agrees to assume all liability for the use of the software; 
  _##  Hewlett-Packard and Jochen Katz make no representations about the 
  _##  suitability of this software for any purpose. It is provided 
  _##  "AS-IS" without warranty of any kind, either express or implied. User 
  _##  hereby grants a royalty-free license to any and all derivatives based
  _##  upon this software code base. 
  _##  
  _##  Stuttgart, Germany, Sun Feb 27 11:34:17 CET 2005 
  _##  
  _##########################################################################*/
/*
  snmpBulk.cpp 
  
  Copyright (c) 1996
  Hewlett-Packard Company

  ATTENTION: USE OF THIS SOFTWARE IS SUBJECT TO THE FOLLOWING TERMS.
  Permission to use, copy, modify, distribute and/or sell this software
  and/or its documentation is hereby granted without fee. User agrees
  to display the above copyright notice and this license notice in all
  copies of the software and any documentation of the software. User
  agrees to assume all liability for the use of the software; Hewlett-Packard
  makes no representations about the suitability of this software for any
  purpose. It is provided "AS-IS" without warranty of any kind,either express
  or implied. User hereby grants a royalty-free license to any and all
  derivatives based upon this software code base.

  Peter E. Mellquist
*/
char snmpbulk_cpp_version[]="@(#) SNMP++ $Id: snmpBulk.cpp,v 1.1.4.1 2005/03/23 04:00:41 greggk Exp $";


//jun add
//#define _SNMPv3

#include "snmp_pp/snmp_pp.h"
#include <stdlib.h>
#include <stdio.h>

#ifdef SNMP_PP_NAMESPACE
using namespace Snmp_pp;
#endif

#if (__GNUC__ > 2)
#include <iostream>
using std::cerr;
using std::cout;
using std::endl;
using std::flush;
#else
#include <iostream>
using namespace std;
#endif


int main_bulk_jun( int argc, char **argv)
{
	{
	  cout << "Usage:\n";
	  cout << "snmpBulk IpAddress | DNSName [Oid [Oid...]] [options]\n";
	  cout << "Oid: sysDescr object is default\n";
	  cout << "options: -v1 , use SNMPV1, default\n";
	  cout << "         -v2 , use SNMPV2\n";
#ifdef _SNMPv3
          cout << "         -v3 , use SNMPV3\n";
#endif
	  cout << "         -pPort , remote port to use\n";
	  cout << "         -CCommunity_name, specify community default is 'public' \n";
	  cout << "         -rN , retries default is N = 1 retry\n";
	  cout << "         -tN , timeout in hundredths of seconds; default is N = 100\n";
	  cout << "         -nN , non-repeaters default is N = 0\n";
	  cout << "         -mN , max-repetitions default is  N = 1\n";
#ifdef _SNMPv3
          cout << "         -snSecurityName, " << endl;
          cout << "         -slN , securityLevel to use, default N = 3 = authPriv" << endl;
          cout << "         -smN , securityModel to use, only default N = 3 = USM possible\n";
          cout << "         -cnContextName, default """"" << endl;
          cout << "         -ceContextEngineID, default """"" << endl;
          cout << "         -md5 , use MD5 authentication protocol\n";
          cout << "         -sha , use SHA authentication protocol\n";
          cout << "         -des , use DES privacy protocol\n";
          cout << "         -idea, use IDEA privacy protocol\n";
          cout << "         -aes128, use AES128 privacy protocol\n";
          cout << "         -aes192, use AES192 privacy protocol\n";
          cout << "         -aes256, use AES256 privacy protocol\n";
          cout << "         -uaAuthPassword\n";
          cout << "         -upPrivPassword\n";
#endif
	}
   //---------[ check the arg count ]----------------------------------------
   if ( argc < 2) {
	  
	  return 1;
   }

   Snmp::socket_startup();  // Initialize socket subsystem

   //---------[ make a GenAddress and Oid object to retrieve ]---------------
   UdpAddress address( argv[1]);      // make a SNMP++ Generic address
   if ( !address.valid()) {           // check validity of address
	  cout << "Invalid Address or DNS Name, " << argv[1] << "\n";
	  return 1;
   }
   Pdu pdu;                              // construct a Pdu object
   Vb vb;                                // construct a Vb object
   if ( argc >= 3) {                  // if 3 args, then use the callers Oid
	int i=2;
	while ((strstr(argv[i],"-")==0) && (i<argc)) {
		Oid oid(argv[i]);
		if ( !oid.valid()) {            // check validity of user oid
			cout << "Invalid Oid, " << argv[2] << "\n";
			return -2;
		}
		vb.set_oid(oid);
		pdu += vb;
		i++;
	}
   }
   else {
     Oid oid("1.3.6.1.2.1.1.1");      // default is sysDescr
     vb.set_oid(oid);
     pdu += vb;                            // add the vb to the Pdu
   }

   //jun add
   {
		Oid oid ("1.3.6.1.2.1.1.6.0");
		vb.set_oid(oid);
		pdu += vb;
		Oid oid2("1.3.6.1.2.1.1.3.0");
		vb.set_oid(oid2);
		pdu += vb;
		Oid oid3("1.3.6.1.2.1.1.5.0");
		vb.set_oid(oid3);
		pdu += vb;
		Oid oidx("1.3.6.1.2.1.1.5");
		vb.set_oid(oidx);
		pdu += vb;
		Oid oid4("1.3.6.1.2.1.25.5.1.1");
		vb.set_oid(oid4);
		pdu += vb;
   }
   //---------[ determine options to use ]-----------------------------------
   snmp_version version=version1;                  // default is v1
   int retries=1;                                  // default retries is 1
   int timeout=100;                                // default is 1 second
   u_short port=161;                               // default snmp port is 161
   OctetStr community("public");                   // community name
   int non_reps=2;                                 // non repeaters default is 0
   int max_reps=20;                                 // maximum repetitions default is 1

#ifdef _SNMPv3
   OctetStr privPassword("");
   OctetStr authPassword("");
   OctetStr securityName("");
   int securityModel = SecurityModel_USM;
   int securityLevel = SecurityLevel_authPriv;
   OctetStr contextName("");
   OctetStr contextEngineID("");
   long authProtocol = SNMPv3_usmNoAuthProtocol;
   long privProtocol = SNMPv3_usmNoPrivProtocol;
   v3MP *v3_MP;
#endif

   char *ptr;

   for(int x=1;x<argc;x++) {                           // parse for version
     if ( strstr( argv[x],"-v2")!= 0) {
       version = version2c;
       continue;
     }
     if ( strstr( argv[x],"-r")!= 0) {                 // parse for retries
       ptr = argv[x]; ptr++; ptr++;
       retries = atoi(ptr);
       if (( retries<0)|| (retries>5)) retries=1; 
       continue;
     }
     if ( strstr( argv[x], "-t")!=0) {                 // parse for timeout
       ptr = argv[x]; ptr++; ptr++;
       timeout = atoi( ptr);
       if (( timeout < 100)||( timeout>500)) timeout=100;
       continue;
     }
     if ( strstr( argv[x],"-n")!=0) {                 // parse for non repeaters
       ptr = argv[x];ptr++;ptr++;
       non_reps=atoi( ptr);
       if (( non_reps < 0)||( non_reps>10)) non_reps=0;
     }
     if ( strstr( argv[x],"-m")!=0) {                 // parse for max repetitions 
       ptr = argv[x];ptr++;ptr++;
       max_reps=atoi( ptr);
       if ( max_reps < 0) max_reps=1;
     }
     if ( strstr( argv[x],"-C")!=0) {
       ptr = argv[x]; ptr++; ptr++;
       community = ptr;
       continue;
     }
     if ( strstr( argv[x],"-p")!=0) {
       ptr = argv[x]; ptr++; ptr++;
       sscanf(ptr, "%hu", &port);
       continue;
     }

#ifdef _SNMPv3
     if ( strstr( argv[x],"-v3")!= 0) {
       version = version3;
       continue;
     }
     if ( strstr( argv[x],"-idea") != 0) {
       ptr = argv[x]; ptr++; ptr++;
       privProtocol = SNMPv3_usmIDEAPrivProtocol;
       continue;
     }
     if ( strstr( argv[x],"-aes128") != 0) {
       ptr = argv[x]; ptr++; ptr++;
       privProtocol = SNMPv3_usmAES128PrivProtocol;
       continue;
     }
     if ( strstr( argv[x],"-aes192") != 0) {
       ptr = argv[x]; ptr++; ptr++;
       privProtocol = SNMPv3_usmAES192PrivProtocol;
       continue;
     }
     if ( strstr( argv[x],"-aes256") != 0) {
       ptr = argv[x]; ptr++; ptr++;
       privProtocol = SNMPv3_usmAES256PrivProtocol;
       continue;
     }
     if ( strstr( argv[x],"-sha") != 0) {
       ptr = argv[x]; ptr++; ptr++;
       authProtocol = SNMPv3_usmHMACSHAAuthProtocol;
       continue;
     }
     if ( strstr( argv[x],"-des") != 0) {
       ptr = argv[x]; ptr++; ptr++;
       privProtocol = SNMPv3_usmDESPrivProtocol;
       continue;
     }
     if ( strstr( argv[x],"-md5") != 0) {
       ptr = argv[x]; ptr++; ptr++;
       authProtocol = SNMPv3_usmHMACMD5AuthProtocol;
       continue;
     }
     if ( strstr( argv[x],"-sn")!=0) {
       ptr = argv[x]; ptr+=3;
       securityName = ptr;
       continue;
      }
     if ( strstr( argv[x], "-sl")!=0) {
       ptr = argv[x]; ptr+=3;
       securityLevel = atoi( ptr);
       if (( securityLevel < SecurityLevel_noAuthNoPriv) ||
           ( securityLevel > SecurityLevel_authPriv))
         securityLevel = SecurityLevel_authPriv;
       continue;
     }
     if ( strstr( argv[x], "-sm")!=0) {
       ptr = argv[x]; ptr+=3;
       securityModel = atoi( ptr);
       if (( securityModel < SecurityModel_v1) ||
           ( securityModel > SecurityModel_USM))
         securityModel = SecurityModel_USM;
       continue;
     }
     if ( strstr( argv[x],"-cn")!=0) {
       ptr = argv[x]; ptr+=3;
       contextName = ptr;
       continue;
     }
     if ( strstr( argv[x],"-ce")!=0) {
       ptr = argv[x]; ptr+=3;
       contextEngineID = ptr;
       continue;
     }
     if ( strstr( argv[x],"-ua")!=0) {
       ptr = argv[x]; ptr+=3;
       authPassword = ptr;
       continue;
     }
     if ( strstr( argv[x],"-up")!=0) {
       ptr = argv[x]; ptr+=3;
       privPassword = ptr;
       continue;
     }
#endif
  }

   //----------[ create a SNMP++ session ]-----------------------------------
   int status;
   // bind to any port and use IPv6 if needed
   Snmp snmp(status, 0, (address.get_ip_version() == Address::version_ipv6));

   if ( status != SNMP_CLASS_SUCCESS) {
      cout << "SNMP++ Session Create Fail, " << snmp.error_msg(status) << "\n";
      return 1;
   }

   //---------[ init SnmpV3 ]--------------------------------------------
#ifdef _SNMPv3
   if (version == version3) {
     char *engineId = "snmpBulk";
     char *filename = "snmpv3_boot_counter";
     unsigned int snmpEngineBoots = 0;
     int status;

     status = getBootCounter(filename, engineId, snmpEngineBoots);
     if ((status != SNMPv3_OK) && (status < SNMPv3_FILEOPEN_ERROR))
     {
       cout << "Error loading snmpEngineBoots counter: " << status << endl;
       return 1;
     }
     snmpEngineBoots++;
     status = saveBootCounter(filename, engineId, snmpEngineBoots);
     if (status != SNMPv3_OK)
     {
       cout << "Error saving snmpEngineBoots counter: " << status << endl;
       return 1;
     }

     int construct_status;
     v3_MP = new v3MP(engineId, snmpEngineBoots, construct_status);

     USM *usm = v3_MP->get_usm();
     usm->add_usm_user(securityName,
		       authProtocol, privProtocol,
		       authPassword, privPassword);
   }
   else
   {
     // MUST create a dummy v3MP object if _SNMPv3 is enabled!
     int construct_status;
     v3_MP = new v3MP("dummy", 0, construct_status);
   }
#endif

   //--------[ build up SNMP++ object needed ]-------------------------------
   address.set_port(port);
   CTarget ctarget( address);             // make a target using the address
#ifdef _SNMPv3
   UTarget utarget( address);

   if (version == version3) {
     utarget.set_version( version);          // set the SNMP version SNMPV1 or V2 or V3
     utarget.set_retry( retries);            // set the number of auto retries
     utarget.set_timeout( timeout);          // set timeout
     utarget.set_security_model( securityModel);
     utarget.set_security_name( securityName);
     pdu.set_security_level( securityLevel);
     pdu.set_context_name (contextName);
     pdu.set_context_engine_id(contextEngineID);
   }
   else {
#endif
     ctarget.set_version( version);         // set the SNMP version SNMPV1 or V2
     ctarget.set_retry( retries);           // set the number of auto retries
     ctarget.set_timeout( timeout);         // set timeout
     ctarget.set_readcommunity( community); // set the read community name
#ifdef _SNMPv3
   }
#endif

   //-------[ issue the request, blocked mode ]-----------------------------
   cout << "SNMP++ GetBulk to " << argv[1] << " SNMPV" 
#ifdef _SNMPv3
        << ((version==version3) ? (version) : (version+1))
#else
        << (version+1)
#endif
        << " Retries=" << retries
	<< " Timeout=" << timeout << "ms"
	<< " Non Reptrs=" << non_reps
	<< " Max Reps=" << max_reps << endl;
#ifdef _SNMPv3
   if (version == version3)
     cout << endl
          << "securityName= " << securityName.get_printable()
          << ", securityLevel= " << securityLevel
          << ", securityModel= " << securityModel << endl
          << "contextName= " << contextName.get_printable()
          << ", contextEngineID= " << contextEngineID.get_printable()
          << endl;
   else
#endif
     cout << " Community=" << community.get_printable() << endl << flush;

   SnmpTarget *target;
#ifdef _SNMPv3
   if (version == version3)
     target = &utarget;
   else
#endif
     target = &ctarget;
   Pdu pdu2 = pdu;

   if (( status = snmp.get_bulk( pdu,*target,non_reps,max_reps))== SNMP_CLASS_SUCCESS) {
     for ( int z=0;z<pdu.get_vb_count();z++) {
       pdu.get_vb( vb,z);
#ifdef _SNMPv3
       if (pdu.get_type() == REPORT_MSG) {
         Oid tmp;
         vb.get_oid(tmp);
         cout << "Received a reportPdu: "
              << snmp.error_msg( tmp) 
              << endl
              << vb.get_printable_oid() << " = "
              << vb.get_printable_value() << endl;
       }
#endif
       cout << "Oid = " << vb.get_printable_oid() << "\n";
       if ( vb.get_syntax() != sNMP_SYNTAX_ENDOFMIBVIEW) {
	 cout << "Value = " << vb.get_printable_value() << "\n\n";
       }
       else {
	 cout << "End of MIB view.\n\n";
       }
     }
   }
   else
     cout << "SNMP++ GetBulk Error, " << snmp.error_msg( status) << "\n";

   pdu = pdu2;
//--------------------
   if (( status = snmp.get_bulk( pdu,*target,non_reps,max_reps))== SNMP_CLASS_SUCCESS) {
     for ( int z=0;z<pdu.get_vb_count();z++) {
       pdu.get_vb( vb,z);
#ifdef _SNMPv3
       if (pdu.get_type() == REPORT_MSG) {
         Oid tmp;
         vb.get_oid(tmp);
         cout << "Received a reportPdu: "
              << snmp.error_msg( tmp) 
              << endl
              << vb.get_printable_oid() << " = "
              << vb.get_printable_value() << endl;
       }
#endif
       cout << "Oid = " << vb.get_printable_oid() << "\n";
       if ( vb.get_syntax() != sNMP_SYNTAX_ENDOFMIBVIEW) {
	 cout << "Value = " << vb.get_printable_value() << "\n\n";
	 
       }
       else {
	 cout << "End of MIB view.\n\n";
       }
     }
   }
   else
     cout << "SNMP++ GetBulk Error, " << snmp.error_msg( status) << "\n";
   //-------------


   Snmp::socket_cleanup();  // Shut down socket subsystem
}
