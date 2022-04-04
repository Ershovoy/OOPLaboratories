#include "Person.h"

Person::Person(const std::string& firstName, 
			   const std::string & secondName, 
			   const std::string& thirdName)
{
	SetFirstName(firstName);
	SetSecondName(secondName);
	SetThirdName(thirdName);
}

void Person::SetFirstName(const std::string& firstName)
{
	StringValidator::AssertNameLetters(firstName);
	_firstName = firstName;
}

void Person::SetSecondName(const std::string& secondName)
{
	StringValidator::AssertNameLetters(secondName);
	_secondName = secondName;
}

void Person::SetThirdName(const std::string& thirdName)
{
	StringValidator::AssertNameLetters(thirdName);
	_thirdName = thirdName;
}