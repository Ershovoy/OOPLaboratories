#pragma once

#include <exception>
//TODO: UTF8?
// 3.3.7
// Задание: Создать класс время, хранящий год, месяц, день, час, минуты.
// Реализовать конструкторы и сеттеры с проверкой на корректность введённых значений.

//TODO: Doxygen?
class Time
{
	int _year;
	int _month;
	int _day;
	int _hour;
	int _minute;

public:
	Time();
	Time(int year, int month, int day, int hour, int minute);

	bool operator<(const Time& right);
	bool operator>(const Time& right);

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
