#include "Rectangle.h"

void DemoRectangle()
{
	Rectangle rectangle1;
	rectangle1.Color = "Black";
	rectangle1.Length = 14;
	rectangle1.Width = 24;

	Rectangle rectangle2;
	std::cout << "Enter rectangle color: ";
	std::cin >> rectangle2.Color;
	std::cout << "Enter rectangle length: ";
	std::cin >> rectangle2.Length;
	std::cout << "Enter rectangle width: ";
	std::cin >> rectangle2.Width;
	std::cout << "Rectangle has the size: " << rectangle2.Length << "x" << rectangle2.Width
		<< " and " << rectangle2.Color << " color.\n";

	std::cout << "Arrays of rectangles:\n";
	Rectangle rectangles[2];
	rectangles[0] = rectangle1;
	rectangles[1] = rectangle2;
	for (int i = 0; i < 2; ++i)
	{
		std::cout << "Rectangle has the size: " << rectangles[i].Length << "x" << rectangles[i].Width
			<< " and " << rectangles[i].Color << " color.\n";
	}
	std::cout << "\n";
	
	Rectangle* pRectangle1 = &rectangle1;
	pRectangle1->Color = "White";
	pRectangle1->Length = 127;
	pRectangle1->Width = 31;
	std::cout << "Rectangle has the size: " << pRectangle1->Length << "x" << pRectangle1->Width
		<< " and " << pRectangle1->Color << " color.\n";

	Rectangle* pRectangle2 = pRectangle1;
	std::cout << "Adress of first pointer: " << pRectangle1 << '\n';
	std::cout << "Adress of second pointer: " << pRectangle2 << '\n';
}

void WriteRectangle(Rectangle& rectangle)
{
	std::cout << "Rectangle has the size: " << rectangle.Length << "x" << rectangle.Width
		<< " and " << rectangle.Color << " color.\n";
}

void ReadRectangle(Rectangle& rectangle)
{
	std::cout << "Enter the color of rectangle: ";
	std::cin >> rectangle.Color;
	std::cout << "Enter the length of rectangle: ";
	std::cin >> rectangle.Length;
	std::cout << "Enter the width of rectangle: ";
	std::cin >> rectangle.Width;
}

void DemoWriteAndReadRectangle()
{
	const int rectangleCount = 5;
	Rectangle rectangles[5];

	for (int i = 0; i < rectangleCount; ++i)
	{
		ReadRectangle(rectangles[i]);
	}
	for (int i = 0; i < rectangleCount; ++i)
	{
		WriteRectangle(rectangles[i]);
	}
}

void Exchange(Rectangle& rectangle1, Rectangle& rectangle2)
{
	Rectangle temporary;
	temporary = rectangle1;
	rectangle1 = rectangle2;
	rectangle2 = temporary;
}

// TODO: функция должна возвращать индекс, а работа с консолью вне функций с обработкой данных
void FindRectangleWithMaxLength(Rectangle* rectangles, int count)
{
	if (count < 0)
	{
		throw std::exception("Exception: Negative array length");
	}
	// TODO: инверсия условия
	if (count > 0)
	{
		Rectangle greaterLength;
		for (int i = 0; i < count; ++i)
		{
			if (greaterLength.Length < rectangles[i].Length)
			{
				greaterLength = rectangles[i];
			}
		}

		std::cout << "Rectangle with the greater length has size: " 
			<< greaterLength.Length << "x" << greaterLength.Width << '\n';
	}
	else
	{
		std::cout << "No Rectangles in the array\n";
	}
}

void FindRectangleWithMaxArea(Rectangle* rectangles, int count)
{
	// TODO: здесь и выше дублируются проверки внутри функции - вынести в отдельную функцию AssertArray()
	if (count < 0)
	{
		throw std::exception("Exception: Negative array length");
	}
	// TODO: инверсия условия
	if (count > 0)
	{
		Rectangle greaterArea;
		for (int i = 0; i < count; ++i)
		{
			if (greaterArea.Length * greaterArea.Width < rectangles[i].Length * rectangles[i].Width)
			{
				greaterArea = rectangles[i];
			}
		}

		std::cout << "Rectangle with the greater area has size: "
			<< greaterArea.Length << "x" << greaterArea.Width << '\n';
	}
	else
	{
		std::cout << "No Rectangles in the array\n";
	}
}
