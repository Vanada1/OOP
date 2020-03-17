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

//TODO: naming(Done)
Circle* CopyCircle(Circle& circle)
{
	//TODO: naming(Done)
	Circle* copyCircle = new Circle();
	copyCircle->X = circle.X;
	copyCircle->Y = circle.Y;
	copyCircle->Radius = circle.Radius;
	copyCircle->Color = circle.Color;
	return copyCircle;
}