#pragma once
#include "Point.h"

struct Rectangle
{
	Point Center;
	double Length;
	double Width;
};

Rectangle CreateRectangle(double x, double y, double length, double width);
void SetCenter(Rectangle& rectangle, double x, double y);
void SetLength(Rectangle& rectangle, double length);
void SetWidth(Rectangle& rectangle, double width);
void DemoRecangleWithPoint();