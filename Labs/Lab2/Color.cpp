#include  "Color.h"
#include<iostream>

using namespace std;

//2.2.8.5
void WriteColor(Color color)
{
	switch (color)
	{
		case Red:
		{
			cout << "Red color" << endl;
			break;
		}
		case Orange:
		{
			cout << "Orange color" << endl;
			break;
		}
		case Yellow:
		{
			cout << "Yellow color" << endl;
			break;
		}
		case Green:
		{
			cout << "Green color" << endl;
			break;
		}
		case Blue:
		{
			cout << "Blue color" << endl;
			break;
		}
		case DarkBlue:
		{
			cout << "Dark blue color" << endl;
			break;
		}
		case Purple:
		{
			cout << "Purple color" << endl;
			break;
		}
		default:
		{
			cout << " Unknown color " << endl;
			break;
		}
	}
}
//2.2.8.6
Color ReadColor()
{
	cout << "Input the number from 0 to 6 "
		<< "(0 - Red, 1 - Orange, 2 - Yellow, "
		<< "3 - Green, 4 - Blue,"
		<< "5 - Dark blue, 6  - Purple):" << endl;
	int colorNum;
	cin >> colorNum;
	Color  color;
	switch (colorNum)
	{
		case 0:
		{
			color = Red;
			break;
		}
		case 1:
		{
			color = Orange;
			break;
		}
		case 2:
		{
			color = Yellow;
			break;
		}
		case 3:
		{
			color = Green;
			break;
		}
		case 4:
		{
			color = Blue;
			break;
		}
		case 5:
		{
			color = DarkBlue;
			break;
		}
		case 6:
		{
			color = Purple;
			break;
		}
		default:
		{
			cout << "Strange number! I'll take red!" << endl;
			color = Red;
			break;
		}
	}
	return color;
}
//2.2.8.7
int CountRed(Color* colors, int count)
{
	int redCounter = 0;
	for (int i = 0; i < count; i++)
	{
		if (colors[i] == Red)
		{
			redCounter++;
		}
	}
	return redCounter;
}
//2.2.8.8
int CountColor(Color* colors, int count, Color findedColor)
{
	int colorCounter = 0;
	for (int i = 0; i < count; i++)
	{
		if (colors[i] == findedColor)
		{
			colorCounter++;
		}
	}
	return colorCounter;
}