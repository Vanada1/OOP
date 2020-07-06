#include "ReadPositiveNumber.h"
#include "../General Files/Read.h"

#include <iostream>

using namespace std;

int ReadPositiveNumber()
{
	int count;
	while (true)
	{
		cout << "Enter number authors: ";
		count = Read<int>();
		cout << endl;
		if (count <= 0)
		{
			cout << "Number pages cannot be negative or equal to 0"
				<< ", try again" << endl;
		}
		else
		{
			break;
		}
	}
	return count;
}