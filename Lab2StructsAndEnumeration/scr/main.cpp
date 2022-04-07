#include <iostream>

#include "structs/Circle.h"
#include "structs/Flight.h"
#include "structs/Movie.h"
#include "structs/Rectangle.h"
#include "enumeration/DemoEnums.h"

int main()
{
	enum Demo
	{
		Circle = 1,
		Flight,
		Movie,
		Rectangle,
		Enums
	};

	std::cout << "Enter 1 to run circle demo.\n";
	std::cout << "Enter 2 to run flight demo.\n";
	std::cout << "Enter 3 to run movie demo.\n";
	std::cout << "Enter 4 to run rectangle demo.\n";
	std::cout << "Enter 5 to run enums demo.\n";
	std::cout << "Enter 0 to close program.\n";

	int prompt = 0;
	while (true)
	{
		std::cout << "\nEnter command: ";
		std::cin >> prompt;
		std::cout << '\n';
		switch (prompt)
		{
			case Circle:
			{
				try
				{
					DemoCircle();
				}
				catch (const std::exception& e)
				{
					std::cerr << e.what() << "\n";
				}
				break;
			}
			case Flight:
			{
				try
				{
					DemoFlight();
				}
				catch (const std::exception& e)
				{
					std::cerr << e.what() << "\n";
				}
				break;
			}
			case Movie:
			{
				try
				{
					DemoMovie();
				}
				catch (const std::exception& e)
				{
					std::cerr << e.what() << "\n";
				}
				break;
			}
			case Rectangle:
			{
				try
				{
					DemoRectangle();
				}
				catch (const std::exception& e)
				{
					std::cerr << e.what() << "\n";
				}
				break;
			}
			case Enums:
			{
				try
				{
					DemoEnums();
				}
				catch (const std::exception& e)
				{
					std::cerr << e.what() << "\n";
				}
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