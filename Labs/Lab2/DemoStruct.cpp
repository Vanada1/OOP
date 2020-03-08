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
	cout << "Your flight from" << flightSecond.From 
		 << " to " << flightSecond.Where 
		 << " will be " << flightSecond.FlightTimeMinute 
		 << "minutes" << endl;
	//2.2.3.3
	const int COUNT  = 3;
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
	for (int i = 0; i < COUNT; i++)
	{
		cout << "Your flight from" << flightArray[i].From
			<< " to " << flightArray[i].Where
			<< " will be " << flightArray[i].FlightTimeMinute
			<< "minutes" << endl;
	}
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
}

void DemoRectangle()
{
	//2.2.3.1
	Rectangle  reactangle;
	reactangle.Length = 15;
	reactangle.Width = 40;
	reactangle.Color = "Green";
	//2.2.3.2
	Rectangle  reactangleSecond;
	cout << "Input the length (positive): ";
	cin >> reactangleSecond.Length; 
	cout << endl;
	cout << "Input the width (positive): ";
	cin >> reactangleSecond.Width;
	cout << endl;
	cout << "Input the color: ";
	cin >> reactangleSecond.Color;
	cout << endl;
	cout << "Reactangle has a size —  " << reactangleSecond.Length 
		<< "x" << reactangleSecond.Width 
		<< "; Color — " << reactangleSecond.Color<<  endl;
	//2.2.3.3
	const int COUNT = 3;
	Rectangle rectangleArray[COUNT];
	for (int i = 0; i < COUNT; i++)
	{
		cout << "Input the length (positive): ";
		cin >> rectangleArray[i].Length;
		cout << endl;
		cout << "Input the width (positive): ";
		cin >> rectangleArray[i].Width;
		cout << endl;
		cout << "Input the color: ";
		cin >> rectangleArray[i].Color;
		cout << endl;
	}
	for (int i = 0; i < COUNT; i++)
	{
		cout << "Reactangle has a size —  " 
			<< rectangleArray[i].Length
			<< "x" << rectangleArray[i].Width
			<< "; Color — " << rectangleArray[i].Color << endl;
	}
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
}