#pragma once

#include "Book.h"

#include <iostream>

void DemoBook();

void ReadBookFromConsole(Book& book);

void WriteBookToConsole(const Book& book);

int GetInteger(std::string prompt = "", std::string error = "");

int GetInteger(int low, int high, std::string prompt = "", std::string error = "");