#pragma once

#include <string>
//TODO: ? Почему к большинству членов классов выбрано хранение в статической области?
//TODO: Doxygen?
struct Circle 
{
	double X; 
	double Y;
	double Radius;
	std::string Color; 
};

void DemoCircle();

//TODO: + UTF8?
// 2.2.7.1
// Задание:
// Написать функции конструкторы и функции копирования для выше описанной
// структуры, чтобы избавиться от дубликатов в функции DemoCircle().
Circle* MakeCircle(double x, double y, double radius, std::string color);

Circle* CopyCircle(Circle* cirlce);
