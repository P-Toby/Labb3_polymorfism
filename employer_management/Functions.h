#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <string>
#include "Employee.h"

int menu();
bool boolChecker(std::string input);
Employee* createTeacher();
Employee* createAssistant();
Employee* createTA();

struct InputContainer
{
	//This struct is used when the user needs to enter data that needs to
	//be passed on to a constructor

	//General variables
	std::string typeName;
	bool isManager;
	int wage;
	int workingHours; //Shared between Teacher and TA
	std::string boolAsString; //To be converted into true/false

	//Teacher specific
	bool isProgramManager;
	std::string mainSubject;

	//TA specific
	bool canCertify;
	bool hasSuperKey;

	//Assistant specific
	std::string studyProgram;
	int pointsTaken;

	//Employee name and birthyear
	std::string name;
	int birthYear;
};

#endif