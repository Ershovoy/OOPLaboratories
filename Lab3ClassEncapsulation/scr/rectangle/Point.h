#pragma once

// UML ��������� �������
// https://miro.com/app/board/uXjVOFkgw2A=/?invite_link_id=130325368379

class Point
{
	float _x, _y;

public:
	Point();
	Point(float x, float y);

	void SetX(float x);
	void SetY(float y);

	float GetX() const { return _x; }
	float GetY() const { return _y; }
};

