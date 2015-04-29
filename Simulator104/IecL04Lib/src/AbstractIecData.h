#ifndef CAbstractData_h__
#define CAbstractData_h__

#include <vector>
#include <map>
#include "Iec104.h"

typedef std::vector<std::pair<unsigned long,std::string> > DataStringBlock;

class CAbstractData
{
protected:
	unsigned long m_startAddr;
	unsigned long m_endAddr;
public:
	explicit	CAbstractData(const DataStringBlock& dataTable);
	virtual		~CAbstractData();
	void		setValue(std::string valueString);

	unsigned long	getDataNumber() const;
	bool			isAddrInRange(unsigned long addr) const;

	void verify(const DataStringBlock& dataTable);
public:
	virtual void	setValue(unsigned long addr,std::string valueString)=0;
	virtual std::string getDataTypeName() const = 0;
	virtual std::vector<std::string> getStringValueTalbe() const =0;
	virtual std::string getStringValueByAddress(unsigned long addr) const = 0 ;
};

#endif
