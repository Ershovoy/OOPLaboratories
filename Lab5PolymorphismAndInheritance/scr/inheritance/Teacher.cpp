#include "Teacher.h"

Teacher::Teacher(const std::string& firstName,
				 const std::string& secondName, 
				 const std::string& thirdName, 
				 const std::string& position) :
				 Person(firstName, secondName, thirdName)
{
	SetPosition(position);
}

void Teacher::SetPosition(std::string position)
{
	if(!StringValidator::IsContainOnlyLetters(position))
	{
		throw "Error occure: Position of teacher must have only letter.";
	}
	_position = position;
}