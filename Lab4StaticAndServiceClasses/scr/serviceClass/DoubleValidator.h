#pragma once

#include <exception>

// Задание:
// Реализовать сервесный класс по валидации вещественных чисел.
// UML диаграмма классов
// https://miro.com/app/board/uXjVOFkgw2A=/?invite_link_id=761995098208

/// <summary>
/// Серверный класс для проверки корректности вещественных чисел
/// </summary>
class DoubleValidator
{
public:
	DoubleValidator() = delete;

	/// <summary>
	/// Проверить заданное число положительное или нет
	/// </summary>
	/// <param name="value">Заданное вещественное число</param>
	/// <returns>true - если число положительно, в противно случае false</returns>
	static bool IsPositiveValue(double value);

	/// <summary>
	/// Проверить входит ли заданное число в диапазон
	/// </summary>
	/// <param name="value">Число проходящее проверку</param>
	/// <param name="min">Минимальное значение диапазона</param>
	/// <param name="max">Максимальное значение диапазона</param>
	/// <returns>true - если чилос в диапазоне, иначе false</returns>
	static bool IsValueInRange(double value, double min, double max);

	/// <summary>
	/// Проверить заданное число положительное или нет, с выбросом исключения
	/// </summary>
	/// <param name="value">Заданное вещественное число для проверки</param>
	static void AssertPositiveValue(double value);

	/// <summary>
	/// Проверить входит ли заданное число в диапазон, с выбросом исключения
	/// </summary>
	/// <param name="value">Число проходящее проверку</param>
	/// <param name="min">Минимальное значение диапазона</param>
	/// <param name="max">Максимальное значение диапазона</param>
	static void AssertValueInRange(double value, double min, double max);
};

