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
	//TODO: RSDN
	//TODO: duplication
	std::cout << "Rectangle has the size: " << rectangle2.Length << "x" << rectangle2.Width
		<< " and " << rectangle2.Color << " color.\n";

	std::cout << "Arrays of rectangles:\n";
	Rectangle rectangles[2];
	rectangles[0] = rectangle1;
	rectangles[1] = rectangle2;
	for (int i = 0; i < 2; ++i)
	{
		//TODO: RSDN
		//TODO: duplication
		std::cout << "Rectangle has the size: " << rectangles[i].Length << "x" << rectangles[i].Width
			<< " and " << rectangles[i].Color << " color.\n";
	}
	std::cout << "\n";

	//TODO: RSDN
	Rectangle* pRectangle1 = &rectangle1;
	pRectangle1->Color = "White";
	pRectangle1->Length = 127;
	pRectangle1->Width = 31;
	//TODO: RSDN
	//TODO: duplication
	std::cout << "Rectangle has the size: " << pRectangle1->Length << "x" << pRectangle1->Width
		<< " and " << pRectangle1->Color << " color.\n";

	//TODO: RSDN
	Rectangle* pRectangle2 = pRectangle1;
	std::cout << "Adress of first pointer: " << pRectangle1 << '\n';
	std::cout << "Adress of second pointer: " << pRectangle2 << '\n';
}

void WriteRectangle(Rectangle& rectangle)
{
	//TODO: RSDN
	//TODO: duplication
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
	//TODO: RSDN
	Rectangle temporary;
	temporary = rectangle1;
	rectangle1 = rectangle2;
	rectangle2 = temporary;
}

//TODO: UTF8?
// TODO: функция должна возвращать индекс, а работа с консолью вне функций с обработкой данных +
int FindRectangleWithMaxLength(Rectangle* rectangles, int count)
{
	AssertArray(count);
	//TODO: UTF8?
	// TODO: инверсия условия +
	if (count <= 0)
	{
		std::cout << "No Rectangles in the array\n";
		return -1;
	}

	int greaterLength = 0;
	for (int i = 0; i < count; ++i)
	{
		if (rectangles[greaterLength].Length < rectangles[i].Length)
		{
			greaterLength = i;
		}
	}

	return greaterLength;
}

int FindRectangleWithMaxArea(Rectangle* rectangles, int count)
{
	//TODO: UTF8?
	// TODO: здесь и выше дублируются проверки внутри функции - вынести в отдельную функцию AssertArray() +
	AssertArray(count);
	// TODO: инверсия условия +
	if (count <= 0)
	{
		std::cout << "No Rectangles in the array\n";
		return -1;
	}

	int greaterArea = 0;
	for (int i = 0; i < count; ++i)
	{
		//TODO: RSDN
		if (rectangles[greaterArea].Length * rectangles[greaterArea].Width < rectangles[i].Length * rectangles[i].Width)
		{
			greaterArea = i;
		}
	}

	return greaterArea;
}
