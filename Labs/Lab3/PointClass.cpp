#include"PointClass.h"

Point::Point(double x, double y)
{
	this->SetX(x);
	this->SetY(y);
}

Point::~Point()
{

}

void Point::SetX(double x)
{
	this->_x = x;
}

void Point::SetY(double y)
{
	this->_y = y;
}