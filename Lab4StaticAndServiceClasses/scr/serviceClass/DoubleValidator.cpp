#include "DoubleValidator.h"

bool DoubleValidator::IsPositiveValue(double value)
{
	// TODO: + здесь и далее - просто return, не нужен if
	return value >= 0;
}

bool DoubleValidator::IsValueInRange(double value, double min, double max)
{
	return min <= value && value <= max;
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