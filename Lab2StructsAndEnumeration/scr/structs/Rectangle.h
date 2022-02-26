#pragma once

#include <string>
#include <iostream>

// 2.2.2 Создание структур
// Задача: Описать структуру прямоугольник

struct Rectangle
{
	double Length;
	double Width;
	std::string Color;
};

// 2.2.3 Создание объектов структур
// Задача: 
// Создать функцию инициализирующую массив описанной ваше структуры
// и вывести значения каждого поля в консоль
void DemoRectangle();

//
// 2.2.5 Структуры и функции
//

// Задача 1:
// Создать функцию вывода значений полей прямоугольника в консоль
void WriteRectangle(Rectangle& rectangle);

// Задача 2:
// Создать функцию заполнения значений полей прямоугольника с клавиатуры
void ReadRectangle(Rectangle& rectangle);

// Задача 3:
// Написать функцию вызывающую ранее созданные функции
void DemoWriteAndReadRectangle();

// Задача 4:
// Написать функцию перестановки значений двух прямоугольников
void Exchange(Rectangle& rectangle1, Rectangle& rectangle2);

// Задача 5:
// Написать функцию поиска прямоугольника в массиве с самой большой длиной
void FindRectangleWithMaxLength(Rectangle* rectangles, int count);

// Задача 6:
// Написать функция поиска прямоугольника с максимальной площадью
void FindRectangleWithMaxArea(Rectangle* rectangles, int count);