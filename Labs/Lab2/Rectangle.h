#pragma once
#include  <string>

struct Rectangle
{
	double Length;
	double Width;
	std::string Color;
};

//2.2.5.1
void WriteRectangle(Rectangle&);
//2.2.5.2
void ReadRectangle(Rectangle&);
//2.2.5.4
void Exchange(Rectangle&, Rectangle&);
//2.2.5.5
void FindRectangle(Rectangle*, int);
//2.2.5.6
void FindMaxRectangle(Rectangle*, int);
//2.2.7.2
Rectangle* MakeRectangle(double, double, std::string);
//2.2.7.3
Rectangle* CoppyRectangle(Rectangle&);