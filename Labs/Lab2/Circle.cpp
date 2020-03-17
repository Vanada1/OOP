#include "Circle.h"

using namespace std;

//TODO: передача по значению, насколько правильно?(Done)
Circle* MakeCircle(double x, double y, double radius, string* color)
{
	Circle* newCircle = new Circle();
	newCircle->X = x;
	newCircle->Y = y;
	newCircle->Radius = radius;
	newCircle->Color = *color;
	return newCircle;
}

Circle* CopyCircle(Circle& circle)
{
	Circle* copyCircle = new Circle();
	copyCircle->X = circle.X;
	copyCircle->Y = circle.Y;
	copyCircle->Radius = circle.Radius;
	copyCircle->Color = circle.Color;
	return copyCircle;
}