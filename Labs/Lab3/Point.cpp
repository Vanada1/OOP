#include "Point.h"

Point* CreatePoint(double x, double y)
{
	Point* newPoint = new Point();
	newPoint->X = x;
	newPoint->Y = y;
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