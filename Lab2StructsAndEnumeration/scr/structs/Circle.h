#pragma once

#include <string>
//TODO: Почему к большинству членов классов выбрано хранение в статической области?
//TODO: Doxygen?
struct Circle 
{
	double X; 
	double Y;
	double Radius;
	std::string Color; 
};

void DemoCircle();

//TODO: UTF8?
// 2.2.7.1
// Çàäàíèå: 
// Íàïèñàòü ôóíêöèè êîíñòðóêòîðû è ôóíêöèè êîïèðîâàíèÿ äëÿ âûøå îïèñàííîé
// ñòðóêòóðû, ÷òîáû èçáàâèòüñÿ îò äóáëèêàòîâ â ôóíêöèè DemoCircle().
Circle* MakeCircle(double x, double y, double radius, std::string color);

Circle* CopyCircle(Circle* cirlce);
