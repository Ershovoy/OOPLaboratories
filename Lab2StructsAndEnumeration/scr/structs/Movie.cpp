#include "Movie.h"

Movie* MakeMovie(std::string title, std::string genre, int year, double rate)
{
	Movie* movie = new Movie();
	movie->Title = title;
	movie->Genre = genre;
	movie->ReleaseYear = year;
	movie->Rating = rate;
	return movie;
}

Movie* CopyMovie(Movie& movie)
{
	Movie* copiedMovie = new Movie();
	*copiedMovie = movie;
	return copiedMovie;
}

void DemoMovie()
{
	Movie* movie1 = MakeMovie("Die Hard", "Action", 1988, 8.0);
	Movie* movie2 = MakeMovie("Matrix", "Fantastic", 1999, 8.5);
	Movie* movie3 = MakeMovie("1+1", "Comedy", 2012, 8.8);

	Movie* copiedMovie1 = CopyMovie(*movie1);
	Movie* copiedMovie2 = CopyMovie(*movie2);
	Movie* copiedMovie3 = CopyMovie(*movie3);

	WriteMovie(*copiedMovie1);
	WriteMovie(*copiedMovie2);
	WriteMovie(*copiedMovie3);
}

void WriteMovie(Movie& movie)
{
	std::cout << "Title: " << movie.Title << '\n';
	std::cout << "Genre: " << movie.Genre << '\n';
	std::cout << "Release Year: " << movie.ReleaseYear << '\n';
	std::cout << "Rating: " << movie.Rating << '\n';
}
