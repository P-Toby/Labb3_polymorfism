#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
#include "Employment.h"

class Employee
{
private:
	std::string name;
	int birthYear;
	Employment* position;
	

public:
	Employee();
	Employee(std::string name, int birthYear, Employment* position);

	//toString function which is used to construct a string for printing
	virtual std::string toString();

	//Get/Set
	virtual void setName(std::string name);
	virtual std::string getName();

	virtual void setBirthYear(int birthYear);
	virtual int getBirthYear();

	virtual void setPosition(Employment* position);
	virtual Employment* getPosition();

	//Destructor
	virtual ~Employee();
};

#endif
