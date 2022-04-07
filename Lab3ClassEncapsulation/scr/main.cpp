#include "rectangle/IORectangle.h"
#include "flight/IOFlight.h"
#include "book/IOBook.h"
#include "band/IOBand.h"

#include <exception>
#include <iostream>

int main()
{
	enum Demo
	{
		Rectangle = 1,
		Flight,
		Book,
		Band
	};

	std::cout << "Enter 1 to run rectangle demo.\n";
	std::cout << "Enter 2 to run flight demo.\n";
	std::cout << "Enter 3 to run book demo.\n";
	std::cout << "Enter 4 to run band demo.\n";
	std::cout << "Enter 0 to close program.\n";

	int prompt = 0;
	while (true)
	{
		std::cout << "\nEnter command: ";
		std::cin >> prompt;
		std::cout << '\n';
		switch (prompt)
		{
			case Rectangle:
			{
				try
				{
					DemoRectangleWithPoint();
				}
				//TODO: + передача по значению?
				catch (const std::exception& exception)
				{
					std::cerr << exception.what() << '\n';
				}
				break;
			}
			case Flight:
			{
				try
				{
					DemoFlightWithTime();
				}
				catch (const std::exception& exception)
				{
					std::cerr << exception.what() << '\n';
				}
				break;
			}
			case Book:
			{
				try
				{
					DemoBook();
				}
				catch (const std::exception& exception)
				{
					std::cerr << exception.what() << '\n';
				}
				break;
			}
			case Band:
			{
				try
				{
					DemoBand();
				}
				catch (const std::exception& exception)
				{
					std::cerr << exception.what() << '\n';
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