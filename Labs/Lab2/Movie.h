#pragma once
#include <string>

struct Movie
{
	std::string Name;
	int DurationMinute;
	int Year;
	std::string Genre;
	double Rating;
};

//2.2.7.2
Movie* MakeMovie(std::string, int, int, std::string, double);
//2.2.7.3
Movie* CoppyMovie(Movie&);