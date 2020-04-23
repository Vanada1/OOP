#pragma once
#include "SongClass.h"
#include <string>

class Album
{
	private:
		std::string _albumTitle;
		int _issueYear;
		int _songsCount;
		Song** _songs = nullptr;

	public:
		void SetAlbumTitle(std::string albumTitle);
		void SetIssueYear(int issueYear);
		void SetSongs(int songsCount, Song** songs);

		Album(std::string albumTitle, int issueYear, int songsCount,
			Song** songs);
		~Album();
};