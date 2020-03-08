#include "DemoStruct.h"
#include <iostream>

using namespace std;

void DemoFlight()
{
	//2.2.3.1
	Flight flight;
	flight.From = "Chelyabinsk";
	flight.Where = "Moscow";
	flight.FlightTimeMinute = 60;
	//2.2.3.2
	Flight flightSecond;
	cout << "From: ";
	cin >> flightSecond.From;
	cout << endl;
	cout << "Where: ";
	cin >> flightSecond.Where;
	cout << endl;
	cout << "How long to fly (in minutes): ";
	cin >> flightSecond.FlightTimeMinute;
	cout << endl;
	cout << "Your flight from " << flightSecond.From 
		 << " to " << flightSecond.Where 
		 << " will be " << flightSecond.FlightTimeMinute 
		 << " minutes" << endl;
	//2.2.3.3
	const int COUNT  = 4;
	Flight flightArray[COUNT];
	for (int i = 0; i < COUNT; i++)
	{
		cout << "From: ";
		cin >> flightArray[i].From;
		cout << endl;
		cout << "Where: ";
		cin >> flightArray[i].Where;
		cout << endl;
		cout << "How long to fly (in minutes): ";
		cin >> flightArray[i].FlightTimeMinute;
		cout << endl;
	}
	//2.2.6.3
	FindShortestFlight(flightArray, COUNT);
	for (int i = 0; i < COUNT; i++)
	{
		cout << "Your flight from" << flightArray[i].From
			<< " to " << flightArray[i].Where
			<< " will be " << flightArray[i].FlightTimeMinute
			<< " minutes" << endl;
	}
	// 2.2.4.1
	Flight* flightPointer = &flight;
	 //2.2.4.2
	Flight* flightPointer2 = &flight;
	cout << flightPointer << endl;
	cout << flightPointer2 << endl;
}

void DemoMovie()
{
	//2.2.3.1
	Movie movie;
	movie.Name = "It";
	movie.DurationMinute = 135;
	movie.Year = 2017;
	movie.Genre = "Horror";
	movie.Rating = 7.3;
	//2.2.3.2
	Movie  movieSecond;
	cout << "Movie name: ";
	cin >> movieSecond.Name;
	cout << endl;
	cout << "Duration in minute: ";
	cin >> movieSecond.DurationMinute;
	cout << endl;
	cout << "Year: ";
	cin >> movieSecond.Year;
	cout << endl;
	cout << "Genre: ";
	cin >> movieSecond.Genre;
	cout << endl;
	cout << "Rating: ";
	cin >> movieSecond.Rating;
	cout << endl;
	cout << "The  movie: " << movieSecond.Name << endl;
	cout << "Duration in minute: " << movieSecond.DurationMinute << endl;
	cout << "Year: " << movieSecond.Year << endl;
	cout << "Genre: " << movieSecond.Genre << endl;
	cout << "Rating: " << movieSecond.Rating << endl;
	//2.2.3.3
	const int COUNT = 3;
	Movie movieArray[COUNT];
	for (int i = 0; i < COUNT; i++)
	{
		cout << "Movie name: ";
		cin >> movieArray[i].Name;
		cout << endl;
		cout << "Duration in minute: ";
		cin >> movieArray[i].DurationMinute;
		cout << endl;
		cout << "Year: ";
		cin >> movieArray[i].Year;
		cout << endl;
		cout << "Genre: ";
		cin >> movieArray[i].Genre;
		cout << endl;
		cout << "Rating: ";
		cin >> movieArray[i].Rating;
		cout << endl;
	}
	for (int i = 0; i < COUNT; i++)
	{
		cout << "The  movie: " << movieArray[i].Name << endl;
		cout << "Duration in minute: " 
			 << movieArray[i].DurationMinute << endl;
		cout << "Year: " << movieArray[i].Year << endl;
		cout << "Genre: " << movieArray[i].Genre << endl;
		cout << "Rating: " << movieArray[i].Rating << endl;
	}
	// 2.2.4.1
	Movie* moviePointer = &movie;
	// 2.2.4.2
	Movie* moviePointer2 = &movie;
	cout << moviePointer << endl;
	cout << moviePointer2 << endl;
}

void DemoRectangle()
{
	//2.2.3.1
	Rectangle  reactangle;
	reactangle.Length = 15;
	reactangle.Width = 40;
	reactangle.Color = "Green";
	//2.2.5.4
	Rectangle  reactangle2;
	reactangle2.Length = 30;
	reactangle2.Width = 200;
	reactangle2.Color = "Purple";
	cout << "Before: " << endl;
	WriteRectangle(reactangle);
	WriteRectangle(reactangle2);

	Exchange(reactangle, reactangle2);

	cout << "After: " << endl;
	WriteRectangle(reactangle);
	WriteRectangle(reactangle2);
	
	//2.2.3.2
	Rectangle  reactangleSecond;
	ReadRectangle(reactangleSecond);
	WriteRectangle(reactangleSecond);
	//2.2.3.3
	const int COUNT = 3;
	Rectangle rectangleArray[COUNT];
	for (int i = 0; i < COUNT; i++)
	{
		ReadRectangle(rectangleArray[i]);
	}
	for (int i = 0; i < COUNT; i++)
	{
		WriteRectangle(rectangleArray[i]);
	}
	//2.2.5.5
	FindRectangle(rectangleArray, COUNT);
	//2.2.5.6
	FindMaxRectangle(rectangleArray, COUNT);
	// 2.2.4.1
	Rectangle* rectanglePointer = &reactangle;
	// 2.2.4.2
	Rectangle* rectanglePointer2 = &reactangle;
	cout << rectanglePointer << endl;
	cout << rectanglePointer2 << endl;
}

void DemoTime()
{
	//2.2.3.1
	Time time;
	time.Hour = 12;
	time.Minute = 8;
	time.Second = 30;
	//2.2.3.2
	Time  timeSecond;
	cout << "Input hours (from 0 to 23): ";
	cin >> timeSecond.Hour;
	cout << endl;
	cout << "Input minutes (from 0 to 59): ";
	cin >> timeSecond.Minute;
	cout << endl;
	cout << "Input seconds (from 0 to 59): ";
	cin >> timeSecond.Second;
	cout << endl;
	cout << "Time is  " << timeSecond.Hour << ":";
	if (timeSecond.Minute < 10)
	{
		cout << 0;
	}
	cout << timeSecond.Minute<<":";
	if (timeSecond.Second < 10)
	{
		cout << 0;
	}
	cout << timeSecond.Second << endl;
	//2.2.3.3
	const int COUNT = 3;
	Time timeArray[COUNT];
	for (int i = 0; i < COUNT; i++)
	{
		cout << "Input hours (from 0 to 23): ";
		cin >> timeArray[i].Hour;
		cout << endl;
		cout << "Input minutes (from 0 to 59): ";
		cin >> timeArray[i].Minute;
		cout << endl;
		cout << "Input seconds (from 0 to 59): ";
		cin >> timeArray[i].Second;
		cout << endl;
	}
	for (int i = 0; i < COUNT; i++)
	{
		cout << "Time is  " << timeArray[i].Hour << ":";
		if (timeArray[i].Minute < 10)
		{
			cout << 0;
		}
		cout << timeArray[i].Minute << ":";
		if (timeArray[i].Second < 10)
		{
			cout << 0;
		}
		cout << timeArray[i].Second << endl;
	}
	// 2.2.4.1
	Time* timePointer = &time;
	// 2.2.4.2
	Time* timePointer2 = &time;
	cout << timePointer << endl;
	cout << timePointer2 << endl;
}