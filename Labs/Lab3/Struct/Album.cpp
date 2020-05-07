#include "Album.h"
#include <exception>

using namespace std;
//TODO: ������ �� ������
Album* CreateAlbum(string albumTitle, int issueYear, int songsCount,
	Song** songs)
{
	Album* newAlbum = new Album();
	SetAlbumTitle(newAlbum, albumTitle); 
	SetIssueYear(newAlbum, issueYear);
	SetSongs(newAlbum, songsCount, songs);
	return newAlbum;
}
//TODO: ������ �� ������
void SetAlbumTitle(Album* album, string albumTitle)
{
	album->AlbumTitle = albumTitle;
}

void SetIssueYear(Album* album, int issueYear)
{
	if (issueYear < 0)
	{
		throw exception("Issue year cannot be negative");
	}
	album->IssueYear = issueYear;
}

void SetSongs(Album* album, int songsCount, Song** songs)
{
	//TODO: ��������� � nullptr ����� ������ ����
	if (album->Songs)
	{
		delete[] album->Songs;
	}
	album->SongsCount = songsCount;
	album->Songs = songs;
}