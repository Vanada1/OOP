#include "WriteSong.h"
#include <iostream>

using namespace std;

string WriteSong(Song* song)
{
	//TODO: �� ������ ��������� ������� - ��� ������ ���������� ������, � ������� ��� ������������ �������? (Done)
	return "Title: " + song->SongTitle + '\t' + "Duration: " +
		to_string(song->DurationInSeconds) + '\t' + "Genre: " +
		to_string(song->SongGenre);
}