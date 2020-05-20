#include "Ring.h"
#include <exception>
#include <cmath>

int Ring::AllRingsCount = 0;

Ring::Ring(double outerRadius, double innerRadius, Point* center)
{
	this->SetRadii(outerRadius, innerRadius);
	this->SetCenter(center);
	AddAllRingsCount();
}

Ring::Ring(double outerRadius, double innerRadius, double x,
	double y)
{
	this->SetRadii(outerRadius, innerRadius);
	this->_center = new Point(x, y);
	AddAllRingsCount();
}

Ring::~Ring()
{
	SubtractAllRingsCount();
}

void Ring::SetRadii(double outerRadius, double innerRadius)
{
	AssertOnPositiveValue(outerRadius);
	AssertOnPositiveValue(innerRadius);

	if (innerRadius > outerRadius)
	{
		throw std::exception
		("The inner radius cannot be greater than the outer radius");
	}

	this->_outerRadius = outerRadius;
	this->_innerRadius = innerRadius;
}

void Ring::SetCenter(Point* center)
{
	this->_center = center;
}

double Ring::GetOuterRadius()
{
	return this->_outerRadius;
}

double Ring::GetInnerRadius()
{
	return this->_innerRadius;
}

Point* Ring::GetCenter()
{
	return this->_center;
}

double Ring::GetAria()
{
	const double PI = 3.1415;
	double outerArea = PI * pow(this->GetOuterRadius(), 2);
	double innerArea = PI * pow(this->GetInnerRadius(), 2);
	return outerArea - innerArea;
}

void Ring::AssertOnPositiveValue(double value)
{
	if (value < 0)
	{
		throw std::exception("Radius cannot be negative");
	}
}

void Ring::AddAllRingsCount()
{
	Ring::AllRingsCount++;
}

void Ring::SubtractAllRingsCount()
{
	Ring::AllRingsCount--;
}

int Ring::GetAllRingsCount()
{
	return Ring::AllRingsCount;
}