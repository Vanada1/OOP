#include "Point.h"

Point CreatePoint(double x, double y)
{
	Point point;
	point.X = x;
	point.Y = y;
	return point;
}

void SetX(Point& point, double  x)
{
	point.X = x;
}

void SetY(Point& point, double  y)
{
	point.Y = y;
}