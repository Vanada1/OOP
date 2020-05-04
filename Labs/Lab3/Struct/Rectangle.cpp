#include "Rectangle.h"
#include <exception>
#include <iostream>

using namespace std;

Rectangle* CreateRectangle(double x, double y, double length, double width)
{
	Rectangle* newRectangle = new Rectangle;
	newRectangle->Center = CreatePoint(x, y);
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