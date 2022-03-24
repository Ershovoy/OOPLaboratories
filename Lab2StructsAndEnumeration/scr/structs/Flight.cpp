#include "Flight.h"

void DemoFlight()
{
	Flight flight1;
	flight1.Departure = "Kemerovo";
	flight1.Destination = "Moscow";
	flight1.MinutesFlightTime = 90;

	Flight flight2;
	std::cout << "Enter flight departure: ";
	std::cin >> flight2.Departure;
	std::cout << "Enter flight destination: ";
	std::cin >> flight2.Destination;
	std::cout << "Enter flight flight time in minutes: ";
	std::cin >> flight2.MinutesFlightTime;

	//TODO: + bug?
	Flight flight3;
	flight3.Departure = "Novosibirsk";
	flight3.Destination = "Tomsk";
	flight3.MinutesFlightTime = 35;

	const int flightCount = 3;
	Flight flight[flightCount];
	flight[0] = flight1;
	flight[1] = flight2;
	flight[2] = flight3;

	for (int i = 0; i < flightCount; ++i)
	{
		std::cout << "Flight " << i << '\n';
		std::cout << "Departure: " << flight[i].Departure << '\n';
		std::cout << "Destination: " << flight[i].Destination << '\n';
		std::cout << "Flight time (in minutes): " << flight[i].MinutesFlightTime << '\n';
	}
}

void DemoDynamicFlight()
{
	//TODO: + RSDN
	Flight* flight = new Flight;
	flight->Departure = "Petersburg";
	flight->Destination = "Moscoy";
	flight->MinutesFlightTime = 50;

	std::cout << "Flight: " << flight->Departure << " -> " << flight->Destination
		<< " for " << flight->MinutesFlightTime << " minutes.\n";

	delete flight;
}

void DemoDynamicFlights()
{
	const int flightCount = 4;
	//TODO: + RSDN
	Flight* flights = new Flight[flightCount];

	flights[0].Departure = "Petersburg";
	flights[0].Destination = "Moscoy";
	flights[0].MinutesFlightTime = 50;
	flights[1].Departure = "London";
	flights[1].Destination = "Moscoy";
	flights[1].MinutesFlightTime = 90;
	flights[2].Departure = "Novosibirsk";
	flights[2].Destination = "Tomst";
	flights[2].MinutesFlightTime = 30;
	flights[3].Departure = "Kemerovo";
	flights[3].Destination = "Kiev";
	flights[3].MinutesFlightTime = 50;

	std::cout << "Flight: " << flights[0].Departure << " -> " << flights[0].Destination
		<< " for " << flights[0].MinutesFlightTime << " minutes.\n";
	std::cout << "Flight: " << flights[1].Departure << " -> " << flights[1].Destination
		<< " for " << flights[1].MinutesFlightTime << " minutes.\n";
	std::cout << "Flight: " << flights[2].Departure << " -> " << flights[2].Destination
		<< " for " << flights[2].MinutesFlightTime << " minutes.\n";
	std::cout << "Flight: " << flights[3].Departure << " -> " << flights[3].Destination
		<< " for " << flights[3].MinutesFlightTime << " minutes.\n";

	FindShortestFlight(flights, flightCount);
	// TODO: + утечка памяти
	delete[] flights;
}

void FindShortestFlight(Flight* flights, int count)
{
	if (count < 0)
	{
		throw std::exception("Exception: Negative array length");
	}
	//TODO: + UTF8?
	// TODO: + сделать инверсию условия - сначала то, что сейчас делается в else с оператором return, затем приоритетная ветка
	if (count <= 0)
	{
		std::cout << "Array has no flights\n";
		return;
	}

	int shorterFlightIndex = 0;
	for (int i = 0; i < count; ++i)
	{
		if (flights[shorterFlightIndex].MinutesFlightTime > flights[i].MinutesFlightTime)
		{
			shorterFlightIndex = i;
		}
	}

	std::cout << "Flight with the shorter flight time:\n\t";
	std::cout << "Flight: " << flights[shorterFlightIndex].Departure << " -> "
		<< flights[shorterFlightIndex].Destination << " for "
		<< flights[shorterFlightIndex].MinutesFlightTime << " minutes.\n";
}
