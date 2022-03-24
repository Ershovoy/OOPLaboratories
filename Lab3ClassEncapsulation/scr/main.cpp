#include "flight/IOFlight.h"
#include "band/IOBand.h"
#include "rectangle/IORectangle.h"

int main()
{
	try
	{
		DemoBand();
		//DemoFlightWithTime();
		//DemoRectangleWithPoint();
	}
	//TODO: передача по значению?
	catch (std::exception exception)
	{
		std::cerr << exception.what() << '\n';
	}

	return 0;
}