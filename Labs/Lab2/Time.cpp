#include "Time.h"
#include"../General Files/Read.h"
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

Time* CopyTime(Time& time)
{
	Time* copyTime = new Time();
	copyTime->Hour = time.Hour;
	copyTime->Minute = time.Minute;
	copyTime->Second = time.Second;
	return copyTime;
}

void  ReadTime(Time& time)
{
	cout << "Input hours (from 0 to 23): ";
	time.Hour = Read<int>();
	cout << endl;
	cout << "Input minutes (from 0 to 59): ";
	time.Minute = Read<int>();
	cout << endl;
	cout << "Input seconds (from 0 to 59): ";
	time.Second = Read<int>();
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