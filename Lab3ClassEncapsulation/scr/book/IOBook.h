#pragma once

#include "Book.h"

#include <iostream>

/// <summary>
/// Демонстрация работы со структурой Book
/// </summary>
void DemoBook();

/// <summary>
/// Заполнение полей структуры Book с клавиатуры
/// </summary>
/// <param name="book">Объект значение полей которого нужно заполнить</param>
void ReadBookFromConsole(Book& book);

/// <summary>
/// Вывести значения полей структуры Book в консоль
/// </summary>
/// <param name="book">Книга значение которой нужно вывести</param>
void WriteBookToConsole(const Book& book);

/// <summary>
/// Запросить пользователя ввести число с клавиатуры
/// </summary>
/// <param name="prompt">Приветственное сообщение</param>
/// <param name="error">Сообщение о некорректном вводе</param>
/// <returns>Корректное число введённое пользователем</returns>
int GetInteger(const std::string& prompt = "", const std::string& error = "");

/// <summary>
/// Запросить пользователя ввести число с клавиатуры в заданном диапазоне
/// </summary>
/// <param name="low">Минимально допустимое число, включительно</param>
/// <param name="high">Максимально допустимое число, включительно</param>
/// <param name="prompt">Приветственное сообщение</param>
/// <param name="error">Сообщение о некорректном вводе</param>
/// <returns>Корректное число введённое пользователем</returns>
int GetInteger(int low, int high, const std::string& prompt = "", const std::string& error = "");