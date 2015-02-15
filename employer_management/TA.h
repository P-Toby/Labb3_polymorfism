#ifndef TA_H
#define TA_H
#include <string>
#include "Employment.h"

class TA : public Employment
{
private:
	bool canCertify;
	bool hasSuperKey;
	int workingHours;
	TA();

public:
	TA(std::string typeName, bool isManager, int wage, int workingHours, bool canCertify, bool hasSuperkey);

	//toString function which is used to construct a string for printing
	virtual std::string toString();

	//Getters and setters
	virtual void setCanCertify(bool canCertify);
	virtual bool getCanCertify();

	virtual void setHasSuperKey(bool hasSuperKey);
	virtual bool getHasSuperKey();

	virtual void setWorkingHours(int workingHours);
	virtual int getWorkingHours();

	//Get wage type teacher will return 0, representing monthly salary
	virtual int getWageType();

	//Destructor
	virtual ~TA();
};

#endif
