#pragma once

#include <string>

struct Circle 
{
	double X; 
	double Y;
	double Radius;
	std::string Color; 
};

void DemoCircle();

// 2.2.7.1
// �������: 
// �������� ������� ������������ � ������� ����������� ��� ���� ���������
// ���������, ����� ���������� �� ���������� � ������� DemoCircle().
Circle* MakeCircle(double x, double y, double radius, std::string color);

Circle* CopyCircle(Circle* cirlce);
