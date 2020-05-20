#include "Demo.h"
#include "Ring.h"
#include "../General Files/PointClass.h"
#include <exception>
#include <iostream>

using namespace std;

void DemoRing()
{
	Ring* ring1;
	try
	{
		ring1 = new Ring(12, 13, -5, -2);
	}
	catch (exception e)
	{
		cout << e.what() << endl;
	}

	Ring* ring2;
	try
	{
		Point* center = new Point(2.5, 6.1);
		ring2 = new Ring(-1, 2, center);
	}
	catch (exception e)
	{
		cout << e.what() << endl;
	}

	Ring* ring3 = new Ring(12, 5, 4.5, 6.6);
	cout << "Ring area: " << ring3->GetAria() << endl;
	cout << "Ring count: " << Ring::GetAllRingsCount()  << endl;
	Ring* ring4 = new Ring(12, 5, 4.5, 6.6);
	cout << "Ring count: " << Ring::GetAllRingsCount() << endl;
	Ring* ring5 = new Ring(12, 5, 4.5, 6.6);
	cout << "Ring count: " << Ring::GetAllRingsCount() << endl;

	Ring* ring = new Ring(10.0, 5.0, new Point(25.0, 25.0));
	cout << "Ring count: " << Ring::GetAllRingsCount() << endl;
	delete ring;
	cout << "Ring count: " << Ring::GetAllRingsCount() << endl;
}