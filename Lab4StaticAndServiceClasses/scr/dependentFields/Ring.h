#pragma once

#include "Point.h"
#include "..\serviceClass\Math.h"
#include "..\serviceClass\DoubleValidator.h"

#include <exception>

// Задание:
// Реализовать класс Ring, со статическим счётчиком их количества.
// UML диаграмма классов
// https://miro.com/app/board/uXjVOFkgw2A=/?invite_link_id=761995098208

/// <summary>
/// Класс описывающий колько, композирующий Point
/// </summary>
class Ring
{
	/// <summary>
	/// Внутренний радиус кольца
	/// </summary>
	float _innerRadius;

	/// <summary>
	/// Внешний радиус кольца
	/// </summary>
	float _outerRadius;

	/// <summary>
	/// Центр кольца
	/// </summary>
	Point _centre;

	/// <summary>
	/// Общее количество колец
	/// </summary>
	/// <returns></returns>
	static int _allRingCount;

public:
	Ring();
	Ring(const Point& centre, float innerRadius, float outerRadius);
	Ring(float centreX, float centreY, float innerRadius, float outerRadius);
	~Ring();

	// Задание:
	// Добавить метод возвращающий площадь круга

	/// <summary>
	/// Вычислить прощадь данного кольца
	/// </summary>
	float CalculateArea();

	/// <summary>
	/// Задать внутренний и внешний радиус кольца
	/// </summary>
	void SetRadius(float innerRadius, float outerRadius);

	/// <summary>
	/// Получить внешний раудиус кольца
	/// </summary>
	float GetOuterRadius() const { return _outerRadius; }

	/// <summary>
	/// Получить внутренний радиус кольца
	/// </summary>
	float GetInnerRadius() const { return _innerRadius; }

	/// <summary>
	/// Получить координаты центра кольца
	/// </summary>
	Point GetCentre() const { return _centre; }

	/// <summary>
	/// Получить количество всех колец
	/// </summary>
	static int GetAllRingsCount() { return _allRingCount; }
};

