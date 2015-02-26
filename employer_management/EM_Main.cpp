#include <iostream>
#include <string>
#include "Teacher.h"
#include "Assistant.h"
#include "TA.h"
#include "Employee.h"
#include "Functions.h"
#include "Container.h"
#include <crtdbg.h>

using namespace std;

int main()
{
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

	Employee* empArr = nullptr;
	InputContainer userInput;
	Container EmployeeList;

	int quit = 0;
	int choice = 0; //Variable that is altered by user to decide which function to run.

	while (quit != 1)
	{

		choice = menu();

		if (choice == 0)
		{
			//Quit
			//FIX MEMLEAKS

			quit = 1;
		}
		else if (choice == 1)
		{
			Employee* newTeacher = createTeacher();
			EmployeeList.addEmployee(*newTeacher); //Add the new Teacher to the list of employees
			
			//delete newTeacher;
		}
		else if (choice == 2)
		{
			Employee* newAssistant = createAssistant();
			EmployeeList.addEmployee(*newAssistant); 
		}
		else if (choice == 3)
		{
			Employee* newTA = createTA();
			EmployeeList.addEmployee(*newTA);
		}
		else if (choice == 4)
		{
			cout << "The following Employees are in the database: " << endl;
			cout << EmployeeList.toString();
		}

	}

	system("pause");

	return 0;
}
