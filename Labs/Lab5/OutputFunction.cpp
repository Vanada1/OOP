#include "OutputFunction.h"
#include <iostream>

using namespace std;

void ShowName(Person& person)
{
	cout << person.GetFistName() << " " << person.GetMiddleName() 
		<< " " << person.GetLastName() << endl;
}