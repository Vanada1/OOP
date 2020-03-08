#include "Circle.h"

using namespace std;

Circle* MakeCircle(double x, double y, double radius, string color)
{
	Circle* newCircle = new Circle();
	newCircle->X = x;
	newCircle->Y = y;
	newCircle->Radius = radius;
	newCircle->Color = color;
	return newCircle;
}

Circle* CoppyCircle(Circle& circle)
{
	Circle* coppyCircle = new Circle();
	coppyCircle->X = circle.X;
	coppyCircle->Y = circle.Y;
	coppyCircle->Radius = circle.Radius;
	coppyCircle->Color = circle.Color;
	return coppyCircle;
}