#pragma once
#include "Song.h"
#include <string>

struct Album
{
	std::string AlbumTitle;
	int IssueYear;
	int SongsCount;
	Song** Songs = nullptr;
};

Album* CreateAlbum(std::string albumTitle, int issueYear, int songsCount, 
	Song** songs);
void SetAlbumTitle(Album* album, std::string albumTitle);
void SetIssueYear(Album* album, int issueYear);
void SetSongs(Album* album, int songsCount, Song** songs);