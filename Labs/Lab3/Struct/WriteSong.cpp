#include "WriteSong.h"
#include <iostream>

using namespace std;

void WriteSong(Song* song)
{
	//TODO: ���� ��������� ��� �������, ��� � � ������ (Done)
	cout << "Title: " << song->SongTitle << '\t'
		<< "Duration: " << song->DurationInSeconds
		<< '\t' << "Genre: " << song->SongGenre << endl;
}