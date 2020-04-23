#pragma once
#include "Album.h"
#include <string>

struct Band
{
	std::string NameBand;
	std::string Description;
	int AlbumsCount;
	Album** Albums = nullptr;
};

Band* CreateBand(std::string nameBand, std::string description,
	int albumsCount, Album** albums);
void SetNameBand(Band* band, std::string nameBand);
void SetDescription(Band* band, std::string description);
void SetAlbums(Band* band, int albumsCount, Album** albums);
Song* FindSong(Band* band, std::string songTitle);
Album* FindAlbum(Band* band, Song* song);
Song** GetAllSongs(Band* band, int& allSongsCount);
Song** GetAllGenreSongs(Band* band, Genre findingGenre, int& allSongsCount);