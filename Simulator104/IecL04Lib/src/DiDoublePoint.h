#ifndef DI_DOUBLE_POINT_H__
#define DI_DOUBLE_POINT_H__

#include "AbstractIecData.h"

class DiDoublePoint: public CAbstractData
{
public:
	explicit DiDoublePoint(const DataStringBlock& dataTable);
	~DiDoublePoint();
	virtual void	setValue(unsigned long addr,std::string valueString);
	virtual std::string getDataTypeName() const;
	virtual std::vector<std::string> getStringValueTalbe() const;
	virtual std::string getStringValueByAddress(unsigned long addr) const;
private:
	std::vector<SIecDiq> m_data;

};

#endif