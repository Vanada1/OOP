#include "WriteSongClass.h"
#include <iostream>

using namespace std;

string WriteSong(Song* song)
{
	//TODO: �� ������ ��������� ������� - ��� ������ ���������� ������, � ������� ��� ������������ �������? (Done)
	return "Title: " + song->GetSongTitle() + '\t' + "Duration: " +
		to_string(song->GetDuration()) + '\t' + "Genre: " +
		to_string(song->GetSongGenre());
}