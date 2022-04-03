#pragma once

#include "..\dependentFields\Rectangle.h"
#include "..\dependentFields\Ring.h"

// Задание:
// Реализовать сервесный по обработке коллизий.
// UML диаграмма классов
// https://miro.com/app/board/uXjVOFkgw2A=/?invite_link_id=761995098208

/// <summary>
/// Серверный класс по проверке столкновений использующийся для Rectangle и Ring
/// </summary>
class CollisionManager 
{
public:
	CollisionManager() = delete;

	/// <summary>
	/// Проверить столкнулись ли два прямоугольника между собой
	/// </summary>
	/// <param name="first">Первый прямоугольника</param>
	/// <param name="second">Второй прямоугольник</param>
	/// <returns>True если столкнулись, в противном случае false</returns>
	static bool IsCollision(const Rectangle& first, const Rectangle& second);

	/// <summary>
	/// Проверить столкнулись ли два кольца между собой
	/// </summary>
	/// <param name="first">Первое кольцо</param>
	/// <param name="second">Второе кольцо</param>
	/// <returns>True если столкнулись, в противном случае false</returns>
	static bool IsCollision(const Ring& first, const Ring& second);
};

