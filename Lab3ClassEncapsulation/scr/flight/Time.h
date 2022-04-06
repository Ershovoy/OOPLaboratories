#pragma once

#include <exception>
// 3.3.7
// Задание: Создать класс время, хранящий год, месяц, день, час, минуты.
// Реализовать конструкторы и сеттеры с проверкой на корректность введённых значений.

/// <summary>
/// Класс описывающий время с момента начала нашей эры
/// </summary>
class Time
{
	/// <summary>
	/// Текущий год
	/// </summary>
	int _year;

	/// <summary>
	/// Текущий месяц
	/// </summary>
	int _month;

	/// <summary>
	/// Текущий день
	/// </summary>
	int _day;

	/// <summary>
	/// Тукущий час
	/// </summary>
	int _hour;

	/// <summary>
	/// Текущая минута
	/// </summary>
	int _minute;

	/// <summary>
	/// Количество секунд в минуте и так далее...
	/// </summary>
	static const int SECOND_PER_MINUTE = 60;
	static const int MINUTE_PER_HOUR = 60;
	static const int HOUR_PER_DAY = 24;
	static const int DAY_PER_MONTH = 30;
	static const int MONTH_PER_YEAR = 12;

public:
	Time();
	Time(int year, int month, int day, int hour, int minute);

	/// <summary>
	/// Переопределение оператора меньше для сравнения времени
	/// </summary>
	/// <param name="right">Время с котором нужно сравнить текущее</param>
	/// <returns>True - если меньше, false - если больше</returns>
	bool operator<(const Time& right);

	/// <summary>
	/// Переопределение оператора больше для сравнения времени
	/// </summary>
	/// <param name="right">Время с котором нужно сравнить текущее</param>
	/// <returns>True - если больше, false - если меньше</returns>
	bool operator>(const Time& right);

	/// <summary>
	/// Переводит текущее времени в минуты
	/// </summary>
	/// <returns>Количество минут</returns>
	int ToMinute();

	void SetYear(int year);
	void SetMonth(int month);
	void SetDay(int day);
	void SetHour(int hour);
	void SetMinute(int minute);

	int GetYear() const { return _year; }
	int GetMonth() const { return _month; }
	int GetDay() const { return _day; }
	int GetHour() const { return _hour; }
	int GetMinute() const { return _minute; }
};
