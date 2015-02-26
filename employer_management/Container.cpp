#include <string>
#include "Container.h"
#include "Employee.h"

using namespace std;

Container::Container()
{
	empArr = nullptr;
	numOfEmployees = 0;
}

void Container::addEmployee(Employee& employeeToAdd)
{

	if (empArr == nullptr)
	{
		//If the current player has zero matches we will create an initial array that has room for 1 element
		empArr = new Employee[1];
		empArr[0] = employeeToAdd;
		numOfEmployees = numOfEmployees + 1;
	}
	else
	{
		//If we have an initial array
		Employee* tmp = new Employee[numOfEmployees + 1];

		for (int i = 0; i < numOfEmployees; ++i)
		{
			//We now copy all of the elements to the temporary pointer array
			tmp[i] = empArr[i];
		}

		numOfEmployees = numOfEmployees + 1;

		delete[] empArr;

		empArr = tmp;

		empArr[numOfEmployees - 1] = employeeToAdd;

	}

}

string Container::toString()
{
	string result;

	for (int i = 0; i < numOfEmployees; ++i)
	{
		result = result + "\n" + empArr[i].toString() + "\n";
	}

	return result;
}

Container::~Container()
{
	delete[] empArr;
}

int Container::getNumOfEmployees()
{
	return numOfEmployees;
}

Employee* Container::getEmpArr()
{
	return empArr;
}