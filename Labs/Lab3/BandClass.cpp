#include "BandClass.h"

Band::Band(std::string nameBand, std::string description,
	int albumsCount, Album** albums)
{
	this->SetNameBand(nameBand);
	this->SetDescription(description);
	this->SetAlbums(albumsCount, albums);
}

Band::~Band()
{

}

void Band::SetNameBand(std::string nameBand)
{
	this->_nameBand = nameBand;
}

void Band::SetDescription(std::string description)
{
	this->_description = description;
}

void Band::SetAlbums(int albumsCount, Album** albums)
{
	if (this->_albums)
	{
		delete[] this->_albums;
	}
	this->_albumsCount = albumsCount;
	this->_albums = albums;
}

Song* Band::FindSong(std::string songTitle)
{
	return nullptr;
}

Album* Band::FindAlbum(Song* song)
{
	return nullptr;
}

Song** Band::GetAllSongs(int& allSongsCount)
{
	return nullptr;
}

Song** Band::GetAllGenreSongs(Genre findingGenre, int& allSongsCount)
{
	return nullptr;
}
