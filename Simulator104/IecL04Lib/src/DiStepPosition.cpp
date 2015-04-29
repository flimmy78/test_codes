#include <sstream>
#include "DiStepPosition.h"
#include "ParaDef.h"
#include "RunParams.h"


DiStepPosition::DiStepPosition(const DataStringBlock& dataTable)
:CAbstractData(dataTable),
m_data(dataTable.size())
{
	unsigned long	addr=0;
	std::string		valueString;
	for(int i=0; i < dataTable.size(); ++i)
	{
		addr = dataTable[i].first;
		valueString = dataTable[i].second;
		this->setValue(addr, valueString);
	}
}
DiStepPosition::~DiStepPosition()
{
	m_data.clear();
}

void DiStepPosition::setValue(unsigned long addr,std::string valueString)
{
	unsigned long index = addr - m_startAddr;
	RunParams valueConfig(valueString);
	if(valueConfig.isSet(PARA_VALUE_VALUE))
	{
		m_data[index].Value = valueConfig.getInteger(PARA_VALUE_VALUE);
	}
	if(valueConfig.isSet(PARA_VALUE_TRANSIENT))
	{
		m_data[index].Transient = valueConfig.getInteger(PARA_VALUE_TRANSIENT);
	}
}

std::string DiStepPosition::getDataTypeName() const
{
	return "DiStepPosition";
}
std::vector<std::string> DiStepPosition::getStringValueTalbe() const
{
	std::vector<std::string> valueTable(m_data.size());
	for(int index=0; index< m_data.size(); ++index)
	{
		std:: ostringstream valueStream;

		valueStream<<PARA_PKEY<<"="<<m_startAddr + index<<",";
		valueStream<<PARA_ADDR<<"="<<m_startAddr + index<<",";
		valueStream<<PARA_TYPE<<"="<<TYPE_STEP_POSITION<<",";
		valueStream<<PARA_VALUE_VALUE<<"="<<static_cast<int>(m_data[index].Value)<<",";
		valueStream<<PARA_VALUE_TRANSIENT<<"="<<static_cast<int>(m_data[index].Transient);
		
		valueTable[index] = valueStream.str();
	}
	return valueTable;
}


std::string DiStepPosition::getStringValueByAddress(unsigned long addr) const
{
	assert(addr >= m_startAddr && addr <= m_endAddr);
	int index = addr - m_startAddr;
	std:: ostringstream valueStream;

	valueStream<<PARA_PKEY<<"="<<addr<<",";
	valueStream<<PARA_ADDR<<"="<<addr<<",";
	valueStream<<PARA_TYPE<<"="<<TYPE_STEP_POSITION<<",";
	valueStream<<PARA_VALUE_VALUE<<"="<<static_cast<int>(m_data[index].Value)<<",";
	valueStream<<PARA_VALUE_TRANSIENT<<"="<<static_cast<int>(m_data[index].Transient);
	
	return valueStream.str();
}