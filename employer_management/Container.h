#ifndef CONTAINER_H
#define CONTAINER_H

#include <string>
#include "Employee.h"

//This class holds all of the employees in an array

class Container
{
private:
	Employee* empArr;
	int numOfEmployees;

public:
	Container();
	~Container();
	void addEmployee(Employee& employeeToAdd);
	std::string toString();
};

#endif