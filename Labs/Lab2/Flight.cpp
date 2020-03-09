#include "Flight.h"
#include<iostream>

using namespace  std;

void DemoDynamicFlight()
{
	Flight* flight = new  Flight();
	ReadFlight(*flight);
	WriteFlight(*flight);
	delete  flight;
}

void DemoDynamicFlights()
{
	int count = 4;
	Flight* flight = new  Flight[count];
	for (int i = 0; i < count; i++)
	{
		ReadFlight(flight[i]);
	}
	for (int i = 0; i < count; i++)
	{
		WriteFlight(flight[i]);
	}
	delete[] flight;
}

void FindShortestFlight(Flight* flight, int count)
{
	Flight flightMinTime = flight[0];
	for (int i = 0; i < count; i++)
	{
		if (flightMinTime.FlightTimeMinute > flight[i].FlightTimeMinute)
		{
			flightMinTime = flight[i];
		}
	}

	cout << "The fast flight:" << endl;
	WriteFlight(flightMinTime);
}

Flight* MakeFlight(std::string from, std::string where,
	int flightTimeMinute)
{
	Flight* newFlight = new Flight();
	newFlight->From = from;
	newFlight->Where = where;
	newFlight->FlightTimeMinute = flightTimeMinute;
	return newFlight;
}

Flight* CoppyFlight(Flight& flight)
{
	Flight* coppyFlight = new Flight();
	coppyFlight->From = flight.From;
	coppyFlight->Where = flight.Where;
	coppyFlight->FlightTimeMinute = flight.FlightTimeMinute;
	return coppyFlight;
}

void ReadFlight(Flight& flight)
{
	cout << "From: ";
	cin >> flight.From;
	cout << endl;
	cout << "Where: ";
	cin >> flight.Where;
	cout << endl;
	cout << "How long to fly (in minutes): ";
	cin >> flight.FlightTimeMinute;
	cout << endl;
}

void WriteFlight(Flight& flight)
{
	cout << "Your flight from " << flight.From
		<< " to " << flight.Where
		<< " will be " << flight.FlightTimeMinute
		<< " minutes" << endl;
}