#include "Rectangle.h"

Rectangle::Rectangle() : _centre(0, 0), _width(0), _length(0) {}

Rectangle::Rectangle(Point centre, float width, float length)
	: _centre(centre), _width(width), _length(length) {}

Rectangle::Rectangle(int centreX, int centreY, float width, float length)
	: _centre(centreX, centreY), _width(width), _length(length) {}

void Rectangle::SetWidth(float width)
{
	DoubleValidator::AssertPositiveValue(width);
	_width = width;
}

void Rectangle::SetLength(float length)
{
	DoubleValidator::AssertPositiveValue(length);
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