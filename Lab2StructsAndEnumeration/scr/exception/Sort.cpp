#include "Sort.h"

void Sort(double* values, int count)
{
	if (count < 0)
	{
		throw std::exception("Exception: Negative array length");
	}

	double swap;
	for (int i = 0; i < count; i++)
	{
		for (int j = 0; j < count; j++)
		{
			if (values[i] < values[j])
			{
				swap = values[i];
				values[i] = values[j];
				values[j] = swap;
			}
		}
	}
}

void DemoSort()
{
	int count = 5;
	double* values = new double[count] {100.0, 249.0, 12.0, 45.0, 23.5};

	try
	{
		Sort(values, count);
	}
	catch (std::exception e)
	{
		std::cerr << e.what() << '\n';
	}

	count = -1;

	try
	{
		Sort(values, count);
	}
	catch (std::exception e)
	{
		std::cerr << e.what() << '\n';
	}
	catch (...)
	{

	}

	delete[] values;
}
