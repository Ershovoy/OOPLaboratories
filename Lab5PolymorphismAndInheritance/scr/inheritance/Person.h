#pragma once

#include "..\serviceClasses\StringValidator.h"

#include <string>

/// <summary>
/// Класс описывающий человека
/// </summary>
class Person
{
	/// <summary>
	/// Имя человека
	/// </summary>
	std::string _firstName;

	/// <summary>
	/// Фамилия человека
	/// </summary>
	std::string _secondName;

	/// <summary>
	/// Отчество человека
	/// </summary>
	std::string _thirdName;

public:
	Person(const std::string& firstName, 
		   const std::string& secondName, 
		   const std::string& thirdName);

	/// <summary>
	/// Задать имя человеку
	/// </summary>
	/// <param name="firstName">Новое имя</param>
	void SetFirstName(const std::string& firstName);

	/// <summary>
	/// Задать фамилию для человека
	/// </summary>
	/// <param name="secondName">Новая фамилия</param>
	void SetSecondName(const std::string& secondName);

	/// <summary>
	/// Задать отчество человеку
	/// </summary>
	/// <param name="thirdName">Новое отчество</param>
	void SetThirdName(const std::string& thirdName);
	
	/// <summary>
	/// Получить имя человека
	/// </summary>
	/// <returns>Имя</returns>
	const std::string& GetFirstName() const { return _firstName; }

	/// <summary>
	/// Получить фамилию человека
	/// </summary>
	/// <returns>Фамилия</returns>
	const std::string& GetSecondName() const { return _secondName; }

	/// <summary>
	/// Получить отчество человека
	/// </summary>
	/// <returns>Отчество</returns>
	const std::string& GetThirdName() const { return _thirdName; }
};