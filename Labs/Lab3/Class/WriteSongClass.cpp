#include "WriteSongClass.h"
#include <iostream>

using namespace std;

void WriteSong(Song* song)
{
	//TODO: �� ������ ��������� ������� - ��� ������ ���������� ������, � ������� ��� ������������ �������?
	cout << "Title: " << song->GetSongTitle() << '\t'
		<< "Duration: " << song->GetDuration()
		<< '\t' << "Genre: " << song->GetSongGenre() << endl;
}