#pragma once

#include <iostream>
#include <string>

//TODO: Doxygen?
//TODO: UTF8?
// 2.2.2 �������� ��������
// ������: ������� ��������� �����

struct Movie
{
	std::string Title;
	std::string Genre;
	int ReleaseYear;
	double Rating;
};

// 2.2.7 �������-������������

// ������� 1:
// ������� ������� ����������� ��� ���� ��������� ���������
Movie* MakeMovie(std::string title, std::string genre, int year, double rate);

// ������� 2:
// �������� ������� �����������
Movie* CopyMovie(Movie& movie);

// ������� 2:
// ������� ������� ���������� ���� ��������� �������
void DemoMovie();

void WriteMovie(Movie& movie);