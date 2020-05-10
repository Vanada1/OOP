#include "WriteSongClass.h"
#include <iostream>

using namespace std;

void WriteSong(Song* song)
{
	//TODO: Не правильно вынесено, в логику класса добавлена связь с консолью. Консоли тут не должно быть. (Done)
	cout << "Title: " << song->GetSongTitle() << '\t'
		<< "Duration: " << song->GetDuration()
		<< '\t' << "Genre: " << song->GetSongGenre() << endl;
}