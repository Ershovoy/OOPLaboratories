#pragma once

#include <string>

// 2.2.2 Создание структур
// Задача: Описать структуру песня

struct Song
{
	std::string Title;
	std::string Author;
	int DurationInMinutes;
};