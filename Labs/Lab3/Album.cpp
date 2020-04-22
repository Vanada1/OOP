#include "Album.h"

using namespace std;

Album* CreateAlbum(string albumTitle, int issueYear, int songsCount, Song** songs)
{
	Album* newAlbum = new Album();
	newAlbum->AlbumTitle = albumTitle;
	newAlbum->IssueYear = issueYear;
	newAlbum->SongsCount = songsCount;
	newAlbum->Songs = songs;
	return newAlbum;
}

void SetAlbumTitle(Album* album, string albumTitle)
{
	album->AlbumTitle = albumTitle;
}

void SetIssueYear(Album* album, int issueYear)
{
	album->IssueYear = issueYear;
}

void SetSongs(Album* album, int songsCount, Song** songs)
{
	if (album->Songs)
	{
		delete[] album->Songs;
	}
	album->SongsCount = songsCount;
	album->Songs = songs;
}