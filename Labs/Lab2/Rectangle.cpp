#include "Rectangle.h"
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
	cin >> rectangle.Length;
	cout << endl;
	cout << "Input the width (positive): ";
	cin >> rectangle.Width;
	cout << endl;
	cout << "Input the color: ";
	cin >> rectangle.Color;
	cout << endl;
}

void DemoReadAndWriteRectangles()
{
	const int COUNT = 5;
	Rectangle rectangleArray[COUNT];

	for (int i = 0; i < COUNT; i++)
	{
		ReadRectangle(rectangleArray[i]);
	}

	for (int i = 0; i < COUNT; i++)
	{
		WriteRectangle(rectangleArray[i]);
	}
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
	int maxArea = rectangleMaxArea.Length * rectangleMaxArea.Width;
	for (int i = 0; i < count; i++)
	{
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