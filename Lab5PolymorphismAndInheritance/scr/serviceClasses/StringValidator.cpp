#include "StringValidator.h"

// TODO: ? валидатор по возможности должен быть отвязан от конкретной предметной области для возможности переиспользования
void StringValidator::AssertNameLetters(const std::string& name)
{
	if (!('A' <= name[0] && name[0] <= 'Z'))
	{
		// TODO: + нужно кидать не строки, а объекты класса exception()
		throw std::exception("Error occured: First letter of name must be capital.");
	}
	if (!IsContainOnlyLetters(name))
	{
		// TODO: + нужно кидать не строки, а объекты класса exception()
		throw std::exception("Error occured: Name must have only letters.");
	}
}

bool StringValidator::IsAlphanumeric(const std::string& string)
{
	for (char letter : string)
	{
		if (!(isalpha(letter) || isdigit(letter)))
		{
			return false;
		}
	}
	return true;
}

bool StringValidator::IsContainOnlyLetters(const std::string& string)
{
	for (char letter : string)
	{
		if (!isalpha(letter))
		{
			return false;
		}
	}
	return true;
}