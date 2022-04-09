#pragma once

#include "Person.h"
#include "..\serviceClasses\StringValidator.h"
#include "..\serviceClasses\NumberValidator.h"
#include "..\serviceClasses\StudentIdGenerator.h"

#include <string>

/// <summary>
/// Класс описывающий студента от класса Person
/// </summary>
class Student : public Person
{
	/// <summary>
	/// Год поступления
	/// </summary>
	int _admissionYear;

	/// <summary>
	/// Уникальный ID студента
	/// </summary>
	int _id;

	/// <summary>
	/// Задать год поступления
	/// </summary>
	/// <param name="admissionYear">Год поступления</param>
	void SetAdmissionYear(int admissionYear);

public:
	// TODO: + не забыть здесь поменять названия локальных переменных

	/// <summary>
	/// Конструктор с параметрами для студента
	/// </summary>
	/// <param name="firstName">Имя студента</param>
	/// <param name="surname">Фамилия студента</param>
	/// <param name="patronymic">Отчество студента</param>
	/// <param name="admissionYear">Год его поступления</param>
	Student(const std::string& firstName,
			const std::string& surname,
			const std::string& patronymic,
			int admissionYear);

	/// <summary>
	/// Узнать год поступления студента
	/// </summary>
	/// <returns>Год поступления</returns>
	int GetAdmissionYear() const { return _admissionYear; }

	/// <summary>
	/// Узнать ID студента
	/// </summary>
	/// <returns>ID</returns>
	int GetId() const { return _id; }
};

