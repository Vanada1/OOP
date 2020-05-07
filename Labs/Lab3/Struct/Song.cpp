#include "Song.h"

using namespace std;

//TODO: строку по ссылке
Song* CreateSong(string songTitle, int durationInSeconds, Genre songGenre)
{
	Song* newSong = new Song();
	SetSongTitle(newSong, songTitle);
	SetDuration(newSong, durationInSeconds);
	SetGenre(newSong, songGenre);
	return newSong;
}
//TODO: строку по ссылке
void SetSongTitle(Song* song, string songTitle)
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
