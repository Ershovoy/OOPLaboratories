#include "Person.h"

Person::Person(const std::string& firstName, 
			   const std::string & surname, 
			   const std::string& patronymic)
{
	SetFirstName(firstName);
	SetSecondName(surname);
	SetThirdName(patronymic);
}

void Person::SetFirstName(const std::string& firstName)
{
	StringValidator::AssertNameLetters(firstName);
	_firstName = firstName;
}

void Person::SetSecondName(const std::string& surname)
{
	StringValidator::AssertNameLetters(surname);
	_surname = surname;
}

void Person::SetThirdName(const std::string& patronymic)
{
	StringValidator::AssertNameLetters(patronymic);
	_patronymic = patronymic;
}