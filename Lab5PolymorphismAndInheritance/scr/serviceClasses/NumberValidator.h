#pragma once

#include <string>

// TODO: + сам класс отметить модификатором static
/// <summary>
/// Серверный класс для проверки корректности чисел
/// </summary>
static class NumberValidator
{
	NumberValidator() = delete;

public:
	/// <summary>
	/// Проверить входимость числа в заданный диапазон
	/// </summary>
	/// <param name="number">Число для проверки</param>
	/// <param name="minimum">Минимальное значение диапазона</param>
	/// <param name="maximum">Максимальное значение диапазона</param>
	/// <param name="numberType">Логический смысл проверяемого числа для вывода в сообщении о ошибке</param>
	static void AssertNumberInRange(double number,
									double minimum,
									double maximum,
									const std::string& numberType = "Number");

	/// <summary>
	/// Проверить входимость числа в заданный диапазон
	/// </summary>
	/// <param name="number">Число для проверки</param>
	/// <param name="minimum">Минимальное значение диапазона</param>
	/// <param name="maximum">Максимальное значение диапазона</param>
	/// <param name="numberType">Логический смысл проверяемого числа для вывода в сообщении о ошибке</param>
	static void AssertNumberInRange(float number,
									float minimum,
									float maximum,
									const std::string& numberType = "Number");

	/// <summary>
	/// Проверить входимость числа в заданный диапазон
	/// </summary>
	/// <param name="number">Число для проверки</param>
	/// <param name="minimum">Минимальное значение диапазона</param>
	/// <param name="maximum">Максимальное значение диапазона</param>
	/// <param name="numberType">Логический смысл проверяемого числа для вывода в сообщении о ошибке</param>
	static void AssertNumberInRange(int number,
									int minimum,
									int maximum,
									const std::string& numberType = "Number");
};