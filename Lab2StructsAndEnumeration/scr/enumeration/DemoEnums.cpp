#include "DemoEnums.h"

void DemoEnums()
{
	Color color = Color::Blue;
	Genre genre = Genre::Drama;
	WeekDay weekDay = WeekDay::Thursday;
	YearTime yearTime = YearTime::Spring;

	const int arraySize = 6;
	Color colorArray[arraySize];
	colorArray[0] = Color::Blue;
	colorArray[1] = Color::Orange;
	colorArray[2] = Color::Green;
	colorArray[3] = Color::Red;
	colorArray[4] = Color::Yellow;
	colorArray[5] = ReadColor();

	std::cout << "Count of Red color in the array: " << CountRed(colorArray, arraySize) << '\n';
	std::cout << "Count of Purple color in the array: " << CountColor(colorArray, arraySize, Color::Purple) << '\n';
}

// TODO: грамошибка +
void WriteColor(Color color)
{
	switch (color)
	{
		case Color::Blue:
		{
			std::cout << "It's blue color.\n";
			break;
		}
		case Color::Green:
		{
			std::cout << "It's green color.\n";
			break;
		}
		case Color::Orange:
		{
			std::cout << "It's orange color.\n";
			break;
		}
		case Color::Purple:
		{
			std::cout << "It's purple color.\n";
			break;
		}
		case Color::Red:
		{
			std::cout << "It's red color.\n";
			break;
		}
		case Color::Yellow:
		{
			std::cout << "It's yellow color.\n";
			break;
		}
		default:
		{
			throw std::exception("Color with that name didn't exist.");
		}
	}
}

Color ReadColor()
{
	std::cout << "Enter color: ";

	std::string colorName;
	std::cin >> colorName;

	if (colorName == "Blue")
	{
		return Color::Blue;
	}
	else if (colorName == "Green")
	{
		return Color::Green;
	}
	else if (colorName == "Orange")
	{
		return Color::Orange;
	}
	else if (colorName == "Purple")
	{
		return Color::Purple;
	}
	else if (colorName == "Red")
	{
		return Color::Red;
	}
	else if (colorName == "Yellow")
	{
		return Color::Yellow;
	}
	else
	{
		throw std::exception("Color with that name didn't exist.");
	}
}

int CountRed(Color* colors, int count)
{
	int redCount = 0;
	for (int i = 0; i < count; ++i)
	{
		if (colors[i] == Color::Red)
		{
			redCount += 1;
		}
	}
	return redCount;
}

int CountColor(Color* colors, int count, Color findedColor)
{
	int colorCount = 0;
	for (int i = 0; i < count; ++i)
	{
		if (colors[i] == findedColor)
		{
			colorCount += 1;
		}
	}
	return colorCount;
}
