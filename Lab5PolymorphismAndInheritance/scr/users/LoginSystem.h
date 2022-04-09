#pragma once

#include "User.h"

#include <string>

/// <summary>
/// Выполнить вход в аккаунт по логину и паролю
/// </summary>
/// <param name="users">Массив данных о пользователях</param>
/// <param name="usersCount">Количество данных в массиве</param>
/// <param name="enteredLogin">Введённый логин для входа в аккаунт</param>
/// <param name="enteredPassword">Введённый пароль для входа в аккаунт</param>
/// <returns>Аккаунт с соответствующем логином и паролем или nullptr</returns>
User* Login(User** users,
			int usersCount, 
			std::string& enteredLogin, 
			std::string& enteredPassword);