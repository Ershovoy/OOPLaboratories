#include "NumberValidator.h"

// TODO: здесь и в других валидаторах: сообщение исключения сообщает,
// что число вышло за диапазон, но не говорит какое именно число (стоимость, координаты, возраст или что-то еще)
// Сделать метод более универсальным, сообщающим в тексте, какое именно число вышло за диапазон.
void NumberValidator::AssertNumberInRange(int number, int minimum, int maximum)
{
	if (!(minimum <= number && number <= maximum))
	{
		// TODO: нужно кидать не строки, а объекты класса exception()
		throw "Error occured: Number: " + std::to_string(number) + 
			  " not in range: [" + std::to_string(minimum) + 
			  ", " + std::to_string(maximum) + "].";
	}
}