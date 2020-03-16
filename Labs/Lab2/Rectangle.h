#pragma once
#include  <string>

struct Rectangle
{
	double Length;
	double Width;
	std::string Color;
};

//TODO: naming - Display?
//2.2.5.1
void WriteRectangle(Rectangle&);
//2.2.5.2
void ReadRectangle(Rectangle&);
//TODO: naming - Swap?
//2.2.5.4
void Exchange(Rectangle&, Rectangle&);
//2.2.5.5
void FindRectangle(Rectangle*, int);
//2.2.5.6
void FindMaxRectangle(Rectangle*, int);
//2.2.7.2
Rectangle* MakeRectangle(double, double, std::string);
//TODO: naming
//2.2.7.3
Rectangle* CoppyRectangle(Rectangle&);