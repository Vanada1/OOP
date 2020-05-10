#include "Song.h"
#include <iostream>

using namespace std;

Song* CreateSong(string& songTitle, int durationInSeconds, Genre songGenre)
{
	Song* newSong = new Song();
	SetSongTitle(newSong, songTitle);
	SetDuration(newSong, durationInSeconds);
	SetGenre(newSong, songGenre);
	return newSong;
}

void SetSongTitle(Song* song, string& songTitle)
{
	song->SongTitle = songTitle;
}

void SetDuration(Song* song, int durationInSeconds)
{
	song->DurationInSeconds = durationInSeconds;
}

void SetGenre(Song* song, Genre genre)
{
	song->SongGenre = genre;
}

void WriteSong(Song* song)
{
	//TODO: ���� ��������� ��� �������, ��� � � ������
	cout << "Title: " << song->SongTitle << '\t'
		<< "Duration: " << song->DurationInSeconds
		<< '\t' << "Genre: " << song->SongGenre << endl;
}
