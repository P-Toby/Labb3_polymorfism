#include <iostream>
#include <string>
#include "Teacher.h"
#include "Assistant.h"
#include "TA.h"

using namespace std;

int main()
{
	//TEST OBJECT
	Employment* t = new Teacher("Professor", true, 40000, 1500, true, "Math");
	cout << t->toString() << endl << endl;

	Employment* a = new Assistant("Lab Assistant", false, 100, "Game And Software Engineering", 98);
	cout << a->toString() << endl << endl;

	Employment* ta = new TA("Janitor", false, 25000, 1700, false, true);
	cout << ta->toString() << endl << endl;

	system("pause");

	return 0;
}
