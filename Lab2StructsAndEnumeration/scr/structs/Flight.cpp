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

	//TODO: bug?
	Flight flight3;
	flight1.Departure = "Novosibirsk";
	flight1.Destination = "Tomsk";
	flight1.MinutesFlightTime = 35;

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
	//TODO: RSDN
	Flight* pFlight = new Flight;
	pFlight->Departure = "Petersburg";
	pFlight->Destination = "Moscoy";
	pFlight->MinutesFlightTime = 50;

	std::cout << "Flight: " << pFlight->Departure << " -> " << pFlight->Destination
		<< " for " << pFlight->MinutesFlightTime << " minutes.\n";

	delete pFlight;
}

void DemoDynamicFlights()
{
	const int flightCount = 4;
	//TODO: RSDN
	Flight* pFlights = new Flight[flightCount];

	pFlights[0].Departure = "Petersburg";
	pFlights[0].Destination = "Moscoy";
	pFlights[0].MinutesFlightTime = 50;
	pFlights[1].Departure = "London";
	pFlights[1].Destination = "Moscoy";
	pFlights[1].MinutesFlightTime = 90;
	pFlights[2].Departure = "Novosibirsk";
	pFlights[2].Destination = "Tomst";
	pFlights[2].MinutesFlightTime = 30;
	pFlights[3].Departure = "Kemerovo";
	pFlights[3].Destination = "Kiev";
	pFlights[3].MinutesFlightTime = 50;

	std::cout << "Flight: " << pFlights[0].Departure << " -> " << pFlights[0].Destination
		<< " for " << pFlights[0].MinutesFlightTime << " minutes.\n";
	std::cout << "Flight: " << pFlights[1].Departure << " -> " << pFlights[1].Destination
		<< " for " << pFlights[1].MinutesFlightTime << " minutes.\n";
	std::cout << "Flight: " << pFlights[2].Departure << " -> " << pFlights[2].Destination
		<< " for " << pFlights[2].MinutesFlightTime << " minutes.\n";
	std::cout << "Flight: " << pFlights[3].Departure << " -> " << pFlights[3].Destination
		<< " for " << pFlights[3].MinutesFlightTime << " minutes.\n";

	FindShortestFlight(pFlights, flightCount);
	// TODO: утечка памяти +
	delete[] pFlights;
}

void FindShortestFlight(Flight* flights, int count)
{
	if (count < 0)
	{
		throw std::exception("Exception: Negative array length");
	}
	//TODO: UTF8?
	// TODO: сделать инверсию условия - сначала то +, 
	// что сейчас делается в else с оператором return, затем приоритетная ветка
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
