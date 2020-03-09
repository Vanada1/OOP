#include "Movie.h"

Movie* MakeMovie(std::string name, int duration,
    int year, Genre ganre, double rating)
{
    Movie* newMove = new Movie();
    newMove->Name = name;
    newMove->DurationMinute = duration;
    newMove->Year = year;
    newMove->MovieGenre = ganre;
    newMove->Rating = rating;
    return newMove;
}

Movie* CoppyMovie(Movie& movie)
{
    Movie* coppyMove = new Movie();
    coppyMove->Name = movie.Name;
    coppyMove->DurationMinute = movie.DurationMinute;
    coppyMove->Year = movie.Year;
    coppyMove->MovieGenre = movie.MovieGenre;
    coppyMove->Rating = movie.Rating;
    return coppyMove;
}

int CountMoviesByGenre(Movie* movies, int count, Genre genre)
{
    int genreCounter = 0;
    for (int i = 0; i < count; i++)
    {
        if (movies[i].MovieGenre == genre)
        {
            genreCounter++;
        }
    }
    return genreCounter;
}
//2.2.9.5
Movie* FindBestGenreMovie(Movie* movies, int count, Genre  genre)
{
    Movie* searchBest = nullptr;
    for (int i = 0; i < count; i++)
    {
        if (movies[i].MovieGenre == genre)
        {
            if (!searchBest || searchBest->Rating < movies[i].Rating)
            {
                searchBest = &movies[i];
            }
        }
    }
    return searchBest;
}