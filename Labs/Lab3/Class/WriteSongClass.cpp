#include "WriteSongClass.h"
#include <iostream>

using namespace std;

void WriteSong(Song* song)
{
	//TODO: �� ��������� ��������, � ������ ������ ��������� ����� � ��������. ������� ��� �� ������ ����. (Done)
	cout << "Title: " << song->GetSongTitle() << '\t'
		<< "Duration: " << song->GetDuration()
		<< '\t' << "Genre: " << song->GetSongGenre() << endl;
}