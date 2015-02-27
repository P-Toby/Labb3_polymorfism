#include "Functions.h"
#include <string>
#include <iostream>
#include "Employee.h"
#include "Employment.h"
#include "Teacher.h"
#include "Assistant.h"
#include "TA.h"

using namespace std;

int menu()
{
	//A basic menu system that we can use to access various functions
	int inputId = 0;
	int input = 0;
	int isValid = 0;

	while (isValid != 1)
	{
		cout << "\nMain menu:" << endl;
		cout << "\n0. Quit" << "\n1. New Teacher" << "\n2. New Assistant" << "\n3. New TA-staff" << "\n4. Show all staff" << endl;

		printf("\nChoose which function to run: ");
		cin >> inputId;

		if (inputId >= 0 && inputId <= 4)
		{
			isValid = 1;
		}
		else
		{
			cout << "\nInvalid input\n";
		}
	}

	input = inputId;

	return input;
}

bool boolChecker(string input)
{
	//Returns true/false depending on input

	if (input == "y")
	{
		return true;
	}
	else
	{
		return false;
	}

}

Employee* createTeacher()
{
	InputContainer userInput;
	cin.get();
	//Employee specific
	cout << "Name: ";
	getline(cin, userInput.name);
	cout << "Birthyear: ";
	cin >> userInput.birthYear;

	cin.get();
	//Employment specific
	cout << "Employment type: ";
	getline(cin, userInput.typeName);
	cout << "Salary: ";
	cin >> userInput.wage;
	cout << "Manager (y/n): ";
	cin >> userInput.boolAsString;
	userInput.isManager = boolChecker(userInput.boolAsString);
	//Teacher specific
	cout << "Working hours: ";
	cin >> userInput.workingHours;
	cout << "Main subject: ";
	cin >> userInput.mainSubject;
	cout << "Program Manager (y/n): ";
	cin >> userInput.boolAsString;
	userInput.isProgramManager = boolChecker(userInput.boolAsString);

	Employment* empl = new Teacher(userInput.typeName, userInput.isManager, userInput.wage, userInput.workingHours, userInput.isProgramManager, userInput.mainSubject);

	Employee* e = new Employee(userInput.name, userInput.birthYear, empl);

	return e;
}

Employee* createAssistant()
{
	InputContainer userInput;
	cin.get();
	//Employee specific
	cout << "Name: ";
	getline(cin, userInput.name);
	cout << "Birthyear: ";
	cin >> userInput.birthYear;

	cin.get();
	//Employment specific
	cout << "Employment type: ";
	getline(cin, userInput.typeName);
	cout << "Salary: ";
	cin >> userInput.wage;
	cout << "Manager (y/n): ";
	cin >> userInput.boolAsString;
	userInput.isManager = boolChecker(userInput.boolAsString);
	//Assistant specific
	cout << "Program: ";
	cin >> userInput.studyProgram;
	cout << "Points taken: ";
	cin >> userInput.pointsTaken;

	Employment* empl = new Assistant(userInput.typeName, userInput.isManager, userInput.wage, userInput.studyProgram, userInput.pointsTaken);

	Employee* e = new Employee(userInput.name, userInput.birthYear, empl);

	return e;
}

Employee* createTA()
{
	InputContainer userInput;
	cin.get();
	//Employee specific
	cout << "Name: ";
	getline(cin, userInput.name);
	cout << "Birthyear: ";
	cin >> userInput.birthYear;

	cin.get();
	//Employment specific
	cout << "Employment type: ";
	getline(cin, userInput.typeName);
	cout << "Salary: ";
	cin >> userInput.wage;
	cout << "Manager (y/n): ";
	cin >> userInput.boolAsString;
	userInput.isManager = boolChecker(userInput.boolAsString);
	//TA specific
	cout << "Working hours: ";
	cin >> userInput.workingHours;
	cout << "Can certify (y/n): ";
	cin >> userInput.boolAsString;
	userInput.canCertify = boolChecker(userInput.boolAsString);
	cout << "Superkey (y/n): ";
	cin >> userInput.boolAsString;
	userInput.hasSuperKey = boolChecker(userInput.boolAsString);

	Employment* empl = new TA(userInput.typeName, userInput.isManager, userInput.wage, userInput.workingHours, userInput.canCertify, userInput.hasSuperKey);

	Employee* e = new Employee(userInput.name, userInput.birthYear, empl);

	return e;
}