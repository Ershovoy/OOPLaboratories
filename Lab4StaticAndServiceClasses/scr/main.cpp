#include "serviceClass/GeometricProgram.h"

#include <iostream>

int main()
{
	enum Demo
	{
		RingDemo = 1,
		CollisionDemo
	};
	GeometricProgram program;

	std::cout << "Enter 1 to run ring demo.\n";
	std::cout << "Enter 2 to run collision demo.\n";
	std::cout << "Enter 0 to close program.\n";
	
	int prompt = 0;
	while (true)
	{
		std::cout << "\nEnter command: ";
		std::cin >> prompt;
		std::cout << '\n';
		switch (prompt)
		{
			case RingDemo:
			{
				program.DemoRing();
				break;
			}
			case CollisionDemo:
			{
				program.DemoCollision();
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