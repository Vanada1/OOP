#include "DemoStruct.h"
#include "Flight.h"
#include "Band.h"
#include "Rectangle.h"
#include <iostream>

using namespace std;

const int COUNT = 5;

void DemoFlightWithTime()
{
	Flight* flights[COUNT];
	Time* departureTime1 = CreateTime(2020, 12, 30, 12, 40);
	Time* purposeTime1 = CreateTime(2021, 1, 1, 16, 30);
	string flightNumber = "A201";
	string from = "Moscow";
	string purpose = "Tomsk";
	flights[0] = CreateFlight(flightNumber, from, purpose, departureTime1,
		purposeTime1);

	flightNumber = "A323";
	from = "Tomsk";
	purpose = "Moscow";
	Time* departureTime2 = CreateTime(2020, 1, 23, 12, 0);
	Time* purposeTime2 = CreateTime(2020, 1, 23, 16, 0);
	flights[1] = CreateFlight(flightNumber, from, purpose, departureTime2,
		purposeTime2);

	flightNumber = "S588";
	from = "Kemerovo";
	purpose = "Moscow";
	Time* departureTime3 = CreateTime(2020, 3, 2, 9, 30);
	Time* purposeTime3 = CreateTime(2020, 3, 2, 12, 30);
	flights[2] = CreateFlight(flightNumber, from, purpose, departureTime3,
		purposeTime3);

	flightNumber = "G023";
	from = "Moscow";
	purpose = "Kemerovo";
	Time* departureTime4 = CreateTime(2020, 3, 2, 9, 30);
	Time* purposeTime4 = CreateTime(2020, 3, 2, 12, 30);
	flights[3] = CreateFlight(flightNumber, from, purpose, departureTime4,
		purposeTime4);

	flightNumber = "MA404";
	from = "Kemerovo";
	purpose = "Tomsk";
	Time* departureTime5 = CreateTime(2020, 6, 12, 3, 0);
	Time* purposeTime5 = CreateTime(2020, 6, 12, 4, 0);
	flights[4] = CreateFlight(flightNumber, from, purpose, departureTime5,
		purposeTime5);

	for (int i = 0; i < COUNT; i++)
	{
		cout << flights[i]->FlightNumber << "\t" << flights[i]->From << '-'
			<< flights[i]->Purpose << "\t Departure "
			<< flights[i]->DepartureTime->Month << '.'
			<< flights[i]->DepartureTime->Day << '\t'
			<< flights[i]->DepartureTime->Hour << ':'
			<< flights[i]->DepartureTime->Minute 
			<< "\tArrival " << flights[i]->PurposeTime->Month << '.'
			<< flights[i]->PurposeTime->Day
			<< '\t' << flights[i]->PurposeTime->Hour << ':'
			<< flights[i]->PurposeTime->Minute << endl;
	}

	int timeDifference = GetFlightTimeMinutes(flights[0]);
	int minutesInHour = 60;
	cout << flights[0]->FlightNumber << "\t" << flights[0]->From << '-'
		<< flights[0]->Purpose << "\tFlight time: "
		<< timeDifference / minutesInHour << "h "
		<< timeDifference % minutesInHour << "min" << endl;

	for (int i = 0; i < COUNT; i++)
	{
		delete flights[i]->DepartureTime;
		delete flights[i]->PurposeTime;
		delete flights[i];
	}
}

void DemoRecangleWithPoint()
{
	Rectangle* rectangles[COUNT];
	rectangles[0] = CreateRectangle(0.0, 0.0, 8.1, 25.23);
	rectangles[1] = CreateRectangle(1.0, 21.0, 81.0, 223.8);
	rectangles[2] = CreateRectangle(2.0, 45.0, 25.45, 4.3);
	rectangles[3] = CreateRectangle(3.0, 35.0, 99.2, 3.2);
	rectangles[4] = CreateRectangle(4.0, 100.0, 853.205, 70.23);

	for (int i = 0; i < COUNT; i++)
	{
		cout << "X = " << rectangles[i]->Center->X
			<< "\tY = " << rectangles[i]->Center->Y
			<< "\tLength = " << rectangles[i]->Length
			<< "\tWidth = " << rectangles[i]->Width << endl;
	}
	
	double xCenter = 0.0;
	double yCenter = 0.0;
	for (int i = 0; i < COUNT; i++)
	{
		xCenter += rectangles[i]->Center->X;
		yCenter += rectangles[i]->Center->Y;
	}

	xCenter /= COUNT;
	yCenter /= COUNT;
	cout << "X center = " << xCenter << "\tY center = " << yCenter << endl;
	for (int i = 0; i < COUNT; i++)
	{
		delete rectangles[i]->Center;
		delete rectangles[i];
	}
}

void DemoBand()
{
	const int songCount = 4;
	const int albumsCount = 3;

	Song** songs1 = new Song * [songCount];
	string nameSong1 = "first";
	string nameSong2 = "second";
	string nameSong3 = "third";
	string nameSong4 = "fourth";
	songs1[0] = CreateSong(nameSong1, 1, Rock);
	songs1[1] = CreateSong(nameSong2, 2, Pop);
	songs1[2] = CreateSong(nameSong3, 3, HipHop);
	songs1[3] = CreateSong(nameSong4, 4, Jazz);

	Song** songs2 = new Song * [songCount];
	nameSong1 = "One";
	nameSong2 = "Two";
	nameSong3 = "Three";
	nameSong4 = "Four";
	songs2[0] = CreateSong(nameSong1, 1, Jazz);
	songs2[1] = CreateSong(nameSong2, 2, Pop);
	songs2[2] = CreateSong(nameSong3, 3, HipHop);
	songs2[3] = CreateSong(nameSong4, 4, Jazz);

	Song** songs3 = new Song * [songCount];
	nameSong1 = "Song 1";
	nameSong2 = "Song 2";
	nameSong3 = "Song 3";
	nameSong4 = "Song 4";
	songs3[0] = CreateSong(nameSong1, 1, HipHop);
	songs3[1] = CreateSong(nameSong2, 2, HipHop);
	songs3[2] = CreateSong(nameSong3, 3, HipHop);
	songs3[3] = CreateSong(nameSong4, 4, HipHop);

	Album** albums = new Album * [albumsCount];
	string nameAlbum1 = "First Album";
	string nameAlbum2 = "Second Album";
	string nameAlbum3 = "Third Album";
	albums[0] = CreateAlbum(nameAlbum1, 1990, songCount, songs1);
	albums[1] = CreateAlbum(nameAlbum2, 1999, songCount, songs2);
	albums[2] = CreateAlbum(nameAlbum3, 2010, songCount, songs3);

	string nameBand = "Forever";
	string description = "Forever young";
	Band* band = CreateBand(nameBand, description, albumsCount, albums);
	
	string foundSongName = "Song 1";
	Song* foundSong = FindSong(band, foundSongName);
	if (foundSong != nullptr)
	{
		cout << WriteSong(foundSong) << endl;
	}
	else
	{
		cout << "Not found" << endl;
	}

	Album* foundAlbum = FindAlbum(band, songs2[2]);
	if (foundAlbum != nullptr)
	{
		cout << "Album title: " << foundAlbum->AlbumTitle << '\t'
				<< "Issue Year: " << foundAlbum->IssueYear
				<< '\t' << "Songs Count: " << foundAlbum->SongsCount << endl << endl;
	}
	else
	{
		cout << "Not found" << endl;
	}

	int allSongsCount;
	Song** allSongs = GetAllSongs(band, allSongsCount);
	for (int i = 0; i < allSongsCount; i++)
	{
		cout << WriteSong(allSongs[i]) << endl;
	}
	cout << endl;

	int allSongsCountGenre;
	Song** allSongGenre = GetAllGenreSongs(band, HipHop, allSongsCountGenre);
	for (int i = 0; i < allSongsCountGenre; i++)
	{
		cout << WriteSong(allSongGenre[i]) << endl;
	}

	for (int i = 0; i < songCount; i++)
	{
		delete songs1[i];
		delete songs2[i];
		delete songs3[i];
	}
	delete[] songs1;
	delete[] songs2;
	delete[] songs3;

	for (int i = 0; i < albumsCount; i++)
	{
		delete albums[i];
	}
	delete[] albums;
	delete band;
}