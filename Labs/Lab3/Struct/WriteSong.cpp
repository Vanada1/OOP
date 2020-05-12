#include "WriteSong.h"
//TODO: Убрать
#include <iostream>

using namespace std;

string WriteSong(Song* song)
{
	//TODO: В таком виде уже можно было бы и в файл с методами к структуре внести, не разделяя
	return "Title: " + song->SongTitle + '\t' + "Duration: " +
		to_string(song->DurationInSeconds) + '\t' + "Genre: " +
		to_string(song->SongGenre);
}