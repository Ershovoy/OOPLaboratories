#pragma once

#include <string>

// 2.2.2 Создание структур
// Задача: Описать структуру учебная дисциплина

/// <summary>
/// Учебная дисциплина
/// </summary>
struct StudyDiscipline
{
	/// <summary>
	/// Название дисциплины
	/// </summary>
	std::string Name;

	/// <summary>
	/// Продожительность дисциплины
	/// </summary>
	int Estimation;
};
