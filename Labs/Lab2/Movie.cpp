#include "Movie.h"
#include"../General Files/Read.h"
#include<iostream>

using namespace std;

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

void  ReadMovie(Movie& movie)
{
    cout << "Movie name: ";
    movie.Name = Read<string>();
    cout << endl;
    cout << "Duration in minute: ";
    movie.DurationMinute = Read<int>();
    cout << endl;
    cout << "Year: ";
    movie.Year = Read<int>();
    cout << endl;
    cout << "Genre: ";
    movie.MovieGenre = ReadGenre();
    cout << endl;
    cout << "Rating: ";
    movie.Rating = Read<int>();
    cout << endl;
}

void WriteMovie(Movie& movie)
{
    cout << "The  movie: " << movie.Name << endl;
    cout << "Duration in minute: " << movie.DurationMinute << endl;
    cout << "Year: " << movie.Year << endl;
    cout << "Genre: ";
    WriteGenre(movie.MovieGenre);
    cout << endl;
    cout << "Rating: " << movie.Rating << endl;
}