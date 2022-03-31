#pragma once

#include "Point.h"
#include "..\serviceClass\Math.h"
#include "..\serviceClass\DoubleValidator.h"

#include <exception>

// Задание:
// Реализовать класс Ring, со статическим счётчиком их количества.
// UML диаграмма классов
// https://miro.com/app/board/uXjVOFkgw2A=/?invite_link_id=761995098208

class Ring
{
	float _outerRadius;
	float _innerRadius;
	Point _centre;

	static int _allRingCount;

public:
	Ring();
	Ring(const Point& centre, float innerRadius, float outerRadius);
	Ring(float centreX, float centreY, float innerRadius, float outerRadius);
	~Ring();

	// Задание:
	// Добавить метод возвращающий площадь круга
	float CalculateArea();

	void SetRadius(float innerRadius, float outerRadius);

	float GetOuterRadius() const { return _outerRadius; }
	float GetInnerRadius() const { return _innerRadius; }
	Point GetCentre() const { return _centre; }
	static int GetAllRingsCount() { return _allRingCount; }
};

