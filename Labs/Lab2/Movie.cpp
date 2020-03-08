#include "Movie.h"

Movie* MakeMovie(std::string name, int duration,
    int year, std::string ganre, double rating)
{
    Movie* newMove = new Movie();
    newMove->Name = name;
    newMove->DurationMinute = duration;
    newMove->Year = year;
    newMove->Genre = ganre;
    newMove->Rating = rating;
    return newMove;
}

Movie* CoppyMovie(Movie& movie)
{
    Movie* coppyMove = new Movie();
    coppyMove->Name = movie.Name;
    coppyMove->DurationMinute = movie.DurationMinute;
    coppyMove->Year = movie.Year;
    coppyMove->Genre = movie.Genre;
    coppyMove->Rating = movie.Rating;
    return coppyMove;
}