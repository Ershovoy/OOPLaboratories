#pragma once

#include "Genre.h"

#include <string>
#include <exception>

// 3.4.1
// Задание: Создать класс Song с названием, продолжительностью и жанром.

class Song
{
	std::string _title;
	int _durationInSecond;
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

