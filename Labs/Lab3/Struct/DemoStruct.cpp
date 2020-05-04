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
	flights[0] = CreateFlight("A201", "Moscow", "Tomsk", 2020, 12, 30,
		12, 40, 2021, 1, 1, 16, 30);
	flights[1] = CreateFlight("A323", "Tomsk", "Moscow", 2020, 1, 23,
		12, 0, 2020, 1, 23, 16, 0);
	flights[2] = CreateFlight("S588", "Kemerovo", "Moscow", 2020, 3, 2,
		9, 30, 2020, 3, 2, 12, 30);
	flights[3] = CreateFlight("G023", "Moscow", "Kemerovo", 2020, 3, 2,
		9, 30, 2020, 3, 2, 12, 30);
	flights[4] = CreateFlight("MA404", "Kemerovo", "Tomsk", 2020, 6, 12,
		3, 0, 2020, 6, 12, 4, 0);

	for (int i = 0; i < COUNT; i++)
	{
		cout << flights[i]->FlightNumber << "\t" << flights[i]->From << '-'
			<< flights[i]->Purpose << "\t Departure "
			<< flights[i]->DepartureTime->Month << '.'
			<< flights[i]->DepartureTime->Day << '\t'
			<< flights[i]->DepartureTime->Hour << ':'
			<< flights[i]->DepartureTime->Minute << '.'
			<< "\tArrival " << flights[i]->PurposeTime->Month
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

	double Xcenter = 0.0;
	double Ycenter = 0.0;
	for (int i = 0; i < COUNT; i++)
	{
		Xcenter += rectangles[i]->Center->X;
		Ycenter += rectangles[i]->Center->Y;
	}

	Xcenter /= COUNT;
	Ycenter /= COUNT;
	cout << "Xcenter = " << Xcenter << "\tYcenter = " << Ycenter << endl;
	for (int i = 0; i < COUNT; i++)
	{
		delete rectangles[i]->Center;
		delete rectangles[i];
	}
}

void DemoBand()
{
	int songCount = 4;
	int albumsCount = 3;

	Song** songs1 = new Song * [songCount];
	songs1[0] = CreateSong("first", 1, Rock);
	songs1[1] = CreateSong("second", 2, Pop);
	songs1[2] = CreateSong("third", 3, HipHop);
	songs1[3] = CreateSong("fourth", 4, Jazz);

	Song** songs2 = new Song * [songCount];
	songs2[0] = CreateSong("One", 1, Jazz);
	songs2[1] = CreateSong("Two", 2, Pop);
	songs2[2] = CreateSong("Three", 3, HipHop);
	songs2[3] = CreateSong("Four", 4, Jazz);

	Song** songs3 = new Song * [songCount];
	songs3[0] = CreateSong("Song 1", 1, HipHop);
	songs3[1] = CreateSong("Song 2", 2, HipHop);
	songs3[2] = CreateSong("Song 3", 3, HipHop);
	songs3[3] = CreateSong("Song 4", 4, HipHop);

	Album** albums = new Album * [albumsCount];
	albums[0] = CreateAlbum("First Album", 1990, songCount, songs1);
	albums[1] = CreateAlbum("Second Album", 1999, songCount, songs2);
	albums[2] = CreateAlbum("Third Album", 2010, songCount, songs3);

	Band* band = CreateBand("Forever", "Forever young", albumsCount, albums);

	Song* foundSong = FindSong(band, "Song 1");
	cout << "Title: " << foundSong->SongTitle << '\t' << "Duration: "
		<< foundSong->DurationInSeconds
		<< '\t' << "Genre: " << foundSong->SongGenre << endl << endl;

	Album* foundAlbum = FindAlbum(band, songs2[2]);
	cout << "Album title: " << foundAlbum->AlbumTitle << '\t'
		<< "Issue Year: " << foundAlbum->IssueYear
		<< '\t' << "Songs Count: " << foundAlbum->SongsCount << endl << endl;

	int allSongsCount;
	Song** allSongs = GetAllSongs(band, allSongsCount);
	for (int i = 0; i < allSongsCount; i++)
	{
		cout << "Title: " << allSongs[i]->SongTitle << '\t'
			<< "Duration: " << allSongs[i]->DurationInSeconds
			<< '\t' << "Genre: " << allSongs[i]->SongGenre << endl;
	}
	cout << endl;

	int allSongsCountGenre;
	Song** allSongGenre = GetAllGenreSongs(band, HipHop, allSongsCountGenre);
	for (int i = 0; i < allSongsCountGenre; i++)
	{
		cout << "Title: " << allSongGenre[i]->SongTitle << '\t'
			<< "Duration: " << allSongGenre[i]->DurationInSeconds
			<< '\t' << "Genre: " << allSongGenre[i]->SongGenre << endl;
	}
}