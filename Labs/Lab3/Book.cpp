#define _CRT_SECURE_NO_WARNINGS
#include "Book.h"
#include "../General Files/Read.h"
#include <iostream>
#include <ctime>
#include <exception>

using namespace std;

void DemoBook()
{
	const int COUNTELEMENTS = 2;
	Book books[COUNTELEMENTS];
	for (int i = 0; i < COUNTELEMENTS; i++)
	{
		ReadBookFromConsole(books[i]);
	}
	cout << "Which author to find?" << endl;
	string author = Read<string>();
	int foundIndex = FindBookByAuthor(books, COUNTELEMENTS, author);
	if (foundIndex < 0)
	{
		cout << "Not found";
	}
	else
	{
		WriteBookToConsole(books[foundIndex]);
	}
	/*for (int i = 0; i < COUNTELEMENTS; i++)
	{
		WriteBookToConsole(books[i]);
	}*/
	for (int i = 0; i < COUNTELEMENTS; i++)
	{
		delete[] books[i].Authors;
	}
}

void ReadBookFromConsole(Book& book)
{
	cout << "Enter book name: ";
	getline(cin, book.BookName);
	cout << endl;

	
	while (true)
	{
		cout << "Enter book year: ";
		time_t timer;
		time(&timer);
		struct tm* calendarTime = localtime(&timer);
		book.Year = Read<int>();
		cout << endl;
		int firstYear = 1900;
		if (book.Year > calendarTime->tm_year + firstYear)
		{
			cout << "The year is too large, try again" << endl;
		}
		else
		{
			break;
		}
	}

	while (true)
	{
		cout << "Enter number pages: ";
		book.NumberPages = Read<int>();
		cout << endl;
		if (book.NumberPages <= 0)
		{
			cout << "Number pages cannot be negative or equal to 0"
				<< ", try again" << endl;
		}
		else
		{
			break;
		}
	}

	while (true)
	{
		cout << "Enter number authors: ";
		book.NumberAuthors = Read<int>();
		cout << endl;
		if (book.NumberAuthors <= 0)
		{
			cout << "Number pages cannot be negative or equal to 0"
				<< ", try again" << endl;
		}
		else
		{
			break;
		}
	}

	book.Authors = new string[book.NumberAuthors];
	for (int i = 0; i < book.NumberAuthors; i++)
	{
		if (i == 0)
		{
			cin.ignore();
		}
		cout << "Enter author name: ";
		getline(cin, book.Authors[i]);
		cout << endl;
	}
}

void WriteBookToConsole(Book& book)
{
	for (int i = 0; i < book.NumberAuthors - 1; i++)
	{
		cout << book.Authors[i] << ", ";
	}
	cout << book.Authors[book.NumberAuthors - 1];
	string& lastAuthor = book.Authors[book.NumberAuthors - 1];
	int countSymbol = lastAuthor.length();
	if (lastAuthor[countSymbol - 1] != '.')
	{
		cout << '.';
	}
	cout << ' ' << book.Year << ". - " << book.NumberPages
		<< "p." << endl;
}

int FindBookByAuthor(Book* books, int booksCount, string& author)
{
	for (int i = 0; i < booksCount; i++)
	{
		for (int j = 0; j < books[i].NumberAuthors; j++)
		{
			if (books[i].Authors[j] == author)
			{
				return i;
			}
		}
	}
	return -1;
}