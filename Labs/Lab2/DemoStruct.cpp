#include "DemoStruct.h"
#include <iostream>

using namespace std;
const int COUNT = 3;

void DemoFlight()
{
	//2.2.3.1
	Flight flight;
	flight.From = "Chelyabinsk";
	flight.Where = "Moscow";
	flight.FlightTimeMinute = 60;
	//2.2.3.2
	Flight flightSecond;
	ReadFlight(flightSecond);
	WriteFlight(flightSecond);
	//2.2.3.3
	Flight flightArray[COUNT];
	for (int i = 0; i < COUNT; i++)
	{
		ReadFlight(flightArray[i]);
	}
	//2.2.6.3
	FindShortestFlight(flightArray, COUNT);
	for (int i = 0; i < COUNT; i++)
	{
		WriteFlight(flightArray[i]);
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
	movie.MovieGenre = Horror;
	movie.Rating = 7.3;
	//2.2.3.2
	Movie  movieSecond;
	ReadMovie(movieSecond);
	WriteMovie(movieSecond);
	//2.2.3.3
	Movie movieArray[COUNT];
	for (int i = 0; i < COUNT; i++)
	{
		ReadMovie(movieArray[i]);
	}
	for (int i = 0; i < COUNT; i++)
	{
		WriteMovie(movieArray[i]);
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
	//TODO: naming
	//2.2.3.1
	Rectangle  reactangle;
	reactangle.Length = 15;
	reactangle.Width = 40;
	reactangle.Color = "Green";
	//TODO: naming
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
	//TODO: naming
	//2.2.3.2
	Rectangle  reactangleSecond;
	ReadRectangle(reactangleSecond);
	WriteRectangle(reactangleSecond);
	//2.2.3.3
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
	ReadTime(timeSecond);
	WriteTime(timeSecond);
	//2.2.3.3
	Time timeArray[COUNT];
	for (int i = 0; i < COUNT; i++)
	{
		ReadTime(timeArray[i]);
	}
	for (int i = 0; i < COUNT; i++)
	{
		WriteTime(timeArray[i]);
	}
	// 2.2.4.1
	Time* timePointer = &time;
	// 2.2.4.2
	Time* timePointer2 = &time;
	cout << timePointer << endl;
	cout << timePointer2 << endl;
}
//2.2.7.1
void DemoCircle()
{
	Circle* circle1 = MakeCircle(5.0, 7.0, 7.5, "Red");
	Circle* circle2 = MakeCircle(2.0, -12.0, 12.75, "Green");
	Circle* circle3 = MakeCircle(-10.0, 10.0, 1.45, "Blue");

	Circle* coppyCircle1 = CoppyCircle(*circle1);
	Circle* coppyCircle2 = CoppyCircle(*circle2);
	Circle* coppyCircle3 = CoppyCircle(*circle3);

	delete circle1;
	delete circle2;
	delete circle3;
	delete coppyCircle1;
	delete coppyCircle2;
	delete coppyCircle3;
}

void DemoEnums()
{
	//2.2.8.3
	Color color = Green;
	EnducationForm  enducationForm = EVENING;
	Genre  ganre = Action;
	Season  season = Summer;
	SmartphoneManufacturer smartphoneManufacturer = Huawai;
	WeekDay  weekDay = Monday;
	//2.2.8.4
	const int COUNT = 6;
	//TODO: RSDN
	Color colorArray[COUNT] = 
	{ Red, Blue, DarkBlue, Green, Purple,Red };
	//TODO: RSDN
	EnducationForm  enducationFormArray[COUNT] =
	{ INTRAMURAL, EXTAMURAL, EVENING,
		REMOTE, INTRAMURAL, INTRAMURAL };
	//TODO: RSDN
	Genre  ganreArray[COUNT] = { Comedy, Drama, Thriller,
		Action, Horror, Blockbuster };
	//TODO: RSDN
	Season  seasonArray[COUNT] = { Winter, Summer, Autumn,
	Spring, Winter, Summer };
	//TODO: RSDN
	SmartphoneManufacturer smartphoneManufacturerArray[COUNT] =
	{ Apple, Xiaomi,  Samsung, Huawai, Motorola, Lenovo };
	//TODO: RSDN
	WeekDay  weekDayArray[COUNT] = { Monday, Tuesday, Wednesday,
	Thursday, Friday, Suturday};
}

void DemoMovieWithGenre()
{
	Movie movie;
	movie.Name = "Who Am I";
	movie.DurationMinute = 106;
	movie.MovieGenre = Drama;
	movie.Year = 2014;
	movie.Rating = 7.4;

	Movie* movie2 = MakeMovie("Dumb and Dumber", 113,
		1994, Comedy, 7.3);
	WriteMovie(*movie2);
	delete movie2;
	;
	Movie* movieArray = new Movie[COUNT];
	for (int i = 0; i < COUNT; i++)
	{
		ReadMovie(movieArray[i]);
	}
	cout << CountMoviesByGenre(movieArray,
		COUNT, ReadGenre()) << endl;
	Movie* bestMovie= FindBestGenreMovie(movieArray, 
		COUNT, ReadGenre());
	if (bestMovie)
	{
		WriteMovie(*bestMovie);
	}
	else
	{
		cout << "None" << endl;
	}
	delete[] movieArray;
}

void DemoReadAndWriteRectangles()
{
	const int COUNT = 5;
	Rectangle rectangleArray[COUNT];

	for (int i = 0; i < COUNT; i++)
	{
		ReadRectangle(rectangleArray[i]);
	}

	for (int i = 0; i < COUNT; i++)
	{
		WriteRectangle(rectangleArray[i]);
	}
}