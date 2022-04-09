#pragma once

#include "..\serviceClasses\StringValidator.h"
#include "..\serviceClasses\UserIdGenerator.h"

#include <string>

/// <summary>
/// Класс описывающий пользователя
/// </summary>
class User
{
	/// <summary>
	/// Уникальный ID данного пользователя
	/// </summary>
	unsigned int _id;
	
	/// <summary>
	/// Логин пользователя
	/// </summary>
	std::string _login;

	/// <summary>
	/// Пароль пользователя
	/// </summary>
	std::string _password;

public:
	/// <summary>
	/// Конструктор с параметрами для пользователя
	/// </summary>
	/// <param name="login">Логин пользователя</param>
	/// <param name="password">Пароль пользователя</param>
	User(const std::string& login, const std::string& password);

	/// <summary>
	/// Совпадает ли введённый пароль с паролем данного пользователя
	/// </summary>
	/// <param name="password">Введённый пароль</param>
	/// <returns>True - если пароль верный, иначе false</returns>
	bool IsCorrectPassword(const std::string& password);

	/// <summary>
	/// Задать логин пользователю
	/// </summary>
	/// <param name="login">Новый логин</param>
	void SetLogin(const std::string& login);

	/// <summary>
	/// Задать пароль данному пользователю
	/// </summary>
	/// <param name="password">Новый пароль</param>
	void SetPassword(const std::string& password);

	/// <summary>
	/// Получить ID данного пользователя
	/// </summary>
	/// <returns>ID - целое число</returns>
	int GetId() const { return _id; }

	/// <summary>
	/// Получить логин пользователя
	/// </summary>
	/// <returns>Логин - строка</returns>
	std::string GetLogin() const { return _login; }

	/// <summary>
	/// Получить пароль данного пользователя
	/// </summary>
	/// <returns>Пароль в виде строки</returns>
	std::string GetPassword() const { return _password; }
};