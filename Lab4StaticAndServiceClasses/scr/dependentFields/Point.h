#pragma once

class Point
{
	float _x;
	float _y;

public:
	Point();
	Point(float x, float y);

	void SetX(float x);
	void SetY(float y);

	float GetX() const { return _x; }
	float GetY() const { return _y; }
};

