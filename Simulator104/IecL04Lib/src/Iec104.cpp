#include"iec104.h"
//#include "Protocol_Handler.h"
void copyUInt16ToBuffer(UInt8* buffer, UInt16 data, int size)
{
	assert(NULL != buffer);
	assert(size > 0 && size <= 2);
	memcpy(buffer,&data,size);
}
void copyInt16ToBuffer(UInt8* buffer, Int16 data, int size)
{
	assert(NULL != buffer);
	assert(size > 0 && size <= 2);
	memcpy(buffer,&data,size);
}
void copyUInt32ToBuffer(UInt8* buffer, UInt32 data, int size)
{
	assert(NULL != buffer);
	assert(size > 0 && size <= 4);
	memcpy(buffer,&data,size);
}
void copyInt32ToBuffer(UInt8* buffer, Int32 data, int size)
{
	assert(NULL != buffer);
	assert(size > 0 && size <= 4);
	memcpy(buffer,&data,size);
}
UInt16 getUInt16FromBuffer(UInt8* buffer,int size)
{
	assert(NULL != buffer);
	assert(size > 0 && size <= 2);
	
	UInt16 rtnData = 0;
	memcpy(buffer,&rtnData,size);
	return rtnData;
}
Int16  getInt16FromBuffer(UInt8* buffer,int size)
{
	assert(NULL != buffer);
	assert(size > 0 && size <= 2);
	Int16 rtnData = 0;
	memcpy(buffer,&rtnData,size);
	return rtnData;
}
UInt32 getUInt32FromBuffer(UInt8* buffer,int size)
{
	assert(NULL != buffer);
	assert(size > 0 && size <= 4);
	UInt32 rtnData = 0;
	memcpy(buffer,&rtnData,size);
	return rtnData;
}
Int32  getInt32FromBuffer(UInt8* buffer,int size)
{
	assert(NULL != buffer);
	assert(size > 0 && size <= 4);
	
	Int32 rtnData = 0;
	memcpy(buffer,&rtnData,size);
	return rtnData;
}


Iec104Apci::Iec104Apci( const Iec104Apci &apci)
{
	//m_apci = new UInt8[IEC104_APCI_SIZE];
	memcpy(this->m_apci, apci.m_apci, IEC104_APCI_SIZE);
}

Iec104Apci::Iec104Apci(const UInt8*const pBuffer)
{
	memcpy(this->m_apci, pBuffer, IEC104_APCI_SIZE);
}

Iec104Apci::~Iec104Apci(void)
{
}

Iec104Apci::Iec104Apci(int iFrType,UInt16 iRxSeq, UInt16 iTxSeq, Int16 len)
{
	m_apci[0] = 0x68;
	switch(iFrType) 
	{
	case IEC104_FRAME_I:
		*(m_apci+1) = static_cast<UInt8>(len);
		*(m_apci+2) = ((iTxSeq % 128) << 1 ) & 0xfe;
		*(m_apci+3) = iTxSeq >> 7;
		*(m_apci+4) = ((iRxSeq % 128) << 1 ) & 0xfe;
		*(m_apci+5) = iRxSeq >> 7;
		break;
	case IEC104_FRAME_S:
		*(m_apci+1) = 4;
		*(m_apci+2) = 1 ;
		*(m_apci+3) = 0 ;
		*(m_apci+4) = ((iRxSeq % 128) << 1 ) & 0xfe;
		*(m_apci+5)= iRxSeq >> 7;
		break;
	case IEC104_FRAME_U_START_ACT:
		*(m_apci+1) = 4 ;
		*(m_apci+2) = 7 ;
		*(m_apci+3) = 0 ;
		*(m_apci+4) = 0 ;
		*(m_apci+5) = 0 ;
		break;
	case IEC104_FRAME_U_START_CON:
		*(m_apci+1) = 4 ;
		*(m_apci+2) = 0xb ;
		*(m_apci+3) = 0 ;
		*(m_apci+4) = 0 ;
		*(m_apci+5) = 0 ;
		break;
	case IEC104_FRAME_U_STOP_ACT:
		*(m_apci+1) = 4;
		*(m_apci+2) = 0x13 ;
		*(m_apci+3) = 0 ;
		*(m_apci+4) = 0 ;
		*(m_apci+5) = 0 ;
		break;
	case IEC104_FRAME_U_STOP_CON:		
		*(m_apci+1) = 4 ;
		*(m_apci+2) = 0x23 ;
		*(m_apci+3) = 0 ;
		*(m_apci+4) = 0 ;
		*(m_apci+5)= 0 ;
		break;
	case IEC104_FRAME_U_TEST_ACT:		
		*(m_apci+1) = 4 ;
		*(m_apci+2) = 0x43 ;
		*(m_apci+3) = 0 ;
		*(m_apci+4) = 0 ;
		*(m_apci+5) = 0 ;
		break;
	case IEC104_FRAME_U_TEST_CON:		
		*(m_apci+1) = 4 ;
		*(m_apci+2) = static_cast<UInt8>(0x83);
		*(m_apci+3) = 0 ;
		*(m_apci+4) = 0 ;
		*(m_apci+5) = 0 ;
		break;
	default:
		throw ;
	}
}

Int16 Iec104Apci::getRxSeq() const
{
	UInt16 ret = -1;
	if(true == this->isValid() && ( IEC104_FRAME_I == this->getFrameType() || IEC104_FRAME_S == this->getFrameType()))
	{
		UInt16 ret = (*(m_apci+4)) + (*(m_apci+5)) *256;
		ret = ret>>1;
	}
	return ret;
}

Int16 Iec104Apci::getTxSeq() const
{
	UInt16 ret = -1;
	if(true == this->isValid() && IEC104_FRAME_I == this->getFrameType())
	{
		ret = (*(m_apci+2)) + (*(m_apci+3)) *256;
		ret = ret>>1;
	}
	return ret;
}

Int16 Iec104Apci::getFrameType() const
{
	Int16 ret = IEC104_FRAME_UNKNOWN;
	if(this->isValid())
	{
		UInt8 temp = (*(m_apci + 2));
		if ((temp &0x01)== 0)
		{
			ret= IEC104_FRAME_I;
		}
		else
		{
			if ((temp&0x03) == 1)
			{
				ret= IEC104_FRAME_S;
			} 
			else if((temp&7) == 7)
			{
				ret= IEC104_FRAME_U_START_ACT;
			}
			else if ((temp&0x0b) == 0x0b)
			{
				ret= IEC104_FRAME_U_START_CON;
			}
			else if ((temp&0x13) == 0x13)
			{
				ret= IEC104_FRAME_U_STOP_ACT;
			}
			else if ((temp&0x23) == 0x23)
			{
				ret= IEC104_FRAME_U_STOP_CON;
			}
			else if ((temp&0x43) == 0x43)
			{
				ret= IEC104_FRAME_U_TEST_ACT;
			}
			else if ((temp&0x83) == 0x83)
			{
				ret= IEC104_FRAME_U_TEST_CON;
			}
		}
	}
	return ret;
}

const UInt8*	Iec104Apci::getApciDataPointer()
{
	return m_apci;
}

void Iec104Apci::setRxSeq(UInt16 iRxSeq)
{
	*(m_apci+4) = ((iRxSeq % 128) << 1 ) & 0xfe;
	*(m_apci+5) = iRxSeq >> 7;
}

void  Iec104Apci::setTxSeq(UInt16 iTxSeq)
{
	*(m_apci+2) = ((iTxSeq % 128) << 1 ) & 0xfe;
	*(m_apci+3) = iTxSeq >> 7;
}
bool Iec104Apci::isValid() const
{
	bool rtn = true;
	if(this->getApciLength()!=IEC104_APCI_SIZE)
	{
		rtn = false;
	}
	if (getFrameType()==0)
	{
		rtn = false;
	}
	return rtn;
}

UInt8 Iec104Apci::getApciLength() const
{
	return IEC104_APCI_SIZE;
}

//------------------------------------------------------------------
Iec104Asdu::Iec104Asdu(const Iec104Asdu &asdu)
:m_asdu(NULL),
 m_currentLength(0),
 m_maxLength(0)
{
	m_asdu = new UInt8[asdu.getAsduLength()];
	memcpy(this->m_asdu, asdu.m_asdu,asdu.getAsduLength());
	m_currentLength = asdu.getAsduLength();
	m_maxLength		= asdu.getAsduLength();
}
Iec104Asdu::Iec104Asdu(const UInt8 * const pData, UInt8 length)
:m_asdu(NULL),
 m_currentLength(0),
 m_maxLength(0)
{
	assert(length >=  IEC104_MIN_ASDU_SIZE && length<= IEC104_MAX_ASDU_SIZE);
	m_asdu = new UInt8[length];
	memcpy(m_asdu, pData, length);
	
	m_currentLength = length;
	m_maxLength		= length;
}
Iec104Asdu::Iec104Asdu(Octet ti,Octet vsq,UInt16 cot,UInt16 coa)
:m_asdu(NULL),
 m_currentLength(0),
 m_maxLength(0)
{
	m_asdu = new UInt8[IEC104_MAX_ASDU_SIZE];
	m_asdu[0] = ti;
	m_asdu[1] = vsq;
	copyUInt16ToBuffer(m_asdu+2,cot,2);
	copyUInt16ToBuffer(m_asdu+4,coa,2);

	m_currentLength = 6,
	m_maxLength = IEC104_MAX_ASDU_SIZE;
}

UInt8 Iec104Asdu::getTi() const
{
	return static_cast<UInt8>(m_asdu[0]); 
}

UInt8 Iec104Asdu::getVsq() const
{
	return static_cast<UInt8>(m_asdu[1]); 
}

UInt16 Iec104Asdu::getCot() const
{
	UInt16 ret=0;
	ret = *(m_asdu+2) + (*(m_asdu+3))*256;
	return ret;
}
UInt16 Iec104Asdu::getCoa() const
{
	UInt16 ret=0;
	ret = *(m_asdu+4) + (*(m_asdu+5))*256;
	return ret;
}

void  Iec104Asdu::setTi(UInt8 ti) 
{
	*(m_asdu+0) =static_cast<UInt8>(ti);
};

void  Iec104Asdu::setCot(UInt16 cot) 
{
	*(m_asdu+2) = static_cast<UInt8>(cot&0xFF);
	*(m_asdu+3) = static_cast<UInt8>(cot>>8);
}
void Iec104Asdu::setCoa(UInt16 coa)
{
	*(m_asdu+4) = static_cast<UInt8>(coa&0xFF);
	*(m_asdu+5) = static_cast<UInt8>(coa>>8);
}

UInt8 Iec104Asdu::getAsduLength() const
{
	return m_currentLength;
}

IecInfoAddr Iec104Asdu::getInfoAddr() const
{
	assert(m_currentLength>=9);
	IecInfoAddr rtn = getUInt32FromBuffer(m_asdu + 6, 3);
	return rtn;
}

const UInt8* Iec104Asdu::getAsduDataPointer()
{
	assert(m_asdu!=NULL);
	return m_asdu;
}

void Iec104Asdu::setInfoAddr(IecInfoAddr &addr)
{
	assert(m_maxLength>=9);
	copyUInt32ToBuffer(m_asdu + 6, addr, 3);
	if(m_currentLength < 9)
	{
		m_currentLength = 9;
	}
}

void Iec104Asdu::appendData(const UInt8* const buffer,int length)
{
	assert(NULL != buffer);
	if(m_currentLength + length > m_maxLength)
	{
		throw Iec104Exception("cannt store data in this asdu");
	}
	else
	{
		memcpy(m_asdu + m_currentLength, buffer,length);
		m_currentLength += length;
	}
}

//--------------------------------------------------------------------------


Iec104Apdu::Iec104Apdu(const Iec104Apci &apci,const Iec104Asdu &asdu)
:Iec104Apci(apci),
Iec104Asdu(asdu)
{
}

Iec104Apdu::Iec104Apdu(const UInt8 *buffer,int length)
:Iec104Apci(buffer),
Iec104Asdu(buffer+IEC104_APCI_SIZE, length-IEC104_APCI_SIZE)
{
}
	
UInt8*	Iec104Apdu::getApduDataPointer()
{
	UInt8 *buffer = new UInt8[this->getApciLength()+this->getAsduLength()];
	memcpy(buffer,this->getApciDataPointer(),this->getApciLength());
	memcpy(buffer,this->getAsduDataPointer(),this->getAsduLength());
	return buffer;
}

UInt8	Iec104Apdu::getApduLength()
{
	return this->getApciLength()+this->getAsduLength();
}
