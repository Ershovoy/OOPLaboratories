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
	//TODO: + RSDN
	//TODO: + duplication
	WriteRectangle(rectangle2);

	std::cout << "Arrays of rectangles:\n";
	Rectangle rectangles[2];
	rectangles[0] = rectangle1;
	rectangles[1] = rectangle2;
	for (int i = 0; i < 2; ++i)
	{
		//TODO: + RSDN
		//TODO: + duplication
		WriteRectangle(rectangles[i]);
	}
	std::cout << "\n";

	//TODO: + RSDN
	Rectangle* pointerToFirstRectangle = &rectangle1;
	pointerToFirstRectangle->Color = "White";
	pointerToFirstRectangle->Length = 127;
	pointerToFirstRectangle->Width = 31;
	//TODO: + RSDN
	//TODO: + duplication
	WriteRectangle(*pointerToFirstRectangle);

	//TODO: + RSDN
	Rectangle* pointerToSecondRectangle = pointerToFirstRectangle;
	std::cout << "Adress of first pointer: " << pointerToFirstRectangle << '\n';
	std::cout << "Adress of second pointer: " << pointerToFirstRectangle << '\n';
}

void WriteRectangle(const Rectangle& rectangle)
{
	//TODO: + RSDN
	//TODO: + duplication
	std::cout << "Rectangle has the size: " << rectangle.Length
		<< "x" << rectangle.Width << " and "
		<< rectangle.Color << " color.\n";
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
	//TODO: + RSDN
	Rectangle exchangeBuffer;
	exchangeBuffer = rectangle1;
	rectangle1 = rectangle2;
	rectangle2 = exchangeBuffer;
}

//TODO: + UTF8?
// TODO: + функция должна возвращать индекс, а работа с консолью вне функций с обработкой данных
int FindRectangleWithMaxLength(const Rectangle* rectangles, int count)
{
	//TODO: + UTF8?
	// TODO: + инверсия условия
	AssertArray(count);

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

int FindRectangleWithMaxArea(const Rectangle* rectangles, int count)
{
	//TODO: + UTF8?
	// TODO: + здесь и выше дублируются проверки внутри функции - вынести в отдельную функцию AssertArray()
	// TODO: + инверсия условия
	AssertArray(count);

	int greaterArea = 0;
	for (int i = 0; i < count; ++i)
	{
		//TODO: + RSDN
		if (rectangles[greaterArea].Length * rectangles[greaterArea].Width 
			< rectangles[i].Length * rectangles[i].Width)
		{
			greaterArea = i;
		}
	}

	return greaterArea;
}

void AssertArray(int count)
{
	if (count <= 0)
	{
		throw std::exception("Exception: Negative or zero array length");
	}
}