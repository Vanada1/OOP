#include  "Color.h"
#include<iostream>

using namespace std;

//2.2.8.5
void WriteColor(Color color)
{
	switch (color)
	{
	case RED:
	{
		cout << "Red color" << endl;
		break;
	}
	case ORANGE:
	{
		cout << "Orange color" << endl;
		break;
	}
	case YELLOW:
	{
		cout << "Yellow color" << endl;
		break;
	}
	case GREEN:
	{
		cout << "Green color" << endl;
		break;
	}
	case BLUE:
	{
		cout << "Blue color" << endl;
		break;
	}
	case DARKBLUE:
	{
		cout << "Dark blue color" << endl;
		break;
	}
	case PURPLE:
	{
		cout << "Purple color" << endl;
		break;
	}
	default:
	{
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
		color = RED;
		break;
	}
	case 1:
	{
		color = ORANGE;
		break;
	}
	case 2:
	{
		color = YELLOW;
		break;
	}
	case 3:
	{
		color = GREEN;
		break;
	}
	case 4:
	{
		color = BLUE;
		break;
	}
	case 5:
	{
		color = DARKBLUE;
		break;
	}
	case 6:
	{
		color = PURPLE;
		break;
	}
	default:
		cout << "Strange number! I'll take red!" << endl;
		color = RED;
		break;
	}
	return color;
}
//2.2.8.7
int CountRed(Color* colors, int count)
{
	int countRed = 0;
	for (int i = 0; i < count; i++)
	{
		if (colors[i] == RED)
		{
			countRed++;
		}
	}
	return countRed;
}
//2.2.8.8
int CountColor(Color* colors, int count, Color findedColor)
{
	int countColor = 0;
	for (int i = 0; i < count; i++)
	{
		if (colors[i] == findedColor)
		{
			countColor++;
		}
	}
	return countColor;
}