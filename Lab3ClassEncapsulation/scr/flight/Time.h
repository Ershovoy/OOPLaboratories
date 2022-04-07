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
	/// <summary>
	/// Конструктор по умолчанию без параментов
	/// </summary>
	Time();

	/// <summary>
	/// Конструктор с параментами
	/// </summary>
	/// <param name="year">Год</param>
	/// <param name="month">Месяц</param>
	/// <param name="day">День</param>
	/// <param name="hour">Час</param>
	/// <param name="minute">Минута</param>
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

	/// <summary>
	/// Изменить текущий год на заданный
	/// </summary>
	/// <param name="year">Заданный год</param>
	void SetYear(int year);

	/// <summary>
	/// Изменить текущий месяц на заданный
	/// </summary>
	/// <param name="month">Заданный месяц</param>
	void SetMonth(int month);

	/// <summary>
	/// Изменить текущий день на заданный
	/// </summary>
	/// <param name="day">Заданный день</param>
	void SetDay(int day);

	/// <summary>
	/// Изменить текущий час на заданный
	/// </summary>
	/// <param name="hour">Заданный час</param>
	void SetHour(int hour);

	/// <summary>
	/// Изменить текущую минуту на заданную
	/// </summary>
	/// <param name="minute">Заданная минута</param>
	void SetMinute(int minute);

	/// <summary>
	/// Получить текущий год
	/// </summary>
	/// <returns>Значение года</returns>
	int GetYear() const { return _year; }

	/// <summary>
	/// Получить текущий месяц
	/// </summary>
	/// <returns>Значение месяца</returns>
	int GetMonth() const { return _month; }

	/// <summary>
	/// Получить текущий день
	/// </summary>
	/// <returns>Значение дня</returns>
	int GetDay() const { return _day; }

	/// <summary>
	/// Получить текущий час
	/// </summary>
	/// <returns>Значение часа</returns>
	int GetHour() const { return _hour; }

	/// <summary>
	/// Получить текущие значение минут
	/// </summary>
	/// <returns>Значение минут</returns>
	int GetMinute() const { return _minute; }
};
