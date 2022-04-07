#include "Circle.h"

void DemoCircle()
{
	Circle* circle1 = MakeCircle(5.0, 7.0, 7.5, "Red");
	Circle* circle2 = MakeCircle(21.0, 5.0, 42.5, "Blue");
	Circle* circle3 = MakeCircle(0.0, 0.0, 3.5, "Black");
	Circle* circle4 = MakeCircle(5.0, 2.0, 7.5, "Red");

	Circle* copiedCircle1 = CopyCircle(circle1);
	Circle* copiedCircle2 = CopyCircle(circle2);
	Circle* copiedCircle3 = CopyCircle(circle3);
	Circle* copiedCircle4 = CopyCircle(circle4);

	std::cout << "Four copied circle:\n";
	WriteCircleToConsole(copiedCircle1);
	WriteCircleToConsole(copiedCircle2);
	WriteCircleToConsole(copiedCircle3);
	WriteCircleToConsole(copiedCircle4);

	//TODO: + UTF8?
	// TODO: + Освобождение памяти?
	delete circle1;
	delete circle2;
	delete circle3;
	delete circle4;
}

Circle* MakeCircle(double x, double y, double radius, const std::string& color)
{
	Circle* circle = new Circle;
	circle->X = x;
	circle->Y = y;
	circle->Radius = radius;
	circle->Color = color;
	return circle;
}

//TODO: + Это же не копирование, а просто присваивание указателя.
Circle* CopyCircle(const Circle* cirlce)
{
	//std::cout << cirlce << '\n';
	Circle* newCircle = new Circle;
	//std::cout << newCircle << '\n';
	*newCircle = *cirlce;
	//std::cout << newCircle << '\n';
	return newCircle;
}

void WriteCircleToConsole(const Circle* circle)
{
	std::cout << "Circle:\n";
	std::cout << "\tCoordinate X: " << circle->X << '\n';
	std::cout << "\tCoordinate Y: " << circle->Y << '\n';
	std::cout << "\tRadius: " << circle->Radius << '\n';
	std::cout << "\tColor: " << circle->Color << '\n';
}
