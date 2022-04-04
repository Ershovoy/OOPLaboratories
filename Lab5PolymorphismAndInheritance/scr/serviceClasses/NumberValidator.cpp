#include "NumberValidator.h"

void NumberValidator::AssertNumberInRange(int number, int minimum, int maximum)
{
	if (!(minimum <= number && number <= maximum))
	{
		throw "Error occured: Number: " + std::to_string(number) + 
			  " not in range: [" + std::to_string(minimum) + 
			  ", " + std::to_string(maximum) + "].";
	}
}