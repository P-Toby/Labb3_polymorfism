#include "Teacher.h"
#include <string>

using namespace std;

Teacher::Teacher(string typeName, bool isManager, int wage, int workingHours, bool isProgramManager, string mainSubject)
	: Employment(typeName, isManager, wage)
{
	this->workingHours = workingHours;
	this->isProgramManager = isProgramManager;
	this->mainSubject = mainSubject;
}

string Teacher::toString()
{
	string result;

	result = "\nWorking hours: " + to_string(workingHours) + " / year" + "\nMain subject: " + mainSubject;

	if (isProgramManager == true)
	{
		result = result + "\nProgram manager: Yes";
	}
	else
	{
		result = result + "\nProgram manager: No";
	}

	return Employment::toString() + result;
}

void Teacher::setIsProgramManager(bool isProgramManager)
{
	this->isProgramManager = isProgramManager;
}

bool Teacher::getIsProgramManager()
{
	return isProgramManager;
}

void Teacher::setMainSubject(string mainSubject)
{
	this->mainSubject = mainSubject;
}

string Teacher::getMainSubject()
{
	return mainSubject;
}

void Teacher::setWorkingHours(int workingHours)
{
	this->workingHours = workingHours;
}

int Teacher::getWorkingHours()
{
	return workingHours;
}

int Teacher::getWageType()
{
	//Teachers get a monthly salary so we return 0 to indicate this
	return 0;
}

Teacher::~Teacher()
{
	//Does nothing
}