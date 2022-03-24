#pragma once

#include <iostream>

//TODO: + UTF8?
//TODO: Doxygen?
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
// 
void DemoEnums();

// Задача 3:
// Написать функцию вывода цвет в консоль
// TODO: + грамошибка
void WriteColor(Color color);

// Задача 4:
// Написать функцию чтения цвет с клавиатуры
Color ReadColor();

// Задача 5:
// Написать функцию подсчета красного цвета в массиве цветов
int CountRed(Color* colors, int count);

// Задача 6:
// Написать функцию аналогичную выше, но для подсчёта любого цвета
int CountColor(Color* colors, int count, Color findedColor);