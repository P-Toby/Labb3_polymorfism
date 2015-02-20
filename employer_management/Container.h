#ifndef CONTAINER_H
#define CONTAINER_H

#include <string>
#include "Employee.h"

//This class holds all of the employees in an array

class Container
{
private:
	Employee* empArr = nullptr;
	int numOfEmployees = 0;

public:
	Container();
	void addEmployee(Employee& employeeToAdd);
};

#endif