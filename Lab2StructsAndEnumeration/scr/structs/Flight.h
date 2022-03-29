#pragma once

#include <iostream>
#include <string>

// 2.2.2 Создание структур
// Задача:
// Описать структуру рейс самолёта

/// <summary>
/// Описание рейса
/// </summary>
struct Flight
{
	/// <summary>
	/// Место отбытия
	/// </summary>
	std::string Departure;

	/// <summary>
	/// Место приземления
	/// </summary>
	std::string Destination;

	/// <summary>
	/// Продолжительность полёта в минутах
	/// </summary>
	int MinutesFlightTime;
};

// 2.2.6 Структуры и динамическая память

// Задача 1:
// Написать функцию в который динамически выделяется память под выше описанную структуру

/// <summary>
/// Функция по демонстрации работы со структурой Flight, созданной в статической памяти
/// </summary>
void DemoDynamicFlight();

// Задача 2:
// Написать функцию аналогичную выше, но выделяющую память под массив выше описанной структуры

/// <summary>
/// Функция по демонстрации работы со структурой Flight, созданной в динамической памяти
/// </summary>
void DemoDynamicFlights();

// Задача 3:
// Написать функцию для поиска самого короткого рейса в массиве

/// <summary>
/// Поиск самого короткого рейса по продолжительности
/// </summary>
/// <param name="flights">Указатель на первый объект массива Flight</param>
/// <param name="count">Количество элементов в массиве</param>
void FindShortestFlight(Flight* flights, int count);