#ifndef ASSISTANT_H
#define ASSISTANT_H
#include <string>
#include "Employment.h"

class Assistant : public Employment
{
private:
	std::string studyProgram;
	int pointsTaken;
	Assistant();

public:
	Assistant(std::string typeName, bool isManager, int wage, std::string studyProgram, int pointsTaken);

	//toString function which is used to construct a string for printing
	virtual std::string toString();

	//Getters and setters
	virtual void setStudyProgram(std::string studyProgram);
	virtual std::string getStudyProgram();

	virtual void setPointsTaken(int pointsTaken);
	virtual int getPointsTaken();

	//Get wage type teacher will return 0, representing monthly salary
	virtual int getWageType();

	//Destructor
	virtual ~Assistant();
};

#endif