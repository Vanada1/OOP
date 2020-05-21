#include "GeometricProgram.h"
#include "../Lab4/Ring.h"
#include "../General Files/PointClass.h"
#include "../General Files/RectangleClass.h"
#include "CollisionManager.h"
#include <exception>
#include <iostream>

using namespace std;

const int COUNT = 5;

void GeometricProgram::DemoRing()
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
	cout << "Ring count: " << Ring::GetAllRingsCount() << endl;
	Ring* ring4 = new Ring(12, 5, 4.5, 6.6);
	cout << "Ring count: " << Ring::GetAllRingsCount() << endl;
	Ring* ring5 = new Ring(12, 5, 4.5, 6.6);
	cout << "Ring count: " << Ring::GetAllRingsCount() << endl;

	Ring* ring = new Ring(10.0, 5.0, new Point(25.0, 25.0));
	cout << "Ring count: " << Ring::GetAllRingsCount() << endl;
	delete ring;
	cout << "Ring count: " << Ring::GetAllRingsCount() << endl;
}

void GeometricProgram::DemoCollision()
{
	Rectangle* rectangle1 = new Rectangle(10, 3, 0, 0);
	Rectangle* rectangle2 = new Rectangle(14, 7, 1, 1);
	if (CollisionManager::IsCollision(rectangle1, rectangle2))
	{
		cout << "Cross" << endl;
	}
	else
	{
		cout << "Dont cross" << endl;
	}

	Ring* ring1 = new Ring(12, 10, 0, 0);
	Ring* ring2 = new Ring(12, 10, 5, 5);
	if (CollisionManager::IsCollision(ring1, ring2))
	{
		cout << "Cross" << endl;
	}
	else
	{
		cout << "Dont cross" << endl;
	}
}

void GeometricProgram::DemoRecangleWithPointClass()
{
	Rectangle* rectangles[COUNT];
	rectangles[0] = new Rectangle(0.0, 0.0, 8.1, 25.23);
	rectangles[1] = new Rectangle(1.0, 21.0, 81.0, 223.8);
	rectangles[2] = new Rectangle(2.0, 45.0, 25.45, 4.3);
	rectangles[3] = new Rectangle(3.0, 35.0, 99.2, 3.2);
	rectangles[4] = new Rectangle(4.0, 100.0, 853.205, 70.23);

	for (int i = 0; i < COUNT; i++)
	{
		cout << "X = " << rectangles[i]->GetCenter()->GetX()
			<< "\tY = " << rectangles[i]->GetCenter()->GetY()
			<< "\tLength = " << rectangles[i]->GetLength()
			<< "\tWidth = " << rectangles[i]->GetWidth() << endl;
	}

	double xCenter = 0.0;
	double yCenter = 0.0;
	for (int i = 0; i < COUNT; i++)
	{
		xCenter += rectangles[i]->GetCenter()->GetX();
		yCenter += rectangles[i]->GetCenter()->GetY();
	}

	xCenter /= COUNT;
	yCenter /= COUNT;
	cout << "Xcenter = " << xCenter << "\tYcenter = " << yCenter << endl;
}