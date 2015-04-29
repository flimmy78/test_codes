#ifndef __IEC104_PRIORITY_TABLE_H
#define __IEC104_PRIORITY_TABLE_H
#include<map>

struct PrioryKey
{
	int TI;
	int COT;
};
typedef std::map<PrioryKey,int> PriorityMap 
class PrioryTable
{
public:
	void	initTableByConfigFile(const std::string &fileName);
	int		getSendPriority(const Iec104Asdu& asdu);
	int		getRecvPriority(const Iec104Asdu& asdu);
private:
	PriorityMap	m_sendPrioryMap;
	PriorityMap	m_recvPrioryMap;
};

int	PrioryTable::getSendPriority(const Iec104Asdu& asdu)
{
	PrioryKey key;
	key.TI = apdu.getTi();
	key.COT = apdu.getCot();
	
	int rtn = DEFAULT_PRIORITY;
	PriorityMap::iterator itr = m_sendPrioryMap.begin();
	if((itr = m_sendPriorityMap.find(key)) != m_sendPriorityMap.end())
	{
		rtn = itr->second;
	}
	return rtn;

}
int	PrioryTable::getRecvPriority(const Iec104Asdu& asdu)
{
	PrioryKey key;
	key.TI = apdu.getTi();
	key.COT = apdu.getCot();
	
	int rtn = DEFAULT_PRIORITY;
	PriorityMap::iterator itr = m_recvPrioryMap.begin();
	if((itr = m_recvPriorityMap.find(key)) != m_recvPriorityMap.end())
	{
		rtn = itr->second;
	}
	return rtn;
}


#endif