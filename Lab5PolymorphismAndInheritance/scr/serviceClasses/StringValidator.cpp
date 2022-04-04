#include "StringValidator.h"

void StringValidator::AssertNameLetters(const std::string& name)
{
	if (!('A' <= name[0] && name[0] <= 'Z'))
	{
		throw "Error occured: First letter of name must be capital.";
	}
	if (!IsContainOnlyLetters(name))
	{
		throw "Error occured: Name must have only letters.";
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