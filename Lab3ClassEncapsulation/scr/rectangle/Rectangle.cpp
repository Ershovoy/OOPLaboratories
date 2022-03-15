#include "Rectangle.h"

Rectangle::Rectangle() : _centre(0, 0), _width(0), _length(0) {}

Rectangle::Rectangle(Point centre, float width, float length)
	: _centre(centre), _width(width), _length(length) {}

Rectangle::Rectangle(int centreX, int centreY, float width, float length)
	: _centre(centreX, centreY), _width(width), _length(length) {}

void Rectangle::SetWidth(float width)
{
	if (width <= 0)
	{
		throw std::exception("Rectangle width canmust be positive value.");
	}

	_width = width;
}

void Rectangle::SetLength(float length)
{
	if (length <= 0)
	{
		throw std::exception("Rectangle length canmust be positive value.");
	}

	_length = length;
}

void Rectangle::SetCentre(Point centre)
{
	_centre = centre;
}

void Rectangle::SetCentre(float x, float y)
{
	_centre = Point(x, y);
}

Point CalculateAverageCentrePosition(Rectangle* rectangles, int rectangleCount)
{
	Point result;
	for (int i = 0; i < rectangleCount; ++i)
	{
		result.SetX(result.GetX() + rectangles->GetCentreX());
		result.SetY(result.GetY() + rectangles->GetCentreY());
	}
	result.SetX(result.GetX() / rectangleCount);
	result.SetY(result.GetY() / rectangleCount);
	return result;
}
