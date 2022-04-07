#pragma once

#include <iostream>
#include <string>

//TODO: + Doxygen?
//TODO: + UTF8?
// 2.2.2 Создание структур
// Задача: Описать структуру фильм

/// <summary>
/// Описание фильма
/// </summary>
struct Movie
{
	/// <summary>
	/// Название фильма
	/// </summary>
	std::string Title;

	/// <summary>
	/// Жанр фильма
	/// </summary>
	std::string Genre;

	/// <summary>
	/// Год выхода фильма
	/// </summary>
	int ReleaseYear;

	/// <summary>
	/// Оценка фильма
	/// </summary>
	double Rating;
};

// 2.2.7 Функции-конструкторы

// Задание 1:
// Создать функция конструктор для выше описанной структуры

/// <summary>
/// Функция для создания объектра Movie
/// </summary>
/// <param name="title">Название фильма</param>
/// <param name="genre">Жанр фильма</param>
/// <param name="year">Год выхода фильма</param>
/// <param name="rate">Оценка фильма</param>
/// <returns>Указатель на объект Movie</returns>
Movie* MakeMovie(const std::string& title, const std::string& genre, int year, double rate);

// Задание 2:
// Написать функцию копирования

/// <summary>
/// Функция по копированию фильма
/// </summary>
/// <param name="movie">Фильм описание которого надо скопировать</param>
/// <returns>Указатель на созданный объект по подобию заданного</returns>
Movie* CopyMovie(const Movie& movie);

// Задание 2:
// Создать функцию вызывающую выше описанные функции

/// <summary>
/// Демонстрация работы структуры Movie
/// </summary>
void DemoMovie();

/// <summary>
/// Вывод описания фильма в консоль
/// </summary>
/// <param name="movie">Фильм описание которого нужно вывести</param>
void WriteMovie(const Movie& movie);