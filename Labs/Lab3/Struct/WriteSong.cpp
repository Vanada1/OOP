#include "WriteSong.h"
//TODO: ������
#include <iostream>

using namespace std;

string WriteSong(Song* song)
{
	//TODO: � ����� ���� ��� ����� ���� �� � � ���� � �������� � ��������� ������, �� ��������
	return "Title: " + song->SongTitle + '\t' + "Duration: " +
		to_string(song->DurationInSeconds) + '\t' + "Genre: " +
		to_string(song->SongGenre);
}