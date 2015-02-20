#include <iostream>
#include <string>
#include "Teacher.h"
#include "Assistant.h"
#include "TA.h"
#include "Employee.h"
#include "Functions.h"
#include "Container.h"

using namespace std;

int main()
{
	//TEST OBJECT
	/*
	Employment* empl = new Teacher("Adjunkt", false, 35000, 1600, true, "Programmering");

	Employee* e = new Employee("Georg Boole", 1820, empl);

	cout << e->toString() << endl;
	*/

	Employee* empArr = nullptr;
	InputContainer userInput;

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
			Employee* test = createTeacher();

			cout << endl << test->toString() << endl;
		}
		else if (choice == 2)
		{

		}
		else if (choice == 3)
		{


		}
		else if (choice == 4)
		{

		}

	}

	system("pause");

	return 0;
}
