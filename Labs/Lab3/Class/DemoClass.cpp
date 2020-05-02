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
	flights[0] = new Flight("A201", "Moscow", "Tomsk", 2020, 1, 23,
		12, 40, 2020, 1, 23, 16, 30);
	flights[1] = new Flight("A323", "Tomsk", "Moscow", 2020, 1, 23,
		12, 0, 2020, 1, 23, 16, 0);
	flights[2] = new Flight("S588", "Kemerovo", "Moscow", 2020, 3, 2,
		9, 30, 2020, 3, 2, 12, 30);
	flights[3] = new Flight("G023", "Moscow", "Kemerovo", 2020, 3, 2,
		9, 30, 2020, 3, 2, 12, 30);
	flights[4] = new Flight("MA404", "Kemerovo", "Tomsk", 2020, 6, 12,
		3, 0, 2020, 6, 12, 4, 0);

	for (int i = 0; i < COUNT; i++)
	{
		cout << flights[i]->GetFlightNumber() << "\t" << flights[i]->GetFrom() 
			<< '-' << flights[i]->GetPurpose() << "\t Departure "
			<< flights[i]->GetDepartureTime()->GetMonth() << '.'
			<< flights[i]->GetDepartureTime()->GetDay() << '\t'
			<< flights[i]->GetDepartureTime()->GetHour() << ':'
			<< flights[i]->GetDepartureTime()->GetMinute() << '.'
			<< "\tArrival " << flights[i]->GetPurposeTime()->GetMonth()
			<< flights[i]->GetPurposeTime()->GetDay()
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

	double Xcenter = 0.0;
	double Ycenter = 0.0;
	for (int i = 0; i < COUNT; i++)
	{
		Xcenter += rectangles[i]->GetCenter()->GetX();
		Ycenter += rectangles[i]->GetCenter()->GetY();
	}

	Xcenter /= COUNT;
	Ycenter /= COUNT;
	cout << "Xcenter = " << Xcenter << "\tYcenter = " << Ycenter << endl;
}

void DemoBandClass()
{
	int songCount = 4;
	int albumsCount = 3;

	Song** songs1 = new Song * [songCount];
	songs1[0] = new Song("first", 1, Rock);
	songs1[1] = new Song("second", 2, Pop);
	songs1[2] = new Song("third", 3, HipHop);
	songs1[3] = new Song("fourth", 4, Jazz);

	Song** songs2 = new Song * [songCount];
	songs2[0] = new Song("One", 1, Jazz);
	songs2[1] = new Song("Two", 2, Pop);
	songs2[2] = new Song("Three", 3, HipHop);
	songs2[3] = new Song("Four", 4, Jazz);

	Song** songs3 = new Song * [songCount];
	songs3[0] = new Song("Song 1", 1, HipHop);
	songs3[1] = new Song("Song 2", 2, HipHop);
	songs3[2] = new Song("Song 3", 3, HipHop);
	songs3[3] = new Song("Song 4", 4, HipHop);

	Album** albums = new Album * [albumsCount];
	albums[0] = new Album("First Album", 1990, songCount, songs1);
	albums[1] = new Album("Second Album", 1999, songCount, songs2);
	albums[2] = new Album("Third Album", 2010, songCount, songs3);

	Band* band = new Band("Forever", "Forever young", albumsCount, albums);

	Song* foundSong = band->FindSong("Song 1");
	cout << "Title: " << foundSong->GetSongTitle() << '\t' << "Duration: "
		<< foundSong->GetDuration()
		<< '\t' << "Genre: " << foundSong->GetSongGenre() << endl << endl;

	Album* foundAlbum = band->FindAlbum(songs2[2]);
	cout << "Album title: " << foundAlbum->GetAlbumTitle() << '\t'
		<< "Issue Year: " << foundAlbum->GetIssueYear()
		<< '\t' << "Songs Count: " << foundAlbum->GetSongsCount() 
		<< endl << endl;

	int allSongsCount;
	Song** allSongs = band->GetAllSongs(allSongsCount);
	for (int i = 0; i < allSongsCount; i++)
	{
		cout << "Title: " << allSongs[i]->GetSongTitle() << '\t'
			<< "Duration: " << allSongs[i]->GetDuration()
			<< '\t' << "Genre: " << allSongs[i]->GetSongGenre() << endl;
	}
	delete[] allSongs;
	cout << endl;

	int allSongsCountGenre;
	Song** allSongGenre = band->GetAllGenreSongs(HipHop, allSongsCountGenre);
	for (int i = 0; i < allSongsCountGenre; i++)
	{
		cout << "Title: " << allSongGenre[i]->GetSongTitle() << '\t'
			<< "Duration: " << allSongGenre[i]->GetDuration()
			<< '\t' << "Genre: " << allSongGenre[i]->GetSongGenre() << endl;
	}
	delete[] allSongGenre;
	delete[] songs1;
	delete[] songs2;
	delete[] songs3;
	delete[] albums;
}