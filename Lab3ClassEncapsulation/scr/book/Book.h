#pragma once

#include <string>

struct Book
{
	std::string Title;
	int ReleaseYear;
	int Pages;
	std::string* Authors;
	int AutorCount;
};

int FindBookByAuthor(Book* books, int booksCount, std::string author);