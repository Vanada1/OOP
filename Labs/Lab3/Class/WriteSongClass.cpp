#include "WriteSongClass.h"

//TODO: ������
#include <iostream>

using namespace std;

//TODO: � ����� ���� ��� ����� ���� �� � � ����� ������, �� ��������
string WriteSong(Song* song)
{
	return "Title: " + song->GetSongTitle() + '\t' + "Duration: " +
		to_string(song->GetDuration()) + '\t' + "Genre: " +
		to_string(song->GetSongGenre());
}