#pragma once

// UML диаграмма классов
// https://miro.com/app/board/uXjVOFkgw2A=/?invite_link_id=130325368379

/// <summary>
/// Класс описывающий точку на двумерной плоскости
/// </summary>
class Point
{
	//TODO: + RSDN
	
	/// <summary>
	/// Координата точки по X
	/// </summary>
	float _x;

	/// <summary>
	/// Координата точки по Y
	/// </summary>
	float _y;

public:
	// TODO: + комментарии ко всем методам

	/// <summary>
	/// Конструктор по умолчанию
	/// </summary>
	Point();

	/// <summary>
	/// Конструктор с параметрами
	/// </summary>
	/// <param name="x">Координата точки по X</param>
	/// <param name="y">Координата точки по Y</param>
	Point(float x, float y);

	/// <summary>
	/// Задать точке положение по координате X
	/// </summary>
	/// <param name="x">Координата X</param>
	void SetX(float x);

	/// <summary>
	/// Задать точке положение по координате Y
	/// </summary>
	/// <param name="y">Координата Y</param>
	void SetY(float y);

	/// <summary>
	/// Получить значение координаты точки по X
	/// </summary>
	/// <returns>Значение координаты по X</returns>
	float GetX() const { return _x; }

	/// <summary>
	/// Получить значение координаты точки по Y
	/// </summary>
	/// <returns>Значение координаты по Y</returns>
	float GetY() const { return _y; }
};

