#include "Point.h"

Point* CreatePoint(double x, double y)
{
	Point* newPoint = new Point();
	SetX(newPoint, x);
	SetY(newPoint, y);
	return newPoint;
}

void SetX(Point* point, double  x)
{
	point->X = x;
}

void SetY(Point* point, double  y)
{
	point->Y = y;
}