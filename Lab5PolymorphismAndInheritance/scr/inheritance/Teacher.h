#pragma once

#include "Person.h"

/// <summary>
/// Класс описывающий учителя наследующий класс Person
/// </summary>
class Teacher : public Person
{
	/// <summary>
	/// Должность учителя
	/// </summary>
	std::string _position;

public:
	Teacher(const std::string& firstName,
			const std::string& secondName,
			const std::string& thirdName,
			const std::string& position);

	/// <summary>
	/// Задать должность учителю
	/// </summary>
	/// <param name="position">Должность - строка</param>
	void SetPosition(std::string position);

	/// <summary>
	/// Узнать полжность учителя
	/// </summary>
	/// <returns>Должность - строка</returns>
	std::string GetPosition() { return _position; }
};