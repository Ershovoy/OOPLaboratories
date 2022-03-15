#include "Time.h"

Time::Time() : _year(0), _month(0), _day(0), _hour(0), _minute(0) {}

Time::Time(int year, int month, int day, int hour, int minute)
{
	SetYear(year);
	SetMonth(month);
	SetDay(day);
	SetHour(hour);
	SetMinute(minute);
}

bool Time::operator<(const Time& right)
{
	if (_year < right._year)
		return true;
	if (_year > right._year)
		return false;

	if (_month < right._month)
		return true;
	if (_month > right._month)
		return false;

	if (_day < right._day)
		return true;
	if (_day > right._day)
		return false;

	if (_hour < right._hour)
		return true;
	if (_hour > right._hour)
		return false;

	if (_minute < right._minute)
	{
		return true;
	}
	return false;
}

bool Time::operator>(const Time& right)
{
	return !(*this < right);
}

void Time::SetYear(int year)
{
	if (year < 0)
	{
		throw std::exception("Year can't be negative number.");
	}
	_year = year;
}

void Time::SetMonth(int month)
{
	if (!(0 < month && month <= 12))
	{
		throw std::exception("Month can't be less than 0 and greater than 12.");
	}
	_month = month;
}

void Time::SetDay(int day)
{
	if (!(0 < day && day <= 30))
	{
		throw std::exception("Day can't be less than 0 and greater than 30.");
	}
	_day = day;
}

void Time::SetHour(int hour)
{
	if (!(0 <= hour && hour < 24))
	{
		throw std::exception("Day have only 24 hours.");
	}
	_hour = hour;
}

void Time::SetMinute(int minute)
{
	if (!(0 <= minute && minute < 60))
	{
		throw std::exception("Hour have only 60 minutes.");
	}
	_minute = minute;
}
