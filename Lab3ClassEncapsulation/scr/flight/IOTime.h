#pragma once

#include "Time.h"

#include <ostream>

/// <summary>
/// Перегрузка оператора вывода для вывод полей класса Time в консоль
/// </summary>
/// <param name="os">Поток вывода из стандартной библиотеки</param>
/// <param name="time">Время значение которого нужно вывести</param>
/// <returns>Поток вывода из стандартной библиотеки</returns>
std::ostream& operator<<(std::ostream& os, const Time& time);
