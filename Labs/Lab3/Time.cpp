#include "Time.h"
#include <exception>

using namespace std;

Time* CreateTime(int year, int month, int day, int hour, int minute)
{
	Time* newTime = new Time;
	newTime->Year = year;
	newTime->Month = month;
	newTime->Day = day;
	newTime->Hour = hour;
	newTime->Minute = minute;
	return newTime;
}

void SetYear(Time* time, int year)
{
	if (year < 0)
	{
		throw exception("Year cannot be negative");
	}
	time->Year = year;
}
void SetMonth(Time* time, int month)
{
	if (month <= 0 || month > 12)
	{
		throw exception("Incorrect month");
	}
	time->Month = month;
}
void SetDay(Time* time, int day) 
{
	if (day <= 0 || day > 30)
	{
		throw exception("Incorrect day");
	}
	time->Day = day;
}
void SetHour(Time* time, int hour)
{
	if (hour <= 0 || hour > 24)
	{
		throw exception("Incorrect hour");
	}
	time->Hour = hour;
}
void SetMinute(Time* time, int minute)
{
	if (minute < 0 || minute>60)
	{
		throw exception("Incorrect minute");
	}
	time->Minute = minute;
}