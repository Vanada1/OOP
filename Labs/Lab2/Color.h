#pragma once

enum Color
{
	Red,
	Orange,
	Yellow,
	Green,
	Blue,
	DarkBlue,
	Purple
};
//TODO: naming - display
//2.2.8.5
void WriteColor(Color);
//TODO: naming - enter
//2.2.8.6
Color ReadColor();
//2.2.8.7
int CountRed(Color*, int);
//2.2.8.8
int CountColor(Color*, int, Color);