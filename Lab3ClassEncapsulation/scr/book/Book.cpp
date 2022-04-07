#include "Book.h"

int FindBookByAuthor(Book* books, int booksCount, std::string author)
{
	for (int i = 0; i < booksCount; ++i)
	{
		for (int j = 0; j < books[i].AutorsCount; ++j)
		{
			if (books[i].Authors[j] == author)
			{
				return i;
			}
		}
	}
	return -1;
}
