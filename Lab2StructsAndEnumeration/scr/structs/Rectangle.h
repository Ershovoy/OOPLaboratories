#pragma once

#include <string>
#include <iostream>
//TODO: UTF8?
//TODO: Doxygen?
// 2.2.2 �������� ��������
// ������: ������� ��������� �������������

struct Rectangle
{
	double Length;
	double Width;
	std::string Color;
};

// 2.2.3 �������� �������� ��������
// ������: 
// ������� ������� ���������������� ������ ��������� ���� ���������
// � ������� �������� ������� ���� � �������
void DemoRectangle();

//
// 2.2.5 ��������� � �������
//

// ������ 1:
// ������� ������� ������ �������� ����� �������������� � �������
void WriteRectangle(Rectangle& rectangle);

// ������ 2:
// ������� ������� ���������� �������� ����� �������������� � ����������
void ReadRectangle(Rectangle& rectangle);

// ������ 3:
// �������� ������� ���������� ����� ��������� �������
void DemoWriteAndReadRectangle();

// ������ 4:
// �������� ������� ������������ �������� ���� ���������������
void Exchange(Rectangle& rectangle1, Rectangle& rectangle2);

// ������ 5:
// �������� ������� ������ �������������� � ������� � ����� ������� ������
int FindRectangleWithMaxLength(Rectangle* rectangles, int count);

// ������ 6:
// �������� ������� ������ �������������� � ������������ ��������
int FindRectangleWithMaxArea(Rectangle* rectangles, int count);

void AssertArray(int count)
{
	if(count < 0) throw std::exception("Exception: Negative array length");
}