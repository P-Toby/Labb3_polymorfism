#include <iostream>
#include <string>
#include "Teacher.h"

using namespace std;

int main()
{
	//TEST OBJECT
	Employment* t = new Teacher("Lektor", true, 40000, 1500, true, "Matte");
	cout << t->toString() << endl;

	system("pause");

	return 0;
}
