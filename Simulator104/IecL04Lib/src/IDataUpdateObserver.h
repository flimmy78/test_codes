#ifndef IDATA_UPDATE_OBSERVER_H__
#define IDATA_UPDATE_OBSERVER_H__

class IDataUpdateObserver
{
public:
	virtual  ~IDataUpdateObserver(){};
	virtual void notityDataUpdate(unsigned long resourceKey)=0;
};

#endif