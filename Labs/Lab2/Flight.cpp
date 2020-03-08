#include "Flight.h"
#include<iostream>

using namespace  std;

void DemoDynamicFlight()
{
	Flight* flight = new  Flight();
	flight->From = "Moscow";
	flight->Where = "Tomsk";
	flight->FlightTimeMinute = 240;

	cout << "Your flight from  " << flight->From
		<< " to " << flight->Where
		<< " will be " << flight->FlightTimeMinute
		<< " minutes" << endl;
	delete  flight;
}

void DemoDynamicFlights()
{
	int count = 4;
	Flight* flight = new  Flight[count];
	for (int i = 0; i < count; i++)
	{
		cout << "From: ";
		cin >> flight[i].From;
		cout << endl;
		cout << "Where: ";
		cin >> flight[i].Where;
		cout << endl;
		cout << "How long to fly (in minutes): ";
		cin >> flight[i].FlightTimeMinute;
		cout << endl;
	}
	for (int i = 0; i < count; i++)
	{
		cout << "Your flight from  " << flight[i].From
			<< " to " << flight[i].Where
			<< " will be " << flight[i].FlightTimeMinute
			<< " minutes" << endl;
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
	cout << flightMinTime.From
		<< " to " << flightMinTime.Where
		<< " will be " << flightMinTime.FlightTimeMinute
		<< " minutes" << endl;
}