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
	// TODO: комментарии ко всем методам
	Point();
	Point(float x, float y);

	void SetX(float x);
	void SetY(float y);

	float GetX() const { return _x; }
	float GetY() const { return _y; }
};

