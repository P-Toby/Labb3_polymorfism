#include "TA.h"
#include <string>

using namespace std;

TA::TA(string typeName, bool isManager, int wage, int workingHours, bool CanCertify, bool hasSuperKey)
	: Employment(typeName, isManager, wage)
{
	this->canCertify = CanCertify;
	this->hasSuperKey = hasSuperKey;
	this->workingHours = workingHours;
}

string TA::toString()
{
	string result;

	result = "\nWorking hours: " + to_string(workingHours) + " / year";

	if (canCertify == true)
	{
		result = result + "\nDelegation of authority:  Yes";
	}
	else
	{
		result = result + "\nDelegation of authority:  No";
	}

	if (hasSuperKey == true)
	{
		result = result + "\nHas Master key: Yes";
	}
	else
	{
		result = result + "\nHas Master key: No";
	}

	return Employment::toString() + result;
}

void TA::setCanCertify(bool canCertify)
{
	this->canCertify = canCertify;
}

bool TA::getCanCertify()
{
	return canCertify;
}

void TA::setHasSuperKey(bool hasSuperKey)
{
	this->hasSuperKey = hasSuperKey;
}

bool TA::getHasSuperKey()
{
	return hasSuperKey;
}

void TA::setWorkingHours(int workingHours)
{
	this->workingHours = workingHours;
}

int TA::getWorkingHours()
{
	return workingHours;
}

int TA::getWageType()
{
	//TA get a monthly wage
	return 0;
}

TA::~TA()
{
	//Does nothing
}