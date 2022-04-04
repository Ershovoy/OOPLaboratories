﻿#pragma once

/// <summary>
/// Клас для генерации уникальных ID для класса Student
/// </summary>
class StudentIdGenerator
{
	StudentIdGenerator() = delete;

	/// <summary>
	/// Последний зарегистрированный ID
	/// </summary>
	static unsigned int _lastId;

public:
	/// <summary>
	/// Получить слудующий свободный ID
	/// </summary>
	/// <returns>Новый уникальный ID</returns>
	static unsigned int GetNewId();

	/// <summary>
	/// Задать значение ID последнего зарегистрированного пользователя
	/// </summary>
	/// <param name="lastId">Новое значение последнего зарегистрированного ID</param>
	static void SetLastId(unsigned int lastId);
};