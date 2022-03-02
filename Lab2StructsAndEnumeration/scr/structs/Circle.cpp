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

	// TODO: ������� ������� �����������. ��� ������������ ������?
}

Circle* MakeCircle(double x, double y, double radius, std::string color)
{
	Circle* circle = new Circle;
	circle->X = x;
	circle->Y = y;
	circle->Radius = radius;
	circle->Color = color;
	return circle;
}

Circle* CopyCircle(Circle* cirlce)
{
	Circle* newCircle = new Circle;
	*newCircle = *cirlce;
	return newCircle;
}
