#include "Song.h"

using namespace std;

Song* CreateSong(string songTitle, int durationInSeconds, Genre songGenre)
{
	Song* newSong = new Song();
	newSong->SongTitle = songTitle;
	newSong->DurationInSeconds = durationInSeconds;
	newSong->SongGenre = songGenre;
	return newSong;
}

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
