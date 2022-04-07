#pragma once

#include "..\dependentFields\Ring.h"
#include "..\dependentFields\Rectangle.h"
#include "CollisionManager.h"

#include <vector>
#include <iostream>

// Задание:
// Реализовать сервесный класс по демонстрации работы программы для пользовательного интерфейса.
// UML диаграмма классов
// https://miro.com/app/board/uXjVOFkgw2A=/?invite_link_id=761995098208

class GeometricProgram
{
	/// <summary>
	/// Вывод значений полей заданного прямоугольника
	/// </summary>
	/// <param name="rectangle">Прямоугольник значение полей которого нужно вывести</param>
	void WriteRectangleToConsole(const Rectangle& rectangle);

	/// <summary>
	/// Вывод значений полей заданного кольца
	/// </summary>
	/// <param name="ring">Кольцо для вывода</param>
	void WriteRingToConsole(const Ring& ring);

	/// <summary>
	/// Вывод состояний прямоугольников и состояние их столкновений в консоль
	/// </summary>
	/// <param name="first">Первый прямоугольник</param>
	/// <param name="second">Второй прямоугольник</param>
	void WriteCollisionToConsole(const Rectangle& first, 
								 const Rectangle& second);

	/// <summary>
	/// Вовод состояний колец и их столкновений в консоль
	/// </summary>
	/// <param name="first">Первое кольцо</param>
	/// <param name="second">Второе кольцо</param>
	void WriteCollisionToConsole(const Ring& first, 
								const Ring& second);

	/// <summary>
	/// Создать и поместить кольцо в заданных массив
	/// </summary>
	/// <param name="iCentre">Центр нового кольца</param>
	/// <param name="iInnerRadius">Внутренний радиус нового кольца</param>
	/// <param name="iOuterRadius">Внутренний радиус нового кольца</param>
	/// <param name="oVector">Массив куда поместить созданное кольцо</param>
	void PushRingToVector(const Point& iCentre, 
						  float iInnerRadius, 
						  float iOuterRadius, 
						  std::vector<Ring*>& oVector);

public:
	/// <summary>
	/// Демонстрация работы столкновений
	/// </summary>
	void DemoCollision();

	/// <summary>
	/// Демонстрация класса описывающего кольцо
	/// </summary>
	void DemoRing();
};

