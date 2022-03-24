#pragma once

#include "Time.h"

#include <string>
#include <exception>

//TODO: UTF8?
//TODO: Doxygen?

// 3.3.8
// Задание: Создать класс авиарейс с соответсвующими конструкторами, и сеттерами, и проверкой данных.

class Flight
{
	int _id;
	std::string _departure;
	std::string _destination;
	Time _departureTime;
	Time _destinationTime;

public:
	Flight();
	//TODO: RSDN
	Flight(int id, std::string departure, std::string destination, Time departureTime, Time destinationTime);

	// 3.3.11, 3.5.4
	// Задание: Создать метод возвращающий время полёта авиарейса в минутах.
	int GetFlightTimeMinutes();

	void SetId(int id);
	void SetDeparture(std::string name);
	void SetDestination(std::string name);
	void SetDepartureTime(Time time);
	void SetDestinationTime(Time time);

	int GetId() const { return _id; }
	std::string GetDeparture() const { return _departure; }
	std::string GetDestination() const { return _destination; }
	Time GetDepartureTime() const { return _departureTime; }
	Time GetDestinationTime() const { return _destinationTime; }
};

