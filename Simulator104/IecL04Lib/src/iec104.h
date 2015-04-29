#ifndef _IEC104_H__
#define _IEC104_H__

#include <assert.h>
#include"DataDef.h"
#include "Btype.h"

typedef ULong IecInfoAddr;

void copyUInt16ToBuffer(UInt8* buffer, UInt16 data, int size);

void copyInt16ToBuffer(UInt8* buffer, Int16 data, int size);

void copyUInt32ToBuffer(UInt8* buffer, UInt32 data, int size);

void copyInt32ToBuffer(UInt8* buffer, Int32 data, int size);

UInt16 getUInt16FromBuffer(UInt8* buffer,int size);

Int16  getInt16FromBuffer(UInt8* buffer,int size);

UInt32 getUInt32FromBuffer(UInt8* buffer,int size);

Int32  getInt32FromBuffer(UInt8* buffer,int size);


//=============================================================================================

class Iec104Exception: public std::exception
{
public:
	Iec104Exception(const char *const& str)
		:exception(str)
	{
	};
};

class Iec104Apci
{
private:
	UINT8 m_apci[IEC104_APCI_SIZE];
public:
	Iec104Apci(const Iec104Apci &apci);
	Iec104Apci(const UINT8* const pData);
	~Iec104Apci(void);
	Iec104Apci(Int32 iFrType,UInt16 iRxSeq=0, UInt16 iTxSeq=0, Int16 Len=4 );
	
	Int16	getRxSeq() const;
	Int16	getTxSeq() const;	
	Int16	getFrameType() const;
	UInt8	getApciLength() const;
	const UInt8*	getApciDataPointer();

	bool	isValid()	const;

	void	setRxSeq(UInt16 iRxSeq);
	void	setTxSeq(UInt16 iTxSeq);
	
};

class Iec104Asdu
{
private:
	UInt8 *m_asdu;
	UInt8  m_currentLength;
	UInt8  m_maxLength;
public:
	Iec104Asdu(const Iec104Asdu &asdu);
	Iec104Asdu(const UInt8 * const pData,UInt8 length);
	Iec104Asdu(UInt8 ti,UInt8 vsq=1,UInt16 cot=1,UInt16 coa=1);
	UInt8	getTi()		const;
	UInt8	getVsq()	const;
	UInt16	getCot()	const;	
	UInt16	getCoa()	const;
	UInt8	getAsduLength() const;
	IecInfoAddr getInfoAddr() const;
	const UInt8*	getAsduDataPointer();

	void	setTi(UInt8 ti);
	void	setCot(UInt16 cot);
	void	setCoa(UInt16 coa);
	void	setInfoAddr(IecInfoAddr &addr);
	void	appendData(const UInt8* const buffer,int length);
};


class Iec104Apdu: public Iec104Apci,public Iec104Asdu
{
public:
	Iec104Apdu(const Iec104Apdu &apdu);
	Iec104Apdu(const Iec104Apci &apci,const Iec104Asdu &asdu);
	Iec104Apdu(const UInt8 *buffer,int length);
	UInt8*	getApduDataPointer();
	UInt8	getApduLength();
};


#endif