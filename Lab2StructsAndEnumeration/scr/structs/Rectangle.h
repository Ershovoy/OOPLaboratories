#pragma once

#include <string>
#include <iostream>
//TODO: + UTF8?
//TODO: + Doxygen?
// 2.2.2 Создание структур
// Задача: Описать структуру прямоугольник

/// <summary>
/// Прямоугольник
/// </summary>
struct Rectangle
{
	/// <summary>
	/// Ширина прямоугольника
	/// </summary>
	double Width;
	
	/// <summary>
	/// Длина прямоугольника
	/// </summary>
	double Length;

	/// <summary>
	/// Цвет прямоугольника
	/// </summary>
	std::string Color;
};

// 2.2.3 Создание объектов структур
// Задача: 
// Создать функцию инициализирующую массив описанной ваше структуры
// и вывести значения каждого поля в консоль

/// <summary>
/// Демонстрация работы структуры Rectangle
/// </summary>
void DemoRectangle();

//
// 2.2.5 Структуры и функции
//

// Задача 1:
// Создать функцию вывода значений полей прямоугольника в консоль

/// <summary>
/// Вывод полей структуры Rectangle в консоль
/// </summary>
/// <param name="rectangle"></param>
void WriteRectangle(const Rectangle& rectangle);

// Задача 2:
// Создать функцию заполнения значений полей прямоугольника с клавиатуры

/// <summary>
/// Заполнение полей структуры Rectangle, вводом с клавиатуры
/// </summary>
/// <param name="rectangle">Объект значения полей которого нужно заполнить</param>
void ReadRectangle(Rectangle& rectangle);

// Задача 3:
// Написать функцию вызывающую ранее созданные функции

/// <summary>
/// Функция по демонстрации работы двух выше описанных функций
/// </summary>
void DemoWriteAndReadRectangle();

// Задача 4:
// Написать функцию перестановки значений двух прямоугольников

/// <summary>
/// Перестановка значений двух объектов местами
/// </summary>
/// <param name="rectangle1">Первый прямоугольник</param>
/// <param name="rectangle2">Второй прямоугольник</param>
void Exchange(Rectangle& rectangle1, Rectangle& rectangle2);

// Задача 5:
// Написать функцию поиска прямоугольника в массиве с самой большой длиной

/// <summary>
/// Поиск прямоугольника с максимальной длинной в заданном массиве
/// </summary>
/// <param name="rectangles">Указатель на первый элемент массива</param>
/// <param name="count">Количество элементов в массиве</param>
/// <returns>Индекс прямоугольника с максимальной длинной</returns>
int FindRectangleWithMaxLength(Rectangle* rectangles, int count);

// Задача 6:
// Написать функция поиска прямоугольника с максимальной площадью

/// <summary>
/// Поиск прямоугольника с максимальной площадью в заданном массиве
/// </summary>
/// <param name="rectangles">Указатель на первый элемент массива типа Rectangle</param>
/// <param name="count">Количество элементов в массиве</param>
/// <returns>Индекс прямоугольника с максимальной площадью в заданном массиве</returns>
int FindRectangleWithMaxArea(Rectangle* rectangles, int count);

/// <summary>
/// Функция по проверке правильности количества элементов в массиве
/// </summary>
/// <param name="count">Количество элеменов в массиве</param>
void AssertArray(int count);