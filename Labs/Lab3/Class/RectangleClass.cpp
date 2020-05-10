#include "RectangleClass.h"
#include <exception>

using namespace std;

Rectangle::Rectangle(double x, double y, double length, double width)
{
	this->_center = new Point(x, y);
	this->SetLength(length);
	this->SetWidth(width);
}

Rectangle::~Rectangle()
{
	delete this;
}

void Rectangle::SetCenter(double x, double y)
{
	this->_center->SetX(x);
	this->_center->SetY(y);
}

void Rectangle::SetLength(double length)
{
	this->CheckNegative(length);
	this->_length = length;
}

void Rectangle::SetWidth(double width)
{
	this->CheckNegative(width);
	this->_width = width;
}

Point* Rectangle::GetCenter()
{
	return this->_center;
}

double Rectangle::GetLength()
{
	return this->_length;
}

double Rectangle::GetWidth()
{
	return this->_width;
}

void Rectangle::CheckNegative(double number)
{
	if (number < 0)
	{
		throw exception("Number cannot be less then zero");
	}
}

