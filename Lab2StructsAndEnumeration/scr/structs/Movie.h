#pragma once

#include <iostream>
#include <string>

//TODO: Doxygen?
//TODO: UTF8?
// 2.2.2 Создание структур
// Задача: Описать структуру фильм

struct Movie
{
	std::string Title;
	std::string Genre;
	int ReleaseYear;
	double Rating;
};

// 2.2.7 Функции-конструкторы

// Задание 1:
// Создать функция конструктор для выше описанной структуры
Movie* MakeMovie(std::string title, std::string genre, int year, double rate);

// Задание 2:
// Написать функцию копирования
Movie* CopyMovie(Movie& movie);

// Задание 2:
// Создать функцию вызывающую выше описанные функции
void DemoMovie();

void WriteMovie(Movie& movie);