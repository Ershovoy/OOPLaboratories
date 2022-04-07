#pragma once

#include "Point.h"

#include <exception>

// UML диаграмма классов
// https://miro.com/app/board/uXjVOFkgw2A=/?invite_link_id=130325368379

/// <summary>
/// Класс описывающий прямоугольник с заданными сторонами,
///	композирующий класс Point
/// </summary>
class Rectangle
{
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
	// TODO: + комментарии ко всему
	
	/// <summary>
	/// Конструктор по умолчанию без параментов
	/// </summary>
	Rectangle();

	/// <summary>
	/// Конструктор с параметрами
	/// </summary>
	/// <param name="centre">Центр прямоугольника</param>
	/// <param name="width">Ширина прямоугольника</param>
	/// <param name="length">Длина прямоугольника</param>
	Rectangle(Point centre, float width, float length);

	/// <summary>
	/// Конструктор с параметрами
	/// </summary>
	/// <param name="centreX">Центр прямоугольника по координате X</param>
	/// <param name="centreY">Центр прямоугольника по координате Y</param>
	/// <param name="width">Ширина прямоугольника</param>
	/// <param name="length">Длина прямоугольника</param>
	Rectangle(int centreX, int centreY, float width, float length);

	/// <summary>
	/// Задать ширину прямоугольнику
	/// </summary>
	/// <param name="width">Значение новой ширины</param>
	void SetWidth(float width);

	/// <summary>
	/// Задать длину прямоугольнику
	/// </summary>
	/// <param name="length">Значение новой длины</param>
	void SetLength(float length);

	/// <summary>
	/// Задать позицию прямоугольника по точке
	/// </summary>
	/// <param name="centre">Новый центр прямоугольника</param>
	void SetCentre(Point centre);

	/// <summary>
	/// Задать позицию прямоугольника
	/// </summary>
	/// <param name="x">Позиция по X</param>
	/// <param name="y">Позиция по Y</param>
	void SetCentre(float x, float y);

	/// <summary>
	/// Получить ширину прямоугольника
	/// </summary>
	/// <returns>Значение ширины</returns>
	float GetWidth() const { return _width; }

	/// <summary>
	/// Получить длину прямоугольника
	/// </summary>
	/// <returns>Значение длины</returns>
	float GetLength() const { return _length; }

	/// <summary>
	/// Получить положение центра прямоугольника
	/// </summary>
	/// <returns>Значение центра</returns>
	Point GetCentre() const { return _centre; }

	/// <summary>
	/// Получить положение прямоугольника по X координате
	/// </summary>
	/// <returns>Положение по X</returns>
	float GetCentreX() const { return _centre.GetX(); }

	/// <summary>
	/// Получить положение прямогольника по Y координате
	/// </summary>
	/// <returns>Положение по Y</returns>
	float GetCentreY() const { return _centre.GetY(); }
};

/// <summary>
/// Вычисление среднего центра массива прямоугольников
/// </summary>
/// <param name="rectangles">Указатель на первый элемент массива</param>
/// <param name="rectangleCount">Количество элементов в массиве</param>
/// <returns>Среднее значение центра всех прямоугольнков</returns>
Point CalculateAverageCentrePosition(Rectangle* rectangles, int rectangleCount);