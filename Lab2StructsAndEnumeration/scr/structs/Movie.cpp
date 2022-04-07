#include "Movie.h"

//TODO: + передача строк по значению?
Movie* MakeMovie(const std::string& title, const std::string& genre, int year, double rate)
{
	Movie* movie = new Movie();
	movie->Title = title;
	movie->Genre = genre; 
	movie->ReleaseYear = year;
	movie->Rating = rate;
	return movie;
}
//TODO: + Проверить утечку при присваивании по умолчанию
//TODO: + Это же не копирование, а просто присваивание указателя.
Movie* CopyMovie(const Movie& movie)
{
	//std::cout << &movie << '\n';
	Movie* copiedMovie = new Movie();
	//std::cout << copiedMovie << '\n';
	*copiedMovie = movie;
	//std::cout << copiedMovie << '\n';
	return copiedMovie;
}

void DemoMovie()
{
	std::string movie1Title = "Die Hard";
	std::string movie1Genre = "Action";
	std::string movie2Title = "Matrix";
	std::string movie2Genre = "Fantastic";
	std::string movie3Title = "1+1";
	std::string movie3Genre = "Comedy";

	Movie* movie1 = MakeMovie(movie1Title, movie1Genre, 1988, 8.0);
	Movie* movie2 = MakeMovie(movie2Title, movie2Genre, 1999, 8.5);
	Movie* movie3 = MakeMovie(movie3Title, movie3Genre, 2012, 8.8);

	Movie* copiedMovie1 = CopyMovie(*movie1);
	Movie* copiedMovie2 = CopyMovie(*movie2);
	Movie* copiedMovie3 = CopyMovie(*movie3);

	WriteMovie(*copiedMovie1);
	WriteMovie(*copiedMovie2);
	WriteMovie(*copiedMovie3);
}

void WriteMovie(const Movie& movie)
{
	std::cout << "Title: " << movie.Title << '\n';
	std::cout << "Genre: " << movie.Genre << '\n';
	std::cout << "Release Year: " << movie.ReleaseYear << '\n';
	std::cout << "Rating: " << movie.Rating << '\n';
}
