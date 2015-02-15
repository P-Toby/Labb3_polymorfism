#ifndef EMPLOYMENT_H
#define EMPLOYMENT_H

#include <string>

class Employment
{
private:
	std::string typeName;
	bool isManager;
	int wage;
	Employment(); //Default constructor is not used

public:
	Employment(std::string typeName, bool isManager, int wage);

	//toString function which is used to construct a string for printing
	virtual std::string toString();

	//Gets the wageType
	virtual int getWageType() = 0; //Returns 0 or 1 depending on subclass

	//Getter/Setter for wage
	virtual void setWage(int wage);
	virtual int getWage();

	//Getter/Setter for typeName
	virtual void setTypeName(std::string typeName);
	virtual std::string getTypeName();

	//Getter/Setter for isManager bool
	virtual void setIsManager(bool isManager);
	virtual bool getIsManager();

	//Destructor
	virtual ~Employment();
};

#endif
