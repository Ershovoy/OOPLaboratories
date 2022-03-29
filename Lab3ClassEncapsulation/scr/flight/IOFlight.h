#pragma once

#include "Flight.h"
#include "IOTime.h"

#include <iostream>

//TODO: + UTF8?
////TODO: + Doxygen?
// UML диаграмма классов
// https://miro.com/app/board/uXjVOFkgw2A=/?invite_link_id=761995098208

// 3.3.9 - 3.3.10
// Задание: Написать функцию с примером вывода массива авиарейсов на экран.

/// <summary>
/// Демонстрация работы с классом Flight
/// </summary>
void DemoFlightWithTime();

/// <summary>
/// Вывод полей авиарейса в консоль
/// </summary>
/// <param name="flight">Авиарейс значение которого надо вывести</param>
void WriteFlightToConsole(const Flight& flight);
