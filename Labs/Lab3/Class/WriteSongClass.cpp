#include "WriteSongClass.h"

//TODO: Убрать

using namespace std;

//TODO: В таком виде уже можно было бы и в класс внести, не разделяя
string WriteSong(Song* song)
{
	return "Title: " + song->GetSongTitle() + '\t' + "Duration: " +
		to_string(song->GetDuration()) + '\t' + "Genre: " +
		to_string(song->GetSongGenre());
}