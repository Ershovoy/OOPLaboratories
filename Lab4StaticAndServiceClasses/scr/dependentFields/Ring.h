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
	static int _allRingsCount; // TODO: + множественное число

public:
	// TODO: + комментарии у конструкторов здесь и во всех остальных файлах

	/// <summary>
	/// Конструктор по умолчанию без параметров
	/// </summary>
	Ring();
	
	/// <summary>
	/// Конструктор с параметрами
	/// </summary>
	/// <param name="centre">Центр кольца</param>
	/// <param name="innerRadius">Внутренний радиус кольца</param>
	/// <param name="outerRadius">Внешний радиус кольца</param>
	Ring(const Point& centre, float innerRadius, float outerRadius);

	/// <summary>
	/// Конструктор с параметрами
	/// </summary>
	/// <param name="float">Центр кольца по X</param>
	/// <param name="float">Центр кольца по Y</param>
	/// <param name="innerRadius">Внутренний радиус кольца</param>
	/// <param name="outerRadius">Внешний радиус кольца</param>
	Ring(float centreX, float centreY, float innerRadius, float outerRadius);
	
	/// <summary>
	/// Деструктор
	/// </summary>
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
	static int GetAllRingsCount() { return _allRingsCount; }
};

