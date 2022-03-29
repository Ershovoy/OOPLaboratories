#pragma once

#include <exception>
#include <iostream>

// 2.2.1 Обработка исключений
// Обработать исключение при сортировки массива с отрицательным числом элементов.

/// <summary>
/// Сортировка массива вставками по возрастанию
/// </summary>
/// <param name="values">Указатель на первый элемент массива</param>
/// <param name="count">Количество элементов в массиве</param>
void Sort(double* values, int count);

/// <summary>
/// Демонстрация работы сортировки
/// </summary>
void DemoSort();