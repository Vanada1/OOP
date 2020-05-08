#include "Song.h"
#include <iostream>

using namespace std;

//TODO: ������ �� ������ Done
Song* CreateSong(string& songTitle, int durationInSeconds, Genre songGenre)
{
	Song* newSong = new Song();
	SetSongTitle(newSong, songTitle);
	SetDuration(newSong, durationInSeconds);
	SetGenre(newSong, songGenre);
	return newSong;
}
//TODO: ������ �� ������ Done
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
	cout << "Title: " << song->SongTitle << '\t'
		<< "Duration: " << song->DurationInSeconds
		<< '\t' << "Genre: " << song->SongGenre << endl;
}
