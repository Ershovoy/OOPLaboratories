#pragma once

#include <string>

// 2.2.2 Создание структур
// Задача: Описать структуру песня

/// <summary>
/// Песня
/// </summary>
struct Song
{
	/// <summary>
	/// Название песни
	/// </summary>
	std::string Title;

	/// <summary>
	/// Автор песни
	/// </summary>
	std::string Author;

	/// <summary>
	/// Продолжительность песни в минутах
	/// </summary>
	int DurationInMinutes;
};