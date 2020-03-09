#include "Time.h"
#include <iostream>

using namespace std;

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

void  ReadTime(Time& time)
{
	cout << "Input hours (from 0 to 23): ";
	cin >> time.Hour;
	cout << endl;
	cout << "Input minutes (from 0 to 59): ";
	cin >> time.Minute;
	cout << endl;
	cout << "Input seconds (from 0 to 59): ";
	cin >> time.Second;
	cout << endl;
}

void WriteTime(Time& time)
{
	cout << "Time is  " << time.Hour << ":";
	if (time.Minute < 10)
	{
		cout << 0;
	}
	cout << time.Minute << ":";
	if (time.Second < 10)
	{
		cout << 0;
	}
	cout << time.Second << endl;
}