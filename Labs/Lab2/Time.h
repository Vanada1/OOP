#pragma once

struct  Time
{
	int Hour;
	int Minute;
	int Second;
};
//TODO: naming - create
//2.2.7.2
Time* MakeTime(int, int, int);
//TODO: naming
//2.2.7.3
Time* CopyTime(Time&);
//TODO: naming - enter
void ReadTime(Time&);
//TODO: naming - display
void WriteTime(Time&);