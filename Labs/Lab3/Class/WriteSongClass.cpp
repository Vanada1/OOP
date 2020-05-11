#include "WriteSongClass.h"
#include <iostream>

using namespace std;

void WriteSong(Song* song)
{
	//TODO: Не совсем правильно сделано - что мешает возвращать строку, а консоль уже использовать снаружи?
	cout << "Title: " << song->GetSongTitle() << '\t'
		<< "Duration: " << song->GetDuration()
		<< '\t' << "Genre: " << song->GetSongGenre() << endl;
}