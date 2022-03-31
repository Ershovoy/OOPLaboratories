#pragma once

#include <exception>

// Задание:
// Реализовать сервесный класс по валидации вещественных чисел.
// UML диаграмма классов
// https://miro.com/app/board/uXjVOFkgw2A=/?invite_link_id=761995098208

class DoubleValidator
{
public:
	static bool IsPositiveValue(double value);
	static bool IsValueInRange(double value, double min, double max);

	static void AssertPositiveValue(double value);
	static void AssertValueInRange(double value, double min, double max);
};

