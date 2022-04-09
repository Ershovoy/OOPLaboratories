#pragma once

#include <string>
#include <exception>

// TODO: + сделать класс статическим
/// <summary>
/// Серверный класс для проверки корректности сток
/// </summary>
static class StringValidator
{
	StringValidator() = delete;

public:
	/// <summary>
	/// Проверить соответствует ли коррекность заданной строки для имени
	/// </summary>
	/// <param name="name">Заданная строка для проверки</param>
	static void AssertNameLetters(const std::string& name);

	/// <summary>
	/// Проверить храняться ли в заданной строке только буквы или строки
	/// </summary>
	/// <param name="string">Заданная строка для проверки</param>
	/// <returns>True - если в строке только буквы или цифры, иначе false</returns>
	static bool IsAlphanumeric(const std::string& string);

	/// <summary>
	/// Проверить содержит ли заданная строка только буквы и только
	/// </summary>
	/// <param name="string">заданная строка для проверки</param>
	/// <returns>True - если в строке только буквы, иначе false</returns>
	static bool IsContainOnlyLetters(const std::string& string);
};