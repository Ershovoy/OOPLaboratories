#pragma once

#include <string>
//TODO: ? Почему к большинству членов классов выбрано хранение в статической области?
//TODO: + Doxygen?

/// <summary>
/// Структура описывающая окружность
/// </summary>
struct Circle 
{
	/// <summary>
	/// Координата центра окружности по X
	/// </summary>
	double X; 

	/// <summary>
	/// Координата центра оружности по Y
	/// </summary>
	double Y;

	/// <summary>
	/// Радиус окружности
	/// </summary>
	double Radius;

	/// <summary>
	/// Цвет окружности
	/// </summary>
	std::string Color; 
};

/// <summary>
/// Функция по демонстрации работы структуры Circle
/// </summary>
void DemoCircle();

//TODO: + UTF8?
// 2.2.7.1
// Задание:
// Написать функции конструкторы и функции копирования для выше описанной
// структуры, чтобы избавиться от дубликатов в функции DemoCircle().

/// <summary>
/// Функция для создания структуры Circle
/// </summary>
/// <param name="x">Координата центра окружности по X</param>
/// <param name="y">Координата центра оркжуности по Y</param>
/// <param name="radius">Радиус окружности</param>
/// <param name="color">Цвет окружности</param>
/// <returns>Указатель на созданную структуру</returns>
Circle* MakeCircle(double x, double y, double radius, std::string color);

/// <summary>
/// Создание копии объектра
/// </summary>
/// <param name="cirlce">Объект копию которого нужно создать</param>
/// <returns>Указатель на созданную копию заданного объекта</returns>
Circle* CopyCircle(Circle* cirlce);
