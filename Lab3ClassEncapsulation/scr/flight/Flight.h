#pragma once

#include "Time.h"

#include <string>
#include <exception>

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
	// TODO: + комментарии ко всем методам

    /// <summary>
    /// Конструктор по умолчанию без параметров
    /// </summary>
    Flight();

	/// <summary>
	/// Конструктор с параметрами
	/// </summary>
	/// <param name="id">Значение ID для данного рейса</param>
	/// <param name="departure">Место отбытия рейса</param>
	/// <param name="destination">Место назначения рейса</param>
	/// <param name="departureTime">Время отбытия</param>
	/// <param name="destinationTime">Время прибытия</param>
	Flight(int id, const std::string& departure,
		   const std::string& destination,
		   Time departureTime, Time destinationTime);

	// 3.3.11, 3.5.4
	// Задание: Создать метод возвращающий время полёта авиарейса в минутах.

	/// <summary>
	/// Вычислить время полёта в минутах
	/// </summary>
	/// <returns>Время полёта в минута</returns>
	int GetFlightTimeMinutes();

	/// <summary>
	/// Задать ID данному рейсу
	/// </summary>
	/// <param name="id">Значение ID</param>
	void SetId(int id);

	/// <summary>
	/// Задать место отбытия данному рейсу
	/// </summary>
	/// <param name="id">Место отбытия</param>
	void SetDeparture(const std::string& name);

	/// <summary>
	/// Заданать место назначения данному рейсу
	/// </summary>
	/// <param name="name">Место прибытия</param>
	void SetDestination(const std::string& name);

	/// <summary>
	/// Установить время отбытия данному рейсу
	/// </summary>
	/// <param name="time">Время отбытия</param>
	void SetDepartureTime(Time time);

	/// <summary>
	/// Установить время прибытия данному рейсу
	/// </summary>
	/// <param name="time">Время прибытия</param>
	void SetDestinationTime(Time time);

	/// <summary>
	/// Получить ID данного рейса
	/// </summary>
	/// <returns>ID рейса</returns>
	int GetId() const { return _id; }

	/// <summary>
	/// Получить место отбытия данного рейса
	/// </summary>
	/// <returns>Место отбытия</returns>
	const std::string& GetDeparture() const { return _departure; }

	/// <summary>
	/// Получить место прибытия данного рейса
	/// </summary>
	/// <returns>Место прибытия</returns>
	const std::string& GetDestination() const { return _destination; }

	/// <summary>
	/// Получить время отбытия данного рейса
	/// </summary>
	/// <returns>Время отбытия</returns>
	const Time& GetDepartureTime() const { return _departureTime; }

	/// <summary>
	/// Получить время прибытия данного рейса
	/// </summary>
	/// <returns>Время прибытия</returns>
	const Time& GetDestinationTime() const { return _destinationTime; }
};

