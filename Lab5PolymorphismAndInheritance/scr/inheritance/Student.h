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
	Student(const std::string& firstName,
			const std::string& secondName,
			const std::string& thirdName,
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

