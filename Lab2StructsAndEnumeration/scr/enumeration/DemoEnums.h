#pragma once

#include <iostream>

//TODO: + UTF8?
//TODO: + Doxygen?
// 2.2.8 Перечисления

// Задача 1: 
// Cоздать перечисления: цвет, форма обучения, жанр,
// производитель телефона, день недели, время года.

#include "Color.h"
#include "EducationForm.h"
#include "Genre.h"
#include "SmartphoneManufacturer.h"
#include "WeekDay.h"
#include "YearTime.h"

// Задача 2:
// Написать функцию по демонстрации работы перечислений

/// <summary>
/// Функция по демонсрации работы перечислений
/// </summary>
void DemoEnums();

// Задача 3:
// Написать функцию вывода цвет в консоль
// TODO: + грамошибка

/// <summary>
/// Выводит цвет перечисления в консоль
/// </summary>
/// <param name="color">Значение перечесления, которое нужно вывести</param>
void WriteColor(Color color);

// Задача 4:
// Написать функцию чтения цвет с клавиатуры

/// <summary>
/// Запрос на ввод названия цвета с клавиатуры
/// </summary>
/// <returns>Значение перечесления, обозначающее цвет</returns>
Color ReadColor();

// Задача 5:
// Написать функцию подсчета красного цвета в массиве цветов

/// <summary>
/// Подсчёт количества красного цвета в заданном массиве
/// </summary>
/// <param name="colors">Указатель на первый элемент массива цветов</param>
/// <param name="count">Количество элементов в массиве</param>
/// <returns>Количество красного цвета в массиве</returns>
int CountRed(Color* colors, int count);

// Задача 6:
// Написать функцию аналогичную выше, но для подсчёта любого цвета

/// <summary>
/// Функция по подсчёту заданного цвета в массиве цветов
/// </summary>
/// <param name="colors">Указатель на первый элемент массива цветов</param>
/// <param name="count">Количество элементов в массиве</param>
/// <param name="findedColor">Цвет количество которого нужно посчитать</param>
/// <returns>Количество заданного цвета в массиве</returns>
int CountColor(Color* colors, int count, Color findedColor);
