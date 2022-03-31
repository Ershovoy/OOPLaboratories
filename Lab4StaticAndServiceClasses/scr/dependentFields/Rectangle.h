#pragma once

#include "Point.h"
#include "..\serviceClass\DoubleValidator.h"

#include <exception>

class Rectangle
{
	float _width;
	float _length;
	Point _centre;

public:
	Rectangle();
	Rectangle(Point centre, float width, float length);
	Rectangle(int centreX, int centreY, float width, float length);

	void SetWidth(float width);
	void SetLength(float length);
	void SetCentre(Point centre);
	void SetCentre(float x, float y);

	float GetWidth() const { return _width; }
	float GetLength() const { return _length; }
	Point GetCentre() const { return _centre; }
	float GetCentreX() const { return _centre.GetX(); }
	float GetCentreY() const { return _centre.GetY(); }
};