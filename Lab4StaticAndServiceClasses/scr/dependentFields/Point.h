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
	// TODO: комментарии ко всему
	Point();
	Point(float x, float y);

	void SetX(float x);
	void SetY(float y);

	float GetX() const { return _x; }
	float GetY() const { return _y; }
};

