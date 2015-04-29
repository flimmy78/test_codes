#include "AbstractIecData.h"
#include "RunParams.h"
#include "ParaDef.h"


CAbstractData::CAbstractData(const DataStringBlock& dataTable)
{
	this->verify(dataTable);
	m_startAddr = dataTable[0].first;
	m_endAddr	= dataTable[dataTable.size() -1].first;
}

CAbstractData::~CAbstractData()
{
}
	

void	CAbstractData::setValue(std::string valueString)
{
	RunParams config(valueString);
	if(config.isSet(PARA_ADDR))
	{
		unsigned long addr = config.getUInt32(PARA_ADDR);
		this->setValue(addr, valueString);
	}
	else
	{
		throw Iec104Exception("no address configed");
	}
}

unsigned long CAbstractData::getDataNumber() const
{
	return m_endAddr - m_startAddr + 1;
}

bool  CAbstractData::isAddrInRange(unsigned long addr) const
{
	return (addr <= m_endAddr) && (addr >= m_startAddr);
}

void CAbstractData::verify(const DataStringBlock& dataTable)
{
		//address continu
}