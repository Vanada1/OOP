#include "Rectangle.h"
#include <exception>
#include <iostream>

using namespace std;

void DemoRecangleWithPoint()
{
	const int COUNT = 5;
	Rectangle* rectangles[COUNT];
	rectangles[0] = CreateRectangle(0.0, 0.0, 8.1, 25.23);
	rectangles[1] = CreateRectangle(1.0, 21.0, 81.0, 223.8);
	rectangles[2] = CreateRectangle(2.0, 45.0, 25.45, 4.3);
	rectangles[3] = CreateRectangle(3.0, 35.0, 99.2, 3.2);
	rectangles[4] = CreateRectangle(4.0, 100.0, 853.205, 70.23);

	for (int i = 0; i < COUNT; i++)
	{
		cout << "X = " << rectangles[i]->Center->X
			<< "\tY = " << rectangles[i]->Center->Y
			<< "\tLength = " << rectangles[i]->Length
			<< "\tWidth = " << rectangles[i]->Width << endl;
	}

	double Xcenter = 0.0;
	double Ycenter = 0.0;
	for (int i = 0; i < COUNT; i++)
	{
		Xcenter += rectangles[i]->Center->X;
		Ycenter += rectangles[i]->Center->Y;
	}

	Xcenter /= COUNT;
	Ycenter /= COUNT;
	cout << "Xcenter = " << Xcenter << "\tYcenter = " << Ycenter << endl;
	for (int i = 0; i < COUNT; i++)
	{
		delete rectangles[i]->Center;
		delete rectangles[i];
	}
}

Rectangle* CreateRectangle(double x, double y, double length, double width)
{
	Rectangle* newRectangle = new Rectangle;
	SetCenter(newRectangle, x, y);
	SetLength(newRectangle, length);
	SetWidth(newRectangle, width);
	return newRectangle;
}

void SetCenter(Rectangle* rectangle, double x, double y)
{
	SetX(rectangle->Center, x);
	SetY(rectangle->Center, y);
}

void SetLength(Rectangle* rectangle, double length)
{
	if (length < 0)
	{
		throw exception("Lengtth cannot be less than zero");
	}
	rectangle->Length = length;
}

void SetWidth(Rectangle* rectangle, double width)
{
	if (width < 0)
	{
		throw exception("Width cannot be less then zero");
	}
	rectangle->Width = width;
}