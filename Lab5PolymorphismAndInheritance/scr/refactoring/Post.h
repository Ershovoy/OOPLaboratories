#pragma once

#include <string>

/// <summary>
/// Класс описывающий статью
/// </summary>
class Post
{
	/// <summary>
	/// Заголовок статьи
	/// </summary>
	std::string _title;

	/// <summary>
	/// Основной текст статьи
	/// </summary>
	std::string _text;

public:
	Post(const std::string& title, const std::string& text);

	/// <summary>
	/// Установить заголовок статье
	/// </summary>
	/// <param name="title">Новый заголовок статьи</param>
	void SetTitle(const std::string& title);

	/// <summary>
	/// Задать основной текст статьи
	/// </summary>
	/// <param name="text">Текст</param>
	void SetText(const std::string& text);

	/// <summary>
	/// Получить заголовок статьи
	/// </summary>
	/// <returns>Загаловок статьи - строка</returns>
	std::string GetTitle() const { return _title; }

	/// <summary>
	/// Получить основной текст статьи
	/// </summary>
	/// <returns>Основнокй текст</returns>
	std::string GetText() const { return _text; }
};