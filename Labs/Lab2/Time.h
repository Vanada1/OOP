#pragma once

struct  Time
{
	int Hour;
	int Minute;
	int Second;
};
//2.2.7.2
Time* MakeTime(int, int, int);
//2.2.7.3
Time* CoppyTime(Time&);