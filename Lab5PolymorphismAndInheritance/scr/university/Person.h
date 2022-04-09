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

	// TODO: + Surname. Переименовать здесь и везде ниже
	/// <summary>
	/// Фамилия человека
	/// </summary>
	std::string _surname;

	// TODO: + Patronymic. Переименовать здесь и везде ниже
	/// <summary>
	/// Отчество человека
	/// </summary>
	std::string _patronymic;

public:
	// TODO: + комментарий
	
	/// <summary>
	/// Констурктор с параметрами
	/// </summary>
	/// <param name="firstName">Имя человека</param>
	/// <param name="surname">Фамилия человека</param>
	/// <param name="patronymic">Отчество человека</param>
	Person(const std::string& firstName, 
		   const std::string& surname, 
		   const std::string& patronymic);

	/// <summary>
	/// Задать имя человеку
	/// </summary>
	/// <param name="firstName">Новое имя</param>
	void SetFirstName(const std::string& firstName);

	/// <summary>
	/// Задать фамилию для человека
	/// </summary>
	/// <param name="surname">Новая фамилия</param>
	void SetSecondName(const std::string& surname);

	/// <summary>
	/// Задать отчество человеку
	/// </summary>
	/// <param name="patronymic">Новое отчество</param>
	void SetThirdName(const std::string& patronymic);
	
	/// <summary>
	/// Получить имя человека
	/// </summary>
	/// <returns>Имя</returns>
	const std::string& GetFirstName() const { return _firstName; }

	/// <summary>
	/// Получить фамилию человека
	/// </summary>
	/// <returns>Фамилия</returns>
	const std::string& GetSecondName() const { return _surname; }

	/// <summary>
	/// Получить отчество человека
	/// </summary>
	/// <returns>Отчество</returns>
	const std::string& GetThirdName() const { return _patronymic; }
};