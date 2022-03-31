#pragma once

#include "..\dependentFields\Rectangle.h"
#include "..\dependentFields\Ring.h"

// Задание:
// Реализовать сервесный по обработке коллизий.
// UML диаграмма классов
// https://miro.com/app/board/uXjVOFkgw2A=/?invite_link_id=761995098208

class CollisionManager
{
public:
	static bool IsCollision(const Rectangle& first, const Rectangle& second);
	static bool IsCollision(const Ring& first, const Ring& second);
};

