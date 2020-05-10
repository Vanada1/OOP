#pragma once
#include"../Genre.h"
#include <string>

struct Song
{
	std::string SongTitle;
	int DurationInSeconds;
	Genre SongGenre;
};

Song* CreateSong(std::string& songTitle, int durationInSeconds, Genre songGenre);
void SetSongTitle(Song* song, std::string& songTitle);
void SetDuration(Song* song, int durationInSeconds);
void SetGenre(Song* song, Genre genre);