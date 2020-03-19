#include "Flight.h"
#include"../General Files/Read.h"
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
	const int count = 4;
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

Flight* MakeFlight(std::string& from, std::string& where,
	int flightTimeMinute)
{
	Flight* newFlight = new Flight();
	newFlight->From = from;
	newFlight->Where = where;
	newFlight->FlightTimeMinute = flightTimeMinute;
	return newFlight;
}

Flight* CopyFlight(Flight& flight)
{
	Flight* copyFlight = new Flight();
	copyFlight->From = flight.From;
	copyFlight->Where = flight.Where;
	copyFlight->FlightTimeMinute = flight.FlightTimeMinute;
	return copyFlight;
}

void ReadFlight(Flight& flight)
{
	cout << "From: ";
	flight.From = Read<string>();
	cout << endl;
	cout << "Where: ";
	flight.Where = Read<string>();
	cout << endl;
	cout << "How long to fly (in minutes): ";
	flight.FlightTimeMinute = Read<int>();
	cout << endl;
}

void WriteFlight(Flight& flight)
{
	cout << "Your flight from " << flight.From
		<< " to " << flight.Where
		<< " will be " << flight.FlightTimeMinute
		<< " minutes" << endl;
}