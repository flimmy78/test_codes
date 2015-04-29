#ifndef DI_SINGLE_POINT_H__
#define DI_SINGLE_POINT_H__

#include "AbstractIecData.h"

class DiSinglePoint:public CAbstractData
{
public:
	explicit DiSinglePoint(const DataStringBlock& dataTable);
	~DiSinglePoint();
	virtual void	setValue(unsigned long addr,std::string valueString);
	virtual std::string getDataTypeName() const;
	virtual std::vector<std::string> getStringValueTalbe() const;
	virtual std::string getStringValueByAddress(unsigned long addr) const;
private:
	std::vector<SIecSiq> m_data;
};

#endif