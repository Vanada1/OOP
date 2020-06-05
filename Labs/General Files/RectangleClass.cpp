#include "RectangleClass.h"
#include "DoubleValidator.h"
#include <exception>

using namespace std;

Rectangle::Rectangle(double length, double width, double x, double y)
{
	//TODO: � ��� ������ set ��� ������ �� ������(Done)
	this->SetCenter(x, y);
	this->SetLength(length);
	this->SetWidth(width);
}

Rectangle::~Rectangle()
{
	delete this->_center;
}

void Rectangle::SetCenter(double x, double y)
{
	//TODO: ������ �������, ��� �������� nullptr ������ �� �������, ������� ����� if ������ (Done)
	delete this->_center;
	this->_center = new Point(x, y);
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

