#include "IOPerson.h"

void WriteNamesToConsole(Person* person)
{
	std::cout << person->GetFirstName() << ' '
			  << person->GetSecondName() << ' '
			  << person->GetThirdName() << '\n';
}