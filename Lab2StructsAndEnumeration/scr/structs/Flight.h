#pragma once

#include <iostream>
#include <string>

// 2.2.2 �������� ��������
// ������:
// ������� ��������� ���� �������

struct Flight
{
	std::string Departure;
	std::string Destination;
	int MinutesFlightTime;
};

// 2.2.6 ��������� � ������������ ������

// ������ 1:
// �������� ������� � ������� ����������� ���������� ������ ��� ���� ��������� ���������
void DemoDynamicFlight();

// ������ 2:
// �������� ������� ����������� ����, �� ���������� ������ ��� ������ ���� ��������� ���������
void DemoDynamicFlights();

// ������ 3:
// �������� ������� ��� ������ ������ ��������� ����� � �������
void FindShortestFlight(Flight* flights, int count);