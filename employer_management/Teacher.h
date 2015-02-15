#ifndef TEACHER_H
#define TEACHER_H
#include <string>
#include "Employment.h"

class Teacher : public Employment
{
private:
	bool isProgramManager;
	std::string mainSubject;
	int workingHours;
	Teacher();

public:
	Teacher(std::string typeName, bool isManager, int wage, int workingHours, bool isProgramManager, std::string mainSubject);

	//toString function which is used to construct a string for printing
	virtual std::string toString();

	//Getters and setters
	virtual void setIsProgramManager(bool isProgramManager);
	virtual bool getIsProgramManager();

	virtual void setMainSubject(std::string mainSubject);
	virtual std::string getMainSubject();

	virtual void setWorkingHours(int workingHours);
	virtual int getWorkingHours();

	//Get wage type teacher will return 0, representing monthly salary
	virtual int getWageType();

	//Destructor
	virtual ~Teacher();
};

#endif
