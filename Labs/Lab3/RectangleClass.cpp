#include "RectangleClass.h"
#include <exception>

using namespace std;

Rectangle::Rectangle(double x, double y, double length, double width)
{
	this->SetCenter(x, y);
	this->SetLength(length);
	this->SetWidth(width);
}

Rectangle::~Rectangle()
{

}

void Rectangle::SetCenter(double x, double y)
{
	this->_center->SetX(x);
	this->_center->SetY(y);
}

void Rectangle::SetLength(double length)
{
	if (length < 0)
	{
		throw exception("Lengtth cannot be less than zero");
	}
	this->_length = length;
}

void Rectangle::SetWidth(double width)
{
	if (width < 0)
	{
		throw exception("Width cannot be less then zero");
	}
	this->_width = width;
}

double Rectangle::GetCenterX()
{
	return this->_center->GetX();
}

double Rectangle::GetCenterY()
{
	return this->_center->GetY();
}

double Rectangle::GetLength()
{
	return _length;
}

double Rectangle::GetWidth()
{
	return _width;
}

