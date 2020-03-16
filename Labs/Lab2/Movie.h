#pragma once
#include"Genre.h"
#include <string>

struct Movie
{
	std::string Name;
	int DurationMinute;
	int Year;
	Genre MovieGenre;
	double Rating;
};

//TODO: naming - create
//2.2.7.2
Movie* MakeMovie(std::string, int, int, Genre, double);
//TODO: naming
//2.2.7.3
Movie* CoppyMovie(Movie&);
//2.2.9.4
int CountMoviesByGenre(Movie*, int, Genre);
//2.2.9.5
Movie* FindBestGenreMovie(Movie*, int, Genre);
//TODO: naming - enter
void ReadMovie(Movie&);
//TODO: naming - display
void WriteMovie(Movie&);