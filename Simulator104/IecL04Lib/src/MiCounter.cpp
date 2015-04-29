#include <sstream>
#include "MiCounter.h"
#include "ParaDef.h"
#include "RunParams.h"


MiCounter::MiCounter(const DataStringBlock& dataTable)
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

MiCounter::~MiCounter()
{
	m_data.clear();
}

void	MiCounter::setValue(unsigned long addr,std::string valueString)
{
	unsigned long index = addr - m_startAddr;
	RunParams valueConfig(valueString);
	if(valueConfig.isSet(PARA_VALUE_COUNTER))
	{
		m_data[index].BCR.CounterReading = valueConfig.getInteger(PARA_VALUE_COUNTER);
	}

	if(valueConfig.isSet(PARA_VALUE_SQ))
	{
		m_data[index].BCR.SequenceNotation.SQ = valueConfig.getInteger(PARA_VALUE_SQ);
	}
	if(valueConfig.isSet(PARA_VALUE_CY))
	{
		m_data[index].BCR.SequenceNotation.CY = valueConfig.getInteger(PARA_VALUE_CY);
	}
	if(valueConfig.isSet(PARA_VALUE_CA))
	{
		m_data[index].BCR.SequenceNotation.CY = valueConfig.getInteger(PARA_VALUE_CA);
	}
	if(valueConfig.isSet(PARA_VALUE_IV))
	{
		m_data[index].BCR.SequenceNotation.IV = valueConfig.getInteger(PARA_VALUE_IV);
	}
}

std::string MiCounter::getDataTypeName() const
{
	return "MiCounter";
}

std::vector<std::string> MiCounter::getStringValueTalbe() const
{
	std::vector<std::string> valueTable(m_data.size());
	for(int index=0; index< m_data.size(); ++index)
	{
		std:: ostringstream valueStream;

		valueStream<<PARA_PKEY<<"="<<m_startAddr + index<<",";
		valueStream<<PARA_ADDR<<"="<<m_startAddr + index<<",";
		valueStream<<PARA_TYPE<<"="<<TYPE_MI_COUNTER<<",";
		valueStream<<PARA_VALUE_COUNTER<<"="<<m_data[index].BCR.CounterReading<<",";
		valueStream<<PARA_VALUE_SQ<<"="<<static_cast<int>(m_data[index].BCR.SequenceNotation.SQ)<<",";
		valueStream<<PARA_VALUE_CY<<"="<<static_cast<int>(m_data[index].BCR.SequenceNotation.CY)<<",";
		valueStream<<PARA_VALUE_CA<<"="<<static_cast<int>(m_data[index].BCR.SequenceNotation.CA)<<",";
		valueStream<<PARA_VALUE_IV<<"="<<static_cast<int>(m_data[index].BCR.SequenceNotation.IV);
		
		valueTable[index] = valueStream.str();
	}
	return valueTable;
}

std::string MiCounter::getStringValueByAddress(unsigned long addr) const
{
	assert(addr>=m_startAddr && addr <= m_endAddr);
	int index = addr - m_startAddr;
	std:: ostringstream valueStream;

	valueStream<<PARA_PKEY<<"="<<addr<<",";
	valueStream<<PARA_ADDR<<"="<<addr<<",";
	valueStream<<PARA_TYPE<<"="<<TYPE_MI_COUNTER<<",";
	valueStream<<PARA_VALUE_COUNTER<<"="<<m_data[index].BCR.CounterReading<<",";
	valueStream<<PARA_VALUE_SQ<<"="<<static_cast<int>(m_data[index].BCR.SequenceNotation.SQ)<<",";
	valueStream<<PARA_VALUE_CY<<"="<<static_cast<int>(m_data[index].BCR.SequenceNotation.CY)<<",";
	valueStream<<PARA_VALUE_CA<<"="<<static_cast<int>(m_data[index].BCR.SequenceNotation.CA)<<",";
	valueStream<<PARA_VALUE_IV<<"="<<static_cast<int>(m_data[index].BCR.SequenceNotation.IV);

	return valueStream.str();
}
