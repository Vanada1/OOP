#pragma once
#include"Genre.h"
#include<string>

class Song
{
	private:
		std::string _songTitle;
		int _durationInSeconds;
		Genre _songGenre;

	public:
		void SetSongTitle(std::string songTitle);
		void SetDuration(int durationInSeconds);
		void SetGenre(Genre genre);

		Song(std::string songTitle, int durationInSeconds, Genre songGenre);
		~Song();
};