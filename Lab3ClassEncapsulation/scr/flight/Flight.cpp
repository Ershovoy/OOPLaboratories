#include "Flight.h"

Flight::Flight() : _id(0), _departure(""), _destination(""), _departureTime(), _destinationTime() {}

//TODO: - передача строк по значению?
Flight::Flight(int id, std::string departure, std::string destination, Time departureTime, Time destinationTime)
{
	SetId(id);
	SetDeparture(departure);
	SetDestination(destination);
	SetDestinationTime(destinationTime);
	SetDepartureTime(departureTime);
}

int Flight::GetFlightTimeMinutes()
{
	Time departure = GetDepartureTime();
	Time destination = GetDestinationTime();

	int result = 0;
	//TODO: + Правильнее в константы
	result = destination.ToMinute();
	result -= departure.ToMinute();

	return result;
}

void Flight::SetId(int id)
{
	_id = id;
}

void Flight::SetDeparture(std::string name)
{
	_departure = name;
}

void Flight::SetDestination(std::string name)
{
	_destination = name;
}

void Flight::SetDepartureTime(Time time)
{
	if (time < _destinationTime)
	{
		_departureTime = time;
	}
	else
	{
		throw std::exception("Departure must be happen before arrivel.");
	}
}

void Flight::SetDestinationTime(Time time)
{
	if (time > _departureTime)
	{
		_destinationTime = time;
	}
	else
	{
		throw std::exception("Arrive must be happen before departure.");
	}
}
