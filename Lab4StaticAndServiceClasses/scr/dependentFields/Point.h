#pragma once

/// <summary>
/// Класс описывающий точку на двумерной плоскости
/// </summary>
class Point
{
	/// <summary>
	/// Координата точки по X
	/// </summary>
	float _x;

	/// <summary>
	/// Координата точки по Y
	/// </summary>
	float _y;

public:
	// TODO: + комментарии ко всему
	
	/// <summary>
	/// Конструктор по умолчанию без параметров
	/// </summary>
	Point();

	/// <summary>
	/// Конструктор с параметрами
	/// </summary>
	/// <param name="x">Координата точки по X</param>
	/// <param name="y">Координата точки по Y</param>
	Point(float x, float y);

	/// <summary>
	/// Задать значение координаты точки по X
	/// </summary>
	/// <param name="x">Новое значение координаты по X</param>
	void SetX(float x);

	/// <summary>
	/// Задать значение координаты точки по Y
	/// </summary>
	/// <param name="y">Новое значение координаты по Y</param>
	void SetY(float y);

	/// <summary>
	/// Получить координаты точки по X
	/// </summary>
	/// <returns>Значение точки по X</returns>
	float GetX() const { return _x; }

	/// <summary>
	/// Получить координаты точки по Y
	/// </summary>
	/// <returns>Значение точки по Y</returns>
	float GetY() const { return _y; }
};

