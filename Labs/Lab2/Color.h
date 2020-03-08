#pragma once

enum Color
{
	RED,
	ORANGE,
	YELLOW,
	GREEN,
	BLUE,
	DARKBLUE,
	PURPLE
};
//2.2.8.5
void WriteColor(Color);
//2.2.8.6
Color ReadColor();
//2.2.8.7
int CountRed(Color*, int);
//2.2.8.8
int CountColor(Color*, int, Color);