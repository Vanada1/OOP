#pragma once

enum Genre
{
	Comedy,
	Drama,
	Thriller,
	Action,
	Horror,
	Blockbuster
};
//TODO: naming - display
void WriteGenre(Genre);
//TODO: naming - enter
Genre ReadGenre();