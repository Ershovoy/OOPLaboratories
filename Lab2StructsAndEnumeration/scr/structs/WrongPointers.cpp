#include "WrongPointers.h"

void WrongPointers()
{
	Flight flight;
	flight.Departure = "London";
	flight.Destination = "Moscov";
	flight.MinutesFlightTime = 100;

	Movie movie;
	movie.Title = "Mulholland Dr.";
	movie.Genre = "thriller";
	movie.Rating = 7.649;
	movie.ReleaseYear = 2001;

	Flight* pFlight = &flight;
	Movie* pMovie = &movie;

	//pFlight = pMovie;
	//pFlgiht = &movie;
}