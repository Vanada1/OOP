#include "Band.h"
#include <iostream>

using namespace std;

void DemoBand()
{
	int songCount = 4;
	int albumsCount = 3;

	Song** songs1 = new Song * [songCount];
	songs1[0] = CreateSong("first", 1, Rock);
	songs1[1] = CreateSong("second", 2, Pop);
	songs1[2] = CreateSong("third", 3, HipHop);
	songs1[3] = CreateSong("fourth", 4, Jazz);

	Song** songs2 = new Song * [songCount];
	songs2[0] = CreateSong("One", 1, Jazz);
	songs2[1] = CreateSong("Two", 2, Pop);
	songs2[2] = CreateSong("Three", 3, HipHop);
	songs2[3] = CreateSong("Four", 4, Jazz);

	Song** songs3 = new Song * [songCount];
	songs3[0] = CreateSong("Song 1", 1, HipHop);
	songs3[1] = CreateSong("Song 2", 2, HipHop);
	songs3[2] = CreateSong("Song 3", 3, HipHop);
	songs3[3] = CreateSong("Song 4", 4, HipHop);

	Album** albums = new Album * [albumsCount];
	albums[0] = CreateAlbum("First Album", 1990, songCount, songs1);
	albums[1] = CreateAlbum("Second Album", 1999, songCount, songs2);
	albums[2] = CreateAlbum("Third Album", 2010, songCount, songs3);

	Band* band = CreateBand("Forever", "Forever young", albumsCount, albums);

	Song* foundSong = FindSong(band, "Song 1");
	cout << "Title: " << foundSong->SongTitle << '\t' << "Duration: "
		<< foundSong->DurationInSeconds
		<< '\t' << "Genre: " << foundSong->SongGenre << endl << endl;

	Album* foundAlbum = FindAlbum(band, songs2[2]);
	cout << "Album title: " << foundAlbum->AlbumTitle << '\t'
		<< "Issue Year: " << foundAlbum->IssueYear
		<< '\t' << "Songs Count: " << foundAlbum->SongsCount << endl << endl;

	int allSongsCount;
	Song** allSongs = GetAllSongs(band, allSongsCount);
	for (int i = 0; i < allSongsCount; i++)
	{
		cout << "Title: " << allSongs[i]->SongTitle << '\t'
			<< "Duration: " << allSongs[i]->DurationInSeconds
			<< '\t' << "Genre: " << allSongs[i]->SongGenre << endl;
	}
	cout << endl;

	int allSongsCountGenre;
	Song** allSongGenre = GetAllGenreSongs(band, HipHop, allSongsCountGenre);
	for (int i = 0; i < allSongsCountGenre; i++)
	{
		cout << "Title: " << allSongGenre[i]->SongTitle << '\t'
			<< "Duration: " << allSongGenre[i]->DurationInSeconds
			<< '\t' << "Genre: " << allSongGenre[i]->SongGenre << endl;
	}
}

Band* CreateBand(string nameBand, string description, 
	int albumsCount, Album** albums)
{
	Band* newBand = new Band;
	SetNameBand(newBand, nameBand);
	SetDescription(newBand, description);
	SetAlbums(newBand, albumsCount, albums);
	return newBand;
}

void SetNameBand(Band* band, string nameBand)
{
	band->NameBand = nameBand;
}

void SetDescription(Band* band, string description)
{
	band->Description = description;
}

void SetAlbums(Band* band, int albumsCount, Album** albums)
{
	if (band->Albums)
	{
		delete[] band->Albums;
	}
	band->AlbumsCount = albumsCount;
	band->Albums = albums;
}

Song* FindSong(Band* band, string songTitle)
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
			if (band->Albums[i]->Songs[j] == song)
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