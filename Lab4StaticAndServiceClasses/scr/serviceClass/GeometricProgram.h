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
	void WriteRectangleToConsole(const Rectangle& rectangle);
	void WriteRingToConsole(const Ring& ring);
	void WriteCollisionToConsole(const Rectangle& first, const Rectangle& second);
	void WriteCollisionToConsole(const Ring& first, const Ring& second);

	void PushRingToVector(const Point& iCentre, float iInnerRadius, 
		float iOuterRadius, std::vector<Ring*>& oVector);

public:
	void DemoCollision();
	void DemoRing();
};

