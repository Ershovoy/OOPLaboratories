#include "WrongPointers.h"

void WrongPointers()
{
	Flight flight;
	flight.Departure = "London";
	flight.Destination = "Moscov";
	flight.MinutesFlightTime = 100;

	Movie movie;
	//TODO: UTF8?
	// TODO: интересный выбор
	movie.Title = "Mulholland Dr.";
	movie.Genre = "thriller";
	movie.Rating = 7.649;
	movie.ReleaseYear = 2001;

	//TODO: RSDN
	Flight* pFlight = &flight;
	Movie* pMovie = &movie;

	//pFlight = pMovie;
	//pFlgiht = &movie;
}