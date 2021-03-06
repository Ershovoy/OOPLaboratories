#include "IORectangle.h"

void DemoRectangleWithPoint()
{
	const int RECTANGLE_COUNT = 5;
	Rectangle rectangles[RECTANGLE_COUNT];
	for (int i = 0; i < RECTANGLE_COUNT; ++i)
	{
		rectangles[i].SetCentre(float(rand() % 100), float(rand() % 100));
		rectangles[i].SetWidth(float(rand() % 100));
		rectangles[i].SetLength(float(rand() % 100));
	}
	for (int i = 0; i < RECTANGLE_COUNT; ++i)
	{
		WriteRectangleToConsole(rectangles[i]);
	}
}

void WriteRectangleToConsole(const Rectangle& rectangle)
{
	std::cout << "X = " << rectangle.GetCentreX() << "; "
			  << "Y = " << rectangle.GetCentreY() << "; "
			  << "Length = " << rectangle.GetLength() << "; "
			  << "Width = " << rectangle.GetWidth() << ";\n";
}