#pragma once

#include <iostream>

// 2.2.8 ������������

// ������ 1: 
// C������ ������������: ����, ����� ��������, ����,
// ������������� ��������, ���� ������, ����� ����.

#include "Color.h"
#include "EducationForm.h"
#include "Genre.h"
#include "SmartphoneManufacturer.h"
#include "WeekDay.h"
#include "YearTime.h"

// ������ 2:
// 
void DemoEnums();

// ������ 3:
// �������� ������� ������ ���� � �������
// TODO: ���������� +
void WriteColor(Color color);

// ������ 4:
// �������� ������� ������ ���� � ����������
Color ReadColor();

// ������ 5:
// �������� ������� �������� �������� ����� � ������� ������
int CountRed(Color* colors, int count);

// ������ 6:
// �������� ������� ����������� ����, �� ��� �������� ������ �����
int CountColor(Color* colors, int count, Color findedColor);