#include"SongClass.h"
#include<exception>

using namespace std;

Song::Song(string songTitle, int durationInSeconds, Genre songGenre)
{
	this->SetSongTitle(songTitle);
	this->SetDuration(durationInSeconds);
	this->SetGenre(songGenre);
}

Song::~Song()
{

}

void Song::SetSongTitle(string songTitle)
{
	this->_songTitle = songTitle;
}

void Song::SetDuration(int durationInSeconds)
{
	if (durationInSeconds < 0)
	{
		throw exception("Error");
	}
	this->_durationInSeconds = durationInSeconds;
}

void Song::SetGenre(Genre genre)
{
	this->_songGenre = genre;
}

string Song::GetSongTitle()
{
	return this->_songTitle;
}

int Song::GetDuration()
{
	return this->_durationInSeconds;
}

Genre Song::GetSongGenre()
{
	return this->_songGenre;
}