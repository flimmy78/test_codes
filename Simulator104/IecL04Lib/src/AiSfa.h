#ifndef AI_SFA_H___
#define AI_SFA_H___
#include "AbstractIecData.h"
class AiSfa:public CAbstractData
{
public:
	explicit AiSfa(const DataStringBlock& dataTable);
	~AiSfa();
	virtual void	setValue(unsigned long addr,std::string valueString);
	virtual std::string getDataTypeName() const;
	virtual std::vector<std::string> getStringValueTalbe() const;
	virtual std::string getStringValueByAddress(unsigned long addr) const;
private:
	std::vector<SIecSfaQds> m_data;
};

#endif