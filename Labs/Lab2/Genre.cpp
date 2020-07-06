#include "Genre.h"
#include"../General Files/Read.h"
#include <iostream>

using namespace std;

void WriteGenre(Genre genre)
{
	switch (genre)
	{
        case Comedy:
        {
            cout << " Comedy " << endl;
            break;
        }
        case Drama:
        {
            cout << " Drama " << endl;
            break;
        }
        case Thriller:
        {
            cout << " Thriller " << endl;
            break;
        }
        case Action:
        {
            cout << " Action " << endl;
            break;
        }
        case Horror:
        {
            cout << " Horror " << endl;
            break;
        }
        case Blockbuster:
        {
            cout << " Blockbuster " << endl;
            break;
        }
        default:
        {
            cout << " Unknown " << endl;
            break;
        }
	}
}

Genre ReadGenre()
{
	cout << "Input the number from 0 to 5 "
		<< "(0 - Comedy, 1 - Drama, 2 - Thriller, "
		<< "3 - Action, 4 - Horror,"
		<< "5 - Blockbuster):" << endl;
	const int colorNum = Read<int>();
	Genre  genre;
	switch (colorNum)
	{
		case 0:
		{
			genre = Comedy;
			break;
		}
		case 1:
		{
			genre = Drama;
			break;
		}
		case 2:
		{
			genre = Thriller;
			break;
		}
		case 3:
		{
			genre = Action;
			break;
		}
		case 4:
		{
			genre = Horror;
			break;
		}
		case 5:
		{
			genre = Blockbuster;
			break;
		}
		default:
		{
			cout << "Strange number! I'll take Horror!" << endl;
			genre = Horror;
			break;
		}
	}
	return genre;
}