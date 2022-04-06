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

	// TODO: Seconds
	/// <summary>
	/// Продолжительность песни в секундах
	/// </summary>
	int _durationInSecond;

	/// <summary>
	/// Жанр песни
	/// </summary>
	Genre _genre;

public:
	Song();
	Song(std::string title, Genre genre, int duration);

	bool operator==(const Song& song);

	void SetTitle(std::string title);
	void SetDuration(int durationInSecond);
	void SetGenre(Genre genre);

	std::string GetTitle() const { return _title; }
	Genre GetGenre() const { return _genre; }
	int GetDuration() const { return _durationInSecond; }
};

