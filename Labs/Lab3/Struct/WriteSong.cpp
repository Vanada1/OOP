#include "WriteSong.h"
#include <iostream>

using namespace std;

void WriteSong(Song* song)
{
	//TODO: Не совсем правильно сделано - что мешает возвращать строку, а консоль уже использовать снаружи?
	cout << "Title: " << song->SongTitle << '\t'
		<< "Duration: " << song->DurationInSeconds
		<< '\t' << "Genre: " << song->SongGenre << endl;
}