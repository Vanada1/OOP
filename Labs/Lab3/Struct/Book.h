#pragma once
#include <string>

struct Book
{
	std::string BookName;
	int Year;
	int NumberPages;
	std::string* Authors;
	int NumberAuthors;
};

void DemoBook();
void ReadBookFromConsole(Book& book);
void WriteBookToConsole(Book& book);
int FindBookByAuthor(Book* books, int booksCount, std::string& author);