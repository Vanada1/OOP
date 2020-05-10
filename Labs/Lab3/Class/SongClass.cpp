#include"SongClass.h"
#include<exception>
#include <iostream>

using namespace std;

Song::Song(string& songTitle, int durationInSeconds, Genre songGenre)
{
	this->SetSongTitle(songTitle);
	this->SetDuration(durationInSeconds);
	this->SetGenre(songGenre);
}

Song::~Song()
{
	delete this;
}

void Song::SetSongTitle(string& songTitle)
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

void Song::WriteSong()
{
	//TODO: Не правильно вынесено, в логику класса добавлена связь с консолью. Консоли тут не должно быть.
	cout << "Title: " << this->GetSongTitle() << '\t'
		<< "Duration: " << this->GetDuration()
		<< '\t' << "Genre: " << this->GetSongGenre() << endl;
}