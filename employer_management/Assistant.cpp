#include "Assistant.h"
#include <string>

using namespace std;

Assistant::Assistant(string typeName, bool isManager, int wage, string studyProgram, int pointsTaken)
	: Employment(typeName, isManager, wage)
{
	this->studyProgram = studyProgram;
	this->pointsTaken = pointsTaken;
}

string Assistant::toString()
{
	string result;

	result = "\nProgram: " + studyProgram + "\nPoints taken: " + to_string(pointsTaken);

	return Employment::toString() + result;
}

void Assistant::setStudyProgram(string studyProgram)
{
	this->studyProgram = studyProgram;
}

string Assistant::getStudyProgram()
{
	return studyProgram;
}

void Assistant::setPointsTaken(int pointsTaken)
{
	this->pointsTaken = pointsTaken;
}

int Assistant::getPointsTaken()
{
	return pointsTaken;
}

int Assistant::getWageType()
{
	//Assistants get an hourly salary so this function returns 1
	return 1;
}

Assistant::~Assistant()
{
	//Does nothing
}