#ifndef _DATADEF_H__
#define _DATADEF_H__

#include "Btype.h"
// 7.2.6.1 Single-point information (IEV 371-02-07) with quality descriptor

struct SIecSiq
{
	Octet SPI:1;
	Octet :3;
	Octet BL:1;
	Octet SB:1;
	Octet NT:1;
	Octet IV:1;
	SIecSiq() {	memset(this,0,sizeof(SIecSiq)); }
	bool operator==(const SIecSiq &p)const
	{
		return (SPI==p.SPI && BL==p.BL && SB==p.SB && NT==p.NT && IV == p.IV);
    }
	bool operator!=(const SIecSiq &p)const{
		return !(SPI==p.SPI && BL==p.BL && SB==p.SB && NT==p.NT && IV == p.IV);
	}
};

// 7.2.6.2 Double-point information (IEV 371-02-08) with quality descriptor

struct SIecDiq
{
	Octet DPI:2;
	Octet :2;
	Octet BL:1;
	Octet SB:1;
	Octet NT:1;
	Octet IV:1;
	SIecDiq() {	memset(this,0,sizeof(SIecDiq)); }
	bool operator==(const SIecDiq &p)const
	{
		return (DPI==p.DPI && BL==p.BL && SB==p.SB && NT==p.NT && IV == p.IV);
    }
	bool operator!=(const SIecDiq &p)const{
		return !(DPI==p.DPI && BL==p.BL && SB==p.SB && NT==p.NT && IV == p.IV);
	}
};

// 7.2.6.3 Quality descriptor (separate octet)
struct SIecQds
{
	Octet OV:1;
	Octet :3;
	Octet BL:1;
	Octet SB:1;
	Octet NT:1;
	Octet IV:1;
	SIecQds() {	memset(this,0,sizeof(SIecQds)); }

	SIecQds& operator=(UInt8 value)
	{
		memcpy(this,&value,1);
		return *this;
	}
	bool operator==(const SIecQds &p)const
	{
		return (OV==p.OV && BL==p.BL && SB==p.SB && NT==p.NT && IV == p.IV);
    }
	bool operator!=(const SIecQds &p)const{
		return !(OV==p.OV && BL==p.BL && SB==p.SB && NT==p.NT && IV == p.IV);
	}
};

//7.2.6.4 Quality descriptor for events of protection equipment (separate octet)

struct SIecQdp
{
	Octet :3;
	Octet EI:1;
	Octet BL:1;
	Octet SB:1;
	Octet NT:1;
	Octet IV:1;
	SIecQdp() {	memset(this,0,sizeof(SIecQdp)); }
	bool operator==(const SIecQdp &p)const
	{
		return (EI==p.EI && BL==p.BL && SB==p.SB && NT==p.NT && IV == p.IV);
    }
};

//7.2.6.5 Value with transient state indication
struct SIecVti
{

	Char Value:7;//I7 
	Octet Transient:1;
	SIecVti() {	memset(this,0,sizeof(SIecVti)); }
	SIecVti(Octet x){Value=x&0x7f;Transient=(x&0x80)>>7;}
};

struct SIecStepPosition
{
	SIecVti VTI;
	SIecQds QDS;
	bool operator==(const SIecStepPosition &p)const
	{
		return (VTI.Value == p.VTI.Value && VTI.Transient==p.VTI.Transient && QDS==p.QDS);
    }
	bool operator!=(const SIecStepPosition &p)const{
		return !(VTI.Value == p.VTI.Value && VTI.Transient==p.VTI.Transient && QDS==p.QDS);
	}
};
//7.2.6.6 Normalized value
typedef UShort SIecNva; //´ýÐÞ¸Ä

struct SIecNvaQds
{
	SIecNva NVA;
	SIecQds QDS;
	SIecNvaQds()
	{
		NVA=0;
	}
	SIecNvaQds(int val)
	{
		NVA = val;
	}
	bool operator==(const SIecNvaQds &p)const
	{
		return (NVA == p.NVA );
    }
	bool operator!=(const SIecNvaQds &p)const{
		return !(NVA == p.NVA );
	}
};
//7.2.6.7 Scaled value
typedef UShort SIecSva;
struct SIecSvaQds
{
	SIecSva SVA;
	SIecQds QDS;
	SIecSvaQds()
	{
		SVA =0;
	}
	SIecSvaQds(int val)
	{
		SVA = val;
	}
	bool operator==(const SIecSvaQds &p)const
	{
		return (SVA == p.SVA );
    }
	bool operator!=(const SIecSvaQds &p)const{
		return !(SVA == p.SVA );
	}
};
//7.2.6.8 Short floating point number
typedef float SIecSfa;
struct SIecSfaQds
{
	SIecSfa SFA;
	SIecQds QDS;
	SIecSfaQds()
	{
		SFA = 0.0;
	}
	SIecSfaQds(float f)
	{
		SFA = f;
	}
	bool operator==(const SIecSfaQds &p)const
	{
		return (SFA == p.SFA );
    }
	bool operator!=(const SIecSfaQds &p)const{
		return !(SFA == p.SFA );
	}
};
//7.2.6.9 Binary counter reading
struct SIecSequence
{
	Octet  SQ:5;
	Octet  CY:1;
	Octet  CA:1;
	Octet  IV:1;
};
struct SIecBcr
{
	Int32 CounterReading;
	SIecSequence SequenceNotation;
	SIecBcr() {	memset(this,0,sizeof(SIecBcr)); }
};

struct SIecCounter
{
	SIecBcr BCR;
	Int16   increase;
	SIecCounter(){	memset(this,0,sizeof(SIecCounter)); }
};

//7.2.6.10 Single event of protection equipment
struct SIecSep
{
	Octet  ES:2;
	Octet  :1;
	Octet  EI:1;
	Octet  BL:1;
	Octet  SB:1;
	Octet  NT:1;
	Octet  IV:1;
	SIecSep() {	memset(this,0,sizeof(SIecSep)); }
	bool operator==(const SIecSep &p)const
	{
		return ES==p.ES && EI==p.EI && BL==p.BL && SB==p.SB &&NT==p.NT&&IV==p.IV; 
	}
};

//7.2.6.11 Start events of protection equipment
struct SIecSpe
{	
	Octet  GS:1;
	Octet  SL1:1;
	Octet  SL2:1;
	Octet  SL3:1;
	Octet  SIE:1;
	Octet  SRD:1;
	Octet  :2;
	SIecSpe() {	memset(this,0,sizeof(SIecSpe)); }
	bool operator==(const SIecSpe &p)const
	{
		return GS==p.GS && SL1==p.SL1 && SL2==p.SL2 && SL3==p.SL3 &&SIE==p.SIE && SRD==p.SRD; 
	}
};

//7.2.6.12 Output circuit information of protection equipment
struct SIecOci
{	
	Octet  GC:1;
	Octet  CL1:1;
	Octet  CL2:1;
	Octet  CL3:1;
	Octet  :4;
	SIecOci() {	memset(this,0,sizeof(SIecOci)); }
	bool operator==(const SIecOci &p)const
	{
		return GC==p.GC && CL1==p.CL1 && CL2==p.CL2 && CL3==p.CL3; 
	}
};

//7.2.6.13 Binary state information (IEV 371-02-03) 32 bit

typedef ULong SIecBsi;

//7.2.6.14 Fixed test bit pattern, two octets
typedef UShort SIecFbp;

struct SIecQpm
{
	Octet KPA:6;
	Octet LPC:1;
	Octet POP:1;
};

struct SIecParaNva
{
	SIecNva NVA;
	SIecQpm QPM;
	SIecParaNva(){memset(this,0,sizeof(SIecParaNva));}
};

struct SIecParaSva
{
	SIecSva SVA;
	SIecQpm QPM;
	SIecParaSva(){memset(this,0,sizeof(SIecParaSva));}
};

struct SIecParaSfa
{
	SIecSfa SFA;
	SIecQpm Qpm;
	SIecParaSfa(){memset(this,0,sizeof(SIecParaSfa));}
};

typedef UInt16 SIecCp16Time;

struct SIecProtectionEvent
{
	SIecSep SEP;
	SIecCp16Time CP16TIME;
	SIecProtectionEvent(){memset(this,0,sizeof(SIecProtectionEvent));}
	bool operator==(const SIecProtectionEvent &p)const
	{
		return SEP==p.SEP;
	}
	bool operator!=(const SIecProtectionEvent &p)const
	{
		return !(SEP==p.SEP);
	}
};



struct SIecPackedProtectionEvent
{
	SIecSpe SPE;
	SIecQdp QDP;
	SIecCp16Time CP16TIME;
	SIecPackedProtectionEvent(){memset(this,0,sizeof(SIecPackedProtectionEvent));}
	bool operator==(const SIecPackedProtectionEvent &p)const
	{
		return (SPE==p.SPE) && (QDP==p.QDP);
	}
	bool operator!=(const SIecPackedProtectionEvent &p)const
	{
		return !((SPE==p.SPE) && (QDP==p.QDP));
	}
};

struct SIecPackedProtectionInformation
{
	SIecOci OCI;
	SIecQdp QDP;
	SIecCp16Time CP16TIME;
	SIecPackedProtectionInformation(){memset(this,0,sizeof(SIecPackedProtectionInformation));}
	bool operator==(const SIecPackedProtectionInformation &p)const
	{
		return (OCI==p.OCI) && (QDP==p.QDP);
	}
	bool operator!=(const SIecPackedProtectionInformation &p)const
	{
		return !((OCI==p.OCI) && (QDP==p.QDP));
	}
};





//===========================IEC60870-104-DATA-DEFINE=====================================

#define IEC104_M_SP_NA					1	//single-point information
#define IEC104_M_DP_NA					3	//double-point information
#define IEC104_M_ST_NA					5	//step position information
#define IEC104_M_BO_NA					7	//bitstring of 32 bits
#define IEC104_M_ME_NA					9	//measured value, normalized value
#define IEC104_M_ME_NB					11	//measured value, scaled value
#define IEC104_M_ME_NC					13	//measured value, short floating point number
#define IEC104_M_IT_NA					15	//integrated totals
#define IEC104_M_SP_NB					20	//packed single-point information with status change detection
#define IEC104_M_ME_ND					21	//measured value, normalized value without quality descriptor
#define IEC104_M_SP_TB					30	//single-point information with time tag CP56Time2a
#define IEC104_M_DP_TB					31	//double-point information with time tag CP56Time2a
#define IEC104_M_ST_TB					32	//step position information with time tag CP56Time2a
#define IEC104_M_BO_TB					33	//bitstring of 32 bit with time tag CP56Time2a
#define IEC104_M_ME_TD					34	//measured value, normalized value with time tag CP56Time2a
#define IEC104_M_ME_TE					35	//measured value, scaled value with time tag CP56Time2a
#define IEC104_M_ME_TF					36	//measured value, short floating point number with time tag CP56Time2a
#define IEC104_M_IT_TB					37	//integrated totals with time tag CP56Time2a
#define IEC104_M_EP_TD					38	//event of protection equipment with time tag CP56Time2a
#define IEC104_M_EP_TE					39	//packed start events of protection equipment with time tag CP56Time2a
#define IEC104_M_EP_TF					40	//packed output circuit information of protection equipment with time tag CP56Time2a

//Process information in control direction
#define IEC104_C_SC_NA					45	//single command
#define IEC104_C_DC_NA					46 // double command
#define IEC104_C_RC_NA					47	//regulating step command
#define IEC104_C_SE_NA					48	//set point command, normalized value
#define IEC104_C_SE_NB					49	//set point command, scaled value
#define IEC104_C_SE_NC					50	//set point command, short floating point number
#define IEC104_C_BO_NA					51	//bitstring of 32 bits

#define IEC104_C_SC_TA					58	//single command with time tag CP56Time2a
#define IEC104_C_DC_TA					59 // double command with time tag CP56Time2a
#define IEC104_C_RC_TA					60	//regulating step command with time tag CP56Time2a
#define IEC104_C_SE_TA					61	//set point command, normalized value with time tag CP56Time2a
#define IEC104_C_SE_TB					62	//set point command, scaled value with time tag CP56Time2a
#define IEC104_C_SE_TC					63	//set point command, short floating-point number with time tag CP56Time2a
#define IEC104_C_BO_TA					64	//bitstring of 32 bits with time tag CP56Time2a

//System information in monitor direction
#define IEC104_M_EI_NA					70	//end of initialization

//System information in control direction
#define IEC104_C_IC_NA				100	//interrogation command
#define IEC104_C_CI_NA				101	//counter interrogation command
#define IEC104_C_RD_NA				102	//read command
#define IEC104_C_CS_NA				103	//clock synchronization command
#define IEC104_C_RP_NA				105 //reset process command
#define IEC104_C_TS_TA				107 //test command with time tag CP56Time2a

//Parameter in control direction
#define IEC104_P_ME_NA				110 //parameter of measured value, normalized value
#define IEC104_P_ME_NB				111 //parameter of measured value, scaled value
#define IEC104_P_ME_NC				112 //parameter of measured value, short floating-point number
#define IEC104_P_NC_NA				113 //parameter activation

//
#define IEC104_F_FR_NA				120 //file ready
#define IEC104_F_SR_NA				121 //section ready
#define IEC104_F_SC_NA				122 //call directory, select file, call file, call section
#define IEC104_F_LS_NA				123 //last section, last segment
#define IEC104_F_AF_NA				124 //ack file, ack section
#define IEC104_F_SG_NA				125 //segment
#define IEC104_F_DR_NA				126 //directory

#define IEC104_COT_PER_CYC					1
#define IEC104_COT_BACKSCAN					2
#define IEC104_COT_SPONT					3
#define IEC104_COT_INIT						4
#define IEC104_COT_REQ						5
#define IEC104_COT_ACT						6
#define IEC104_COT_ACT_CON					7
#define IEC104_COT_DEACT					8
#define IEC104_COT_DEACT_CON				9
#define IEC104_COT_ACT_TERM					10
#define IEC104_COT_FILE_TRANS					13


#define IEC104_COT_RESP_CALLALL				20
#define IEC104_COT_RESP_GRP1				21
#define IEC104_COT_RESP_GRP2				22
#define IEC104_COT_RESP_GRP3				23
#define IEC104_COT_RESP_GRP4				24
#define IEC104_COT_RESP_GRP5				25
#define IEC104_COT_RESP_GRP6				26
#define IEC104_COT_RESP_GRP7				27
#define IEC104_COT_RESP_GRP8				28
#define IEC104_COT_RESP_GRP9				29
#define IEC104_COT_RESP_GRP10				30
#define IEC104_COT_RESP_GRP11				31
#define IEC104_COT_RESP_GRP12				32
#define IEC104_COT_RESP_GRP13				33
#define IEC104_COT_RESP_GRP14				34
#define IEC104_COT_RESP_GRP15				35
#define IEC104_COT_RESP_GRP16				36

#define IEC104_COT_RESP_CO					37
#define IEC104_COT_RESP_CO_GRP1			38
#define IEC104_COT_RESP_CO_GRP2			39
#define IEC104_COT_RESP_CO_GRP3			40
#define IEC104_COT_RESP_CO_GRP4			41
#define IEC104_COT_UNKNOWN				45
#define IEC104_COT_TRI_SPONT				46
#define IEC104_COT_UNKONWN_INFOADDR          47

#define IEC104_STD_T0   30	//Time-out of connection establishment
#define IEC104_STD_T1   15 //Time-out of send or test APDUs
#define IEC104_STD_T2   10	//Time-out for acknowledges in case of no datamessages t2 < t1
#define IEC104_STD_T3   20	//Time-out for sending test frames in case of a long idle time
#define IEC104_EX_T4     -1

//define k and w
#define IEC104_STD_K	12  //Maximum difference receive sequence numberto send state variable
#define IEC104_STD_W	8   //Latest acknowledge after receiving w I format APDUs

#define IEC104_STD_COT_LEN   2 //cause of transfer len
#define IEC104_STD_COA_LEN   2 //common address len
#define IEC104_STD_IAD_LEN   3 //infmation address len

#define IEC104_FRAME_UNKNOWN			-1
#define IEC104_FRAME_I					1
#define IEC104_FRAME_S					2
#define IEC104_FRAME_U_START_ACT		3
#define IEC104_FRAME_U_START_CON		4
#define IEC104_FRAME_U_STOP_ACT			5
#define IEC104_FRAME_U_STOP_CON			6
#define IEC104_FRAME_U_TEST_ACT			7
#define IEC104_FRAME_U_TEST_CON			8

#define IEC104_APCI_SIZE         6
#define IEC104_MAX_ASDU_SIZE     249
#define IEC104_MIN_ASDU_SIZE	 9
#define IEC104_MAX_APDU_SIZE     255
#endif 