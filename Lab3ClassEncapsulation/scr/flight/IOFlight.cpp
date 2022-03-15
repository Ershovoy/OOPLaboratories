#include "IOFlight.h"

void DemoFlightWithTime()
{
	const int FLIGHT_COUNT = 5;
	Flight* flights = new Flight[FLIGHT_COUNT];

	flights[0].SetId(0);
	flights[0].SetDeparture("Tomsk");
	flights[0].SetDestination("Omsk");
	flights[0].SetDestinationTime(Time(2021, 5, 10, 12, 15));
	flights[0].SetDepartureTime(Time(2021, 5, 10, 4, 30));

	flights[1].SetId(1);
	flights[1].SetDeparture("London");
	flights[1].SetDestination("Moscow");
	flights[1].SetDestinationTime(Time(2022, 7, 11, 23, 30));
	flights[1].SetDepartureTime(Time(2022, 7, 10, 4, 15));

	flights[2].SetId(2);
	flights[2].SetDeparture("Moscow");
	flights[2].SetDestination("Moscow");
	flights[2].SetDestinationTime(Time(2022, 3, 22, 5, 30));
	flights[2].SetDepartureTime(Time(2022, 3, 22, 2, 15));

	flights[3].SetId(3);
	flights[3].SetDeparture("New-York");
	flights[3].SetDestination("California");
	flights[3].SetDestinationTime(Time(2020, 1, 1, 10, 55));
	flights[3].SetDepartureTime(Time(2020, 1, 1, 1, 15));

	flights[4].SetId(4);
	flights[4].SetDeparture("Kemerovo");
	flights[4].SetDestination("Tomsk");
	flights[4].SetDestinationTime(Time(2025, 1, 1, 1, 15));
	flights[4].SetDepartureTime(Time(2025, 1, 1, 0, 0));

	for (int i = 0; i < FLIGHT_COUNT; ++i)
	{
		Flight& current = flights[i];
		WriteFlightToConsole(current);
		std::cout << "Flight time equal to: " << current.GetFlightTimeMinutes() << " in minutes.\n";
	}
}

void WriteFlightToConsole(const Flight& flight)
{
	
	std::cout << "Id: " << flight.GetId() << " : " << flight.GetDeparture() << " -> "
		<< flight.GetDestination() << " Departure: " << flight.GetDepartureTime()
		<< " Destination: " << flight.GetDestinationTime() << '\n';
}
