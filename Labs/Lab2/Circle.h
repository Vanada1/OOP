#pragma once
#include<string>
//2.2.7.1
struct Circle
{
	double X;
	double Y;
	double Radius;
	std::string Color;
};

Circle* MakeCircle(double, double, double, std::string color);
Circle* CoppyCircle(Circle&);