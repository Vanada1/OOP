#pragma once

struct Point
{
	double X;
	double Y;
};

Point* CreatePoint(double x, double y);
void SetX(Point* point, double x);
void SetY(Point* point, double y);