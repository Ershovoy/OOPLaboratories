#pragma once

#include "Flight.h"
#include "IOTime.h"

#include <iostream>

// UML диаграмма классов
// https://miro.com/app/board/uXjVOFkgw2A=/?invite_link_id=761995098208

// 3.3.9 - 3.3.10
// Задание: Написать функцию с примером вывода массива авиарейсов на экран.

void DemoFlightWithTime();

void WriteFlightToConsole(const Flight& flight);