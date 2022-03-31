#include "DoubleValidator.h"

bool DoubleValidator::IsPositiveValue(double value)
{
	if (value >= 0)
	{
		return true;
	}
	return false;
}

bool DoubleValidator::IsValueInRange(double value, double min, double max)
{
	if (min <= value && value <= max)
	{
		return true;
	}
	return false;
}

void DoubleValidator::AssertPositiveValue(double value)
{
	if (!IsPositiveValue(value))
	{
		throw std::exception("Value must be positive.");
	}
}

void DoubleValidator::AssertValueInRange(double value, double min, double max)
{
	if (!IsValueInRange(value, min, max))
	{
		throw std::exception("Value must be in specific range.");
	}
	
}