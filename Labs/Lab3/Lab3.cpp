#include <iostream>
#include "Book.h"
#include "Route.h"
#include "Rectangle.h"
#include "Flight.h"
#include "Album.h"
#include "Band.h"

using namespace std;

int main()
{
    const int COUNT = 2;
    /*Book book;
    ReadBookFromConsole(book);
    WriteBookToConsole(book);
    delete[] book.Authors;*/
    //DemoBook();
    //DemoRoute();
    //DemoRecangleWithPoint();
    //DemoFlightWithTime();
    /*Song** songs = new Song*[COUNT];
    songs[0] = CreateSong("1", 1, Pop);
    Album* album = CreateAlbum("Name", 1999, COUNT, songs);
    SetSongs(album, COUNT, songs);*/
    DemoBand();
}