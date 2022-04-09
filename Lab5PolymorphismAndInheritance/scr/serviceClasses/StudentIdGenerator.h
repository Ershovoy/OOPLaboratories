#pragma once

// TODO: + сделать класс статическим
/// <summary>
/// Клас для генерации уникальных ID для класса Student
/// </summary>
static class StudentIdGenerator
{
	StudentIdGenerator() = delete;

	/// <summary>
	/// Последний зарегистрированный ID
	/// </summary>
	static unsigned int _lastId;

	// TODO: + сделать два метода - GetId() и IncrementID().
	
	/// <summary>
	/// Получить текущие значение ID
	/// </summary>
	/// <returns>Текущие значение ID</returns>
	static unsigned int GetId();

	/// <summary>
	/// Увеличить значение ID на единичку
	/// </summary>
	static void IncreamentId();

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