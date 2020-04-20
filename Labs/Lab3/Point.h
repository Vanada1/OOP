#pragma once

struct Point
{
	double X;
	double Y;
};

void SetX(Point& point, double x);
void SetY(Point& point, double y);
Point CreatePoint(double x, double y);