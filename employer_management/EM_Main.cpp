#include <iostream>
#include <string>
#include "Teacher.h"
#include "Assistant.h"
#include "TA.h"
#include "Employee.h"
#include "Functions.h"
#include <crtdbg.h>
#include "Container.h"

using namespace std;

int main()
{
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

	//Employee** empArr; //Make initial array pointer
	InputContainer userInput;
	Container EmpList;

	int quit = 0;
	int choice = 0; //Variable that is altered by user to decide which function to run.

	while (quit != 1)
	{

		choice = menu();

		if (choice == 0)
		{
			//Quit
			quit = 1;
		}
		else if (choice == 1)
		{

			Employee* newTeacher = createTeacher();
			EmpList.addEmployee(newTeacher);

		}
		else if (choice == 2)
		{
			Employee* newAssistant = createAssistant();
			EmpList.addEmployee(newAssistant);
		}
		else if (choice == 3)
		{
			Employee* newTA = createTA();
			EmpList.addEmployee(newTA);
		}
		else if (choice == 4)
		{
			cout << "The following Employees are in the database: " << endl;
			cout << EmpList.toString() << endl;

		}

	}

	system("pause");

	return 0;
}
