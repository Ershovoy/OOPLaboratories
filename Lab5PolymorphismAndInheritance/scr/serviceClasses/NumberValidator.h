#pragma once

#include <string>

// TODO: сам класс отметить модификатором static
/// <summary>
/// Серверный класс для проверки корректности чисел
/// </summary>
class NumberValidator
{
	NumberValidator() = delete;

public:
	/// <summary>
	/// Проверить входимость числа в заданный диапазон
	/// </summary>
	/// <param name="number">Число для проверки</param>
	/// <param name="minimum">Минимальное значение диапазона</param>
	/// <param name="maximum">Максимальное значение диапазона</param>
	static void AssertNumberInRange(int number, int minimum, int maximum);
};