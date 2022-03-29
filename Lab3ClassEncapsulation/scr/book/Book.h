#pragma once

#include <string>
//TODO: + Doxygen?
//TODO: - Хранение строк по значению?

/// <summary>
/// Структура описывающая книгу
/// </summary>
struct Book
{
	/// <summary>
	/// Название книги
	/// </summary>
	std::string Title;

	/// <summary>
	/// Год издания
	/// </summary>
	int ReleaseYear;

	/// <summary>
	/// Количество странц
	/// </summary>
	int Pages;

	/// <summary>
	/// Авторы книги
	/// </summary>
	std::string* Authors;

	/// <summary>
	/// Количество авторов книги
	/// </summary>
	int AutorCount;
};

/// <summary>
/// Поиск книги написанной заданным автором
/// </summary>
/// <param name="books">Указатель на первый элемент массива</param>
/// <param name="booksCount">Количество книг в массиве</param>
/// <param name="author">Автор книги</param>
/// <returns>Индекс искомой книги в массиве</returns>
int FindBookByAuthor(Book* books, int booksCount, std::string author);