#include "IOBook.h"

void DemoBook()
{
	constexpr int BOOK_COUNT = 5;
	Book books[BOOK_COUNT];
	books[0].Title = "Над пропастью во ржи";
	books[0].Authors = new std::string("Джером Сэлинджер");
	books[0].AutorCount = 1;
	books[0].ReleaseYear = 1951;
	books[0].Pages = 213;

	for (int i = 1; i < BOOK_COUNT; ++i)
	{
		ReadBookFromConsole(books[i]);
	}
	for (int i = 0; i < BOOK_COUNT; ++i)
	{
		WriteBookToConsole(books[i]);
	}

	std::cout << "Enter author to find him book: ";
	std::string bookAuthor;
	std::cin >> bookAuthor;
	int index = FindBookByAuthor(books, BOOK_COUNT, bookAuthor);
	if (index == -1)
	{
		std::cout << "Book wrote by this author didn't exist.\n";
	}
	else
	{
		WriteBookToConsole(books[index]);
	}

}

void ReadBookFromConsole(Book& book)
{
	std::cout << "Enter title of the book: ";
	std::cin >> book.Title;
	book.ReleaseYear = GetInteger(1, 2022, "Enter release year: ", "Release year must be positive number.\n");
	book.Pages = GetInteger(1, INT_MAX, "Enter count of pages: ", "Count of pages must be positive number.\n");
	book.AutorCount = GetInteger(1, 10, "Enter number of authors: ", "Number of authors must be in range [1, 10].\n");
	book.Authors = new std::string[book.AutorCount];
	std::cout << "Enter authors:\n";
	for (int i = 0; i < book.AutorCount; ++i)
	{
		std::cout << "Enter author[" << i << "]: ";
		std::cin >> book.Authors[i];
	}
}

void WriteBookToConsole(const Book& book)
{
	std::cout << book.Authors[0];
	for (int i = 1; i < book.AutorCount; ++i)
	{
		std::cout << ", " << book.Authors[i];
	}
	std::cout << ". " << book.Title << ". " << book.ReleaseYear << ". " << book.Pages << "c.\n";
}

int GetInteger(std::string prompt, std::string error)
{
	std::cout << prompt;
	while (true)
	{
		int result;
		if (std::cin >> result)
		{
			return result;
		}
		else
		{
			std::cerr << error;
			std::cin.clear();
			for (char ch; std::cin >> ch;)
			{
				if (isdigit(ch) || ch == '-')
				{
					std::cin.unget();
					break;
				}
			}
		}
	}
}

int GetInteger(int low, int high, std::string prompt, std::string error)
{
	std::cout << prompt;
	while (true)
	{
		int result = GetInteger("", error);
		if (low <= result && result <= high)
		{
			return result;
		}
		else
		{
			std::cout << error;
		}
	}
}