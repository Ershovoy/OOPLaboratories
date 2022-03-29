#pragma once

#include "Time.h"

#include <string>
#include <exception>

//TODO: + UTF8?
//TODO: + Doxygen?

// 3.3.8
// Задание: Создать класс авиарейс с соответсвующими конструкторами, и сеттерами, и проверкой данных.

/// <summary>
/// Класс описывающий авиарейс
/// </summary>
class Flight
{
	/// <summary>
	/// Уникальный номер авиарейса
	/// </summary>
	int _id;

	/// <summary>
	/// Место отправления
	/// </summary>
	std::string _departure;

	/// <summary>
	/// Место прибытия
	/// </summary>
	std::string _destination;

	/// <summary>
	/// Время отправления
	/// </summary>
	Time _departureTime;

	/// <summary>
	/// Время прибытия
	/// </summary>
	Time _destinationTime;

public:
	Flight();
	//TODO: + RSDN
	Flight(int id, std::string departure, std::string destination,
		Time departureTime, Time destinationTime);

	// 3.3.11, 3.5.4
	// Задание: Создать метод возвращающий время полёта авиарейса в минутах.

	/// <summary>
	/// Вычислить время полёта в минутах
	/// </summary>
	/// <returns>Время полёта в минута</returns>
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

