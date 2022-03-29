#pragma once

#include <string>


// 2.2.2 Создание структур
// Задача: Описать структуру телефонный контакт

/// <summary>
/// Структура описывающая телефонный контакт
/// </summary>
struct PhoneContact
{
	/// <summary>
	/// Имя контакта
	/// </summary>
	std::string Name;

	/// <summary>
	/// Фамилия контакта
	/// </summary>
	std::string LastName;
	
	/// <summary>
	/// Номер телефона
	/// </summary>
	std::string Number;

	/// <summary>
	/// Избранный контакт или нет
	/// </summary>
	bool IsFavorite;
};