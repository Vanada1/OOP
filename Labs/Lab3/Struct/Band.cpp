#include "Band.h"
#include <iostream>

using namespace std;

Band* CreateBand(string& nameBand, string& description, 
	int albumsCount, Album** albums)
{
	Band* newBand = new Band;
	SetNameBand(newBand, nameBand);
	SetDescription(newBand, description);
	SetAlbums(newBand, albumsCount, albums);
	return newBand;
}

void SetNameBand(Band* band, string& nameBand)
{
	band->NameBand = nameBand;
}

void SetDescription(Band* band, string& description)
{
	band->Description = description;
}

void SetAlbums(Band* band, int albumsCount, Album** albums)
{
	delete[] band->Albums;
	band->AlbumsCount = albumsCount;
	band->Albums = albums;
}

Song* FindSong(Band* band, string& songTitle)
{
	for (int i = 0; i < band->AlbumsCount; i++)
	{
		for (int j = 0; j < band->Albums[i]->SongsCount; j++)
		{
			if (band->Albums[i]->Songs[j]->SongTitle == songTitle)
			{
				return band->Albums[i]->Songs[j];
			}
		}
	}
	return nullptr;
}

Album* FindAlbum(Band* band, Song* song)
{
	for (int i = 0; i < band->AlbumsCount; i++)
	{
		for (int j = 0; j < band->Albums[i]->SongsCount; j++)
		{
			if (band->Albums[i]->Songs[j]->SongTitle == song->SongTitle
				&& band->Albums[i]->Songs[j]->SongGenre ==
				song->SongGenre
				&& band->Albums[i]->Songs[j]->DurationInSeconds ==
				song->DurationInSeconds)
			{
				return band->Albums[i];
			}
		}
	}
	return nullptr;
}

Song** GetAllSongs(Band* band, int& allSongsCount)
{
	allSongsCount = 0;
	for (int i = 0; i < band->AlbumsCount; i++)
	{
		allSongsCount += band->Albums[i]->SongsCount;
	}
	Song** allSongs = new Song * [allSongsCount];
	int indexAllSongs = 0;
	for (int i = 0; i < band->AlbumsCount; i++)
	{
		for (int j = 0; j < band->Albums[i]->SongsCount; j++)
		{
			allSongs[indexAllSongs] = band->Albums[i]->Songs[j];
			indexAllSongs++;
		}
	}
	return allSongs;
}

Song** GetAllGenreSongs(Band* band, Genre findingGenre, int& allSongsCount)
{
	allSongsCount = 0;
	for (int i = 0; i < band->AlbumsCount; i++)
	{
		for (int j = 0; j < band->Albums[i]->SongsCount; j++)
		{
			if (band->Albums[i]->Songs[j]->SongGenre == findingGenre)
			{
				allSongsCount++;
			}
		}

	}
	Song** allSongs = new Song * [allSongsCount];
	int indexAllSongs = 0;
	for (int i = 0; i < band->AlbumsCount; i++)
	{
		for (int j = 0; j < band->Albums[i]->SongsCount; j++)
		{
			if (band->Albums[i]->Songs[j]->SongGenre == findingGenre)
			{
				allSongs[indexAllSongs] = band->Albums[i]->Songs[j];
				indexAllSongs++;
			}
		}
	}
	return allSongs;
}