#include "NumberValidator.h"

// TODO: + здесь и в других валидаторах: сообщение исключения сообщает,
// что число вышло за диапазон, но не говорит какое именно число (стоимость, координаты, возраст или что-то еще)
// Сделать метод более универсальным, сообщающим в тексте, какое именно число вышло за диапазон.
void NumberValidator::AssertNumberInRange(double number,
										  double minimum,
										  double maximum,
										  const std::string& numberType)
{
	if (!(minimum <= number && number <= maximum))
	{
		// TODO: + нужно кидать не строки, а объекты класса exception()
		std::string exceptionMessage =
			"Error occured: " + numberType + ": " + std::to_string(number) +
			" not in range: [" + std::to_string(minimum) +
			", " + std::to_string(maximum) + "].";
		throw std::exception(exceptionMessage.c_str());
	}
}

void NumberValidator::AssertNumberInRange(float number, float minimum, float maximum, const std::string& numberType)
{
	AssertNumberInRange((double)number, (double)minimum, (double)maximum, numberType);
}

void NumberValidator::AssertNumberInRange(int number, int minimum, int maximum, const std::string& numberType)
{
	AssertNumberInRange((double)number, (double)minimum, (double)maximum, numberType);
}
