#include "RectangleClass.h"
#include "DoubleValidator.h"
#include <exception>

using namespace std;

Rectangle::Rectangle(double length, double width, double x, double y)
{
	this->_center = new Point(x, y);
	this->SetLength(length);
	this->SetWidth(width);
}

Rectangle::~Rectangle()
{
	delete this->_center;
}

void Rectangle::SetCenter(double x, double y)
{
	//TODO: Может быть утечка памяти, т.к. через конструктор создал точку, а тут просто переопределил, а память не освободил
	Point* newPoint = new Point(x, y);
	this->_center = newPoint;
}

void Rectangle::SetLength(double length)
{
	DoubleValidator::AssertPositiveValue(length);
	this->_length = length;
}

void Rectangle::SetWidth(double width)
{
	DoubleValidator::AssertPositiveValue(width);
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

