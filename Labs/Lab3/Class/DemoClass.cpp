#include "BandClass.h"
#include "FlightClass.h"
#include "RectangleClass.h"
#include "DemoClass.h"
#include <iostream>

using namespace std;

const int COUNT = 5;

void DemoFlightWithTimeClass()
{
	Flight* flights[COUNT];
	Time* departureTime1 = new Time(2020, 12, 30, 12, 40);
	Time* purposeTime1 = new Time(2021, 1, 1, 16, 30);
	string flightNumber = "A201";
	string from = "Moscow";
	string purpose = "Tomsk";
	flights[0] = new Flight(flightNumber, from, purpose, departureTime1,
		purposeTime1);

	flightNumber = "A323";
	from = "Tomsk";
	purpose = "Moscow";
	Time* departureTime2 = new Time(2020, 1, 23, 12, 0);
	Time* purposeTime2 = new Time(2020, 1, 23, 16, 0);
	flights[1] = new Flight(flightNumber, from, purpose, departureTime2,
		purposeTime2);

	flightNumber = "S588";
	from = "Kemerovo";
	purpose = "Moscow";
	Time* departureTime3 = new Time(2020, 3, 2, 9, 30);
	Time* purposeTime3 = new Time(2020, 3, 2, 12, 30);
	flights[2] = new Flight(flightNumber, from, purpose, departureTime3,
		purposeTime3);

	flightNumber = "G023";
	from = "Moscow";
	purpose = "Kemerovo";
	Time* departureTime4 = new Time(2020, 3, 2, 9, 30);
	Time* purposeTime4 = new Time(2020, 3, 2, 12, 30);
	flights[3] = new Flight(flightNumber, from, purpose, departureTime4,
		purposeTime4);

	flightNumber = "MA404";
	from = "Kemerovo";
	purpose = "Tomsk";
	Time* departureTime5 = new Time(2020, 6, 12, 3, 0);
	Time* purposeTime5 = new Time(2020, 6, 12, 4, 0);
	flights[4] = new Flight(flightNumber, from, purpose, departureTime5,
		purposeTime5);

	for (int i = 0; i < COUNT; i++)
	{
		cout << flights[i]->GetFlightNumber() << "\t" << flights[i]->GetFrom() 
			<< '-' << flights[i]->GetPurpose() << "\t Departure "
			<< flights[i]->GetDepartureTime()->GetMonth() << '.'
			<< flights[i]->GetDepartureTime()->GetDay() << '\t'
			<< flights[i]->GetDepartureTime()->GetHour() << ':'
			<< flights[i]->GetDepartureTime()->GetMinute() 
			<< "\tArrival " << flights[i]->GetPurposeTime()->GetMonth()
			<< '.' << flights[i]->GetPurposeTime()->GetDay()
			<< '\t' << flights[i]->GetPurposeTime()->GetHour() << ':'
			<< flights[i]->GetPurposeTime()->GetMinute() << endl;
	}

	int timeDifference = flights[0]->GetFlightTimeMinutes();
	int minutesInHour = 60;
	cout << flights[0]->GetFlightNumber() << "\t" << flights[0]->GetFrom() 
		<< '-' << flights[0]->GetPurpose() << "\tFlight time: "
		<< timeDifference / minutesInHour << "h "
		<< timeDifference % minutesInHour << "min" << endl;
}

void DemoRecangleWithPointClass()
{
	Rectangle* rectangles[COUNT];
	rectangles[0] = new Rectangle(0.0, 0.0, 8.1, 25.23);
	rectangles[1] = new Rectangle(1.0, 21.0, 81.0, 223.8);
	rectangles[2] = new Rectangle(2.0, 45.0, 25.45, 4.3);
	rectangles[3] = new Rectangle(3.0, 35.0, 99.2, 3.2);
	rectangles[4] = new Rectangle(4.0, 100.0, 853.205, 70.23);

	for (int i = 0; i < COUNT; i++)
	{
		cout << "X = " << rectangles[i]->GetCenter()->GetX()
			<< "\tY = " << rectangles[i]->GetCenter()->GetY()
			<< "\tLength = " << rectangles[i]->GetLength()
			<< "\tWidth = " << rectangles[i]->GetWidth() << endl;
	}

	double xCenter = 0.0;
	double yCenter = 0.0;
	for (int i = 0; i < COUNT; i++)
	{
		xCenter += rectangles[i]->GetCenter()->GetX();
		yCenter += rectangles[i]->GetCenter()->GetY();
	}

	xCenter /= COUNT;
	yCenter /= COUNT;
	cout << "Xcenter = " << xCenter << "\tYcenter = " << yCenter << endl;
}

void DemoBandClass()
{
	const int songCount = 4;
	const int albumsCount = 3;

	Song** songs1 = new Song * [songCount];
	string nameSong1 = "first";
	string nameSong2 = "second";
	string nameSong3 = "third";
	string nameSong4 = "fourth";
	songs1[0] = new Song(nameSong1, 1, Rock);
	songs1[1] = new Song(nameSong2, 2, Pop);
	songs1[2] = new Song(nameSong3, 3, HipHop);
	songs1[3] = new Song(nameSong4, 4, Jazz);

	Song** songs2 = new Song * [songCount];
	nameSong1 = "One";
	nameSong2 = "Two";
	nameSong3 = "Three";
	nameSong4 = "Four";
	songs2[0] = new Song(nameSong1, 1, Jazz);
	songs2[1] = new Song(nameSong2, 2, Pop);
	songs2[2] = new Song(nameSong3, 3, HipHop);
	songs2[3] = new Song(nameSong4, 4, Jazz);

	Song** songs3 = new Song * [songCount];
	nameSong1 = "Song 1";
	nameSong2 = "Song 2";
	nameSong3 = "Song 3";
	nameSong4 = "Song 4";
	songs3[0] = new Song(nameSong1, 1, HipHop);
	songs3[1] = new Song(nameSong2, 2, HipHop);
	songs3[2] = new Song(nameSong3, 3, HipHop);
	songs3[3] = new Song(nameSong4, 4, HipHop);

	Album** albums = new Album * [albumsCount];
	string nameAlbum1 = "First Album";
	string nameAlbum2 = "Second Album";
	string nameAlbum3 = "Third Album";
	albums[0] = new Album(nameAlbum1, 1990, songCount, songs1);
	albums[1] = new Album(nameAlbum2, 1999, songCount, songs2);
	albums[2] = new Album(nameAlbum3, 2010, songCount, songs3);

	string nameBand = "Forever";
	string description = "Forever young";
	Band* band = new Band(nameBand, description, albumsCount, albums);

	string foundSongName = "Song 1";
	Song* foundSong = band->FindSong(foundSongName);
	if (foundSong != nullptr)
	{
		cout << foundSong->WriteSong() << endl;
	}
	else
	{
		cout << "Not found" << endl;
	}

	Album* foundAlbum = band->FindAlbum(songs2[2]);
	if (foundAlbum != nullptr)
	{
		cout << "Album title: " << foundAlbum->GetAlbumTitle() << '\t'
			<< "Issue Year: " << foundAlbum->GetIssueYear()
			<< '\t' << "Songs Count: " << foundAlbum->GetSongsCount()
			<< endl << endl;
	}
	else
	{
		cout << "Not found" << endl;
	}
	
	int allSongsCount;
	Song** allSongs = band->GetAllSongs(allSongsCount);
	for (int i = 0; i < allSongsCount; i++)
	{
		cout << allSongs[i]->WriteSong() << endl;
	}
	delete[] allSongs;
	cout << endl;

	int allSongsCountGenre;
	Song** allSongGenre = band->GetAllGenreSongs(HipHop, allSongsCountGenre);
	for (int i = 0; i < allSongsCountGenre; i++)
	{
		cout << allSongGenre[i]->WriteSong() << endl;
	}
	delete[] allSongGenre;
	delete[] songs1;
	delete[] songs2;
	delete[] songs3;
	delete[] albums;
}