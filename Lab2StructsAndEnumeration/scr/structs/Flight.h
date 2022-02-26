#pragma once

#include <iostream>
#include <string>

// 2.2.2 Создание структур
// Задача:
// Описать структуру рейс самолёта

struct Flight
{
	std::string Departure;
	std::string Destination;
	int MinutesFlightTime;
};

// 2.2.6 Структуры и динамическая память

// Задача 1:
// Написать функцию в который динамически выделяется память под выше описанную структуру
void DemoDynamicFlight();

// Задача 2:
// Написать функцию аналогичную выше, но выделяющую память под массив выше описанной структуры
void DemoDynamicFlights();

// Задача 3:
// Написать функцию для поиска самого короткого рейса в массиве
void FindShortestFlight(Flight* flights, int count);