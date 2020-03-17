#include "Rectangle.h"
#include"../General Files/Read.h"
#include <iostream>

using namespace std;

void WriteRectangle(Rectangle& rectangle)
{
	cout << "Reactangel has a size " << rectangle.Length
		<< "x" << rectangle.Width 
		<< "; Color  " << rectangle.Color << endl;
}

void ReadRectangle(Rectangle& rectangle)
{
	cout << "Input the length (positive): ";
	rectangle.Length = Read<double>();
	cout << endl;
	cout << "Input the width (positive): ";
	rectangle.Width = Read<double>();;
	cout << endl;
	cout << "Input the color: ";
	rectangle.Color = Read<string>();;
	cout << endl;
}

void Exchange(Rectangle& rectangle1, Rectangle& rectangle2)
{
	Rectangle rectangleTemp = rectangle1;
	rectangle1 = rectangle2;
	rectangle2 = rectangleTemp;
}

void FindRectangle(Rectangle* rectangles, int count)
{
	Rectangle rectangleMaxLength = rectangles[0];
	for (int i = 0; i < count; i++)
	{
		if (rectangleMaxLength.Length < rectangles[i].Length)
		{
			rectangleMaxLength = rectangles[i];
		}
	}
	cout << "The rectangle with max  length: " << endl;
	WriteRectangle(rectangleMaxLength);
}

void FindMaxRectangle(Rectangle* rectangles, int count)
{
	Rectangle rectangleMaxArea = rectangles[0];
	//TODO: ѕотер€ точности(Done)
	double maxArea = rectangleMaxArea.Length * rectangleMaxArea.Width;
	for (int i = 1; i < count; i++)
	{
		//TODO: ѕотер€ точности =)
		int tempArea = rectangles[i].Length * rectangles[i].Width;
		if (maxArea < tempArea)
		{
			rectangleMaxArea = rectangles[i];
			maxArea = tempArea;
		}
	}
	cout << "The rectangle with max  area: " << endl;
	WriteRectangle(rectangleMaxArea);
}

//TODO: передача по значению, насколько правильно?
Rectangle* MakeRectangle(double length,
	double width, std::string color)
{
	Rectangle* newRectangle = new Rectangle();
	newRectangle->Length = length;
	newRectangle->Width = width;
	newRectangle->Color = color;
	return newRectangle;
}

Rectangle* CopyRectangle(Rectangle& rectangle)
{
	Rectangle* copyRectangle = new Rectangle();
	copyRectangle->Length = rectangle.Length;
	copyRectangle->Width = rectangle.Width;
	copyRectangle->Color = rectangle.Color;
	return copyRectangle;
}