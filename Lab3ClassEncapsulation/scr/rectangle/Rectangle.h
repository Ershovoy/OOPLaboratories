#pragma once

#include "Point.h"

#include <exception>

//TODO: + UTF8?
//TODO: + Doxygen?
// UML диаграмма классов
// https://miro.com/app/board/uXjVOFkgw2A=/?invite_link_id=130325368379

/// <summary>
/// Класс описывающий прямоугольник с заданными сторонами,
///	композирующий класс Point
/// </summary>
class Rectangle
{
	//TODO: + RSDN
	
	/// <summary>
	/// Ширина прямоугольника
	/// </summary>
	float _width;

	/// <summary>
	/// Длина прямоугольника
	/// </summary>
	float _length;

	/// <summary>
	/// Центр прямоугольника
	/// </summary>
	Point _centre;

public:
	Rectangle();
	Rectangle(Point centre, float width, float length);
	Rectangle(int centreX, int centreY, float width, float length);

	void SetWidth(float width);
	void SetLength(float length);
	void SetCentre(Point centre);
	void SetCentre(float x, float y);

	float GetWidth() const { return _width; }
	float GetLength() const { return _length; }
	Point GetCentre() const { return _centre; }
	float GetCentreX() const { return _centre.GetX(); }
	float GetCentreY() const { return _centre.GetY(); }
};

/// <summary>
/// Вычисление среднего центра массива прямоугольников
/// </summary>
/// <param name="rectangles">Указатель на первый элемент массива</param>
/// <param name="rectangleCount">Количество элементов в массиве</param>
/// <returns>Среднее значение центра всех прямоугольнков</returns>
Point CalculateAverageCentrePosition(Rectangle* rectangles, int rectangleCount);