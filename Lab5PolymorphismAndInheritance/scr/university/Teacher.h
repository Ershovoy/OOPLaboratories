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
	// TODO: + переименовать локальные переменные

	/// <summary>
	/// Конструктор с параметрами для учителя
	/// </summary>
	/// <param name="firstName">Имя учителя</param>
	/// <param name="surname">Фамилия учителя</param>
	/// <param name="patronymic">Отчество учителя</param>
	/// <param name="position">Его должность</param>
	Teacher(const std::string& firstName,
			const std::string& surname,
			const std::string& patronymic,
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