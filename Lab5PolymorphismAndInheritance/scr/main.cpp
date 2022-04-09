#include "inheritance/IOPerson.h"

#include "ProgramDemo.h"

int main()
{
	enum Demo
	{
		Person = 1,
		User,
		Discount
	};

	std::cout << "Enter 1 to run person demo.\n";
	std::cout << "Enter 2 to run user demo.\n";
	std::cout << "Enter 3 to run discount demo.\n";
	std::cout << "Enter 0 to close program.\n";

	int prompt = 0;
	while (true)
	{
		std::cout << "\nEnter command: ";
		std::cin >> prompt;
		std::cout << '\n';
		switch (prompt)
		{
			case Person:
			{
				WritePersonDemoToConsole();
				break;
			}
			case User:
			{
				WriteUserDemoToConsole();
				break;
			}
			case Discount:
			{
				WriteDiscountDemoToConsole();
				break;
			}
			default:
			{
				return 0;
			}
		}
	}
	return 0;
}