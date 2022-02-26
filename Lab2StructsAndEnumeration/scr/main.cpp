#include <iostream>

#include "structs/Rectangle.h"
#include "structs/Flight.h"
#include "structs/Movie.h"
#include "enumeration/DemoEnums.h"

int main()
{
	try
	{
		DemoEnums();
	}
	catch(std::exception e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}