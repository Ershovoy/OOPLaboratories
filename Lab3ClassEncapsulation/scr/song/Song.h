#pragma once

#include "Genre.h"

#include <string>
#include <exception>

//TODO: + UTF8?
// 3.4.1
// Задание: Создать класс Song с названием, продолжительностью и жанром.

/// <summary>
/// Класс описывающий песню
/// </summary>
class Song
{
	/// <summary>
	/// Название песни
	/// </summary>
	std::string _title;

	// TODO: + Seconds
	/// <summary>
	/// Продолжительность песни в секундах
	/// </summary>
	int _durationInSeconds;

	/// <summary>
	/// Жанр песни
	/// </summary>
	Genre _genre;

public:
	/// <summary>
	/// Конструктор по умолчанию без параметров
	/// </summary>
	Song();

	/// <summary>
	/// Конструктор с параментрами
	/// </summary>
	/// <param name="title">Название песни</param>
	/// <param name="genre">Жанр песни</param>
	/// <param name="duration">Её продолжительность</param>
	Song(std::string title, Genre genre, int duration);

	/// <summary>
	/// Перегрузка оператора сравнения
	/// </summary>
	/// <param name="song">Песня с которой нужно сравнить текущуюю</param>
	/// <returns>True - если их значения равны, иначе false</returns>
	bool operator==(const Song& song);

	/// <summary>
	/// Задать название песни
	/// </summary>
	/// <param name="title">Название песни</param>
	void SetTitle(const std::string& title);

	/// <summary>
	/// Задать продолжительность песни
	/// </summary>
	/// <param name="durationInSecond">Продолжительность в секундах</param>
	void SetDuration(int durationInSecond);

	/// <summary>
	/// Задать жанр данной песни
	/// </summary>
	/// <param name="genre">Жанр песни</param>
	void SetGenre(Genre genre);

	/// <summary>
	/// Получить название песни
	/// </summary>
	/// <returns>Название</returns>
	const std::string& GetTitle() const { return _title; }

	/// <summary>
	/// Получить жанр песни
	/// </summary>
	/// <returns>Её жанр</returns>
	Genre GetGenre() const { return _genre; }

	/// <summary>
	/// Получить продолжительность песни в секундах
	/// </summary>
	/// <returns>Продолжительность песни в секундах</returns>
	int GetDuration() const { return _durationInSeconds; }
};