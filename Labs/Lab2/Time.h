#pragma once

struct  Time
{
	int Hour;
	int Minute;
	int Second;
};
//2.2.7.2
Time* MakeTime(int, int, int);
//TODO: naming(Done)
//2.2.7.3
Time* CopyTime(Time&);
void ReadTime(Time&);
void WriteTime(Time&);