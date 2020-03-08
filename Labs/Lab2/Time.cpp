#include "Time.h"

Time* MakeTime(int hour, int minute, int second)
{
	Time* newTime = new Time();
	newTime->Hour = hour;
	newTime->Minute = minute;
	newTime->Second = second;
	return newTime;
}

Time* CoppyTime(Time& time)
{
	Time* coppyTime = new Time();
	coppyTime->Hour = time.Hour;
	coppyTime->Minute = time.Minute;
	coppyTime->Second = time.Second;
	return coppyTime;
}