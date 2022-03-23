#pragma once

#include <string>


// 2.2.2 Создание структур
// Задача: Описать структуру телефонный контакт

struct PhoneContact
{
	std::string Name;
	std::string LastName;
	std::string Number;
	bool IsFavorite;
};