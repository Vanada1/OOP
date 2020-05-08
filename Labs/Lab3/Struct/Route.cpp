#include "Route.h"
#include "../../General Files/Read.h"
#include "../ReadPositiveNumber.h"

using namespace std;

void DemoRoute()
{
	const int COUNT = 2;
	Route routes[COUNT];
	for (int i = 0; i < COUNT; i++)
	{
		ReadRouteFromConsole(routes[i]);
	}
	cout << "What stop to find?" << endl;
	string stop = Read<string>();
	int foundIndex = FindRouteTo(routes, COUNT, stop);
	if (foundIndex < 0)
	{
		cout << "Not found" << endl;
	}
	else
	{
		WriteRouteToConsole(routes[foundIndex]);
	}
}

void ReadRouteFromConsole(Route& route)
{
	//TODO: Дубль Done
	route.RouteNumber = ReadPositiveNumber();
	//TODO: Дубль Done
	route.DurationInMitutes = ReadPositiveNumber();
	//TODO: Дубль Done
	route.FrequencyInMitutes = ReadPositiveNumber();
	//TODO: Дубль Done
	route.NumberStops = ReadPositiveNumber();

	route.Stops = new string[route.NumberStops];
	for (int i = 0; i < route.NumberStops; i++)
	{
		if (i == 0)
		{
			cin.ignore();
		}
		cout << "Enter stop: ";
		getline(cin, route.Stops[i]);
		cout << endl;
	}
}

void WriteRouteToConsole(Route& route)
{
	cout << "Route number: " << route.RouteNumber << endl;
	cout << "Duration in mitutes: " << route.DurationInMitutes << endl;
	cout << "Frequency in mitutes: " << route.FrequencyInMitutes << endl;
	cout << "Route: " << endl;
	for (int i = 0; i < route.NumberStops - 1; i++)
	{
		cout << route.Stops[i] << "->";
	}
	cout << route.Stops[route.NumberStops - 1] << endl;
}

int FindRouteTo(Route* routes, int routesCount, string& stop)
{
	for (int i = 0; i < routesCount; i++)
	{
		for (int j = 0; j < routes[i].NumberStops; j++)
		{
			if (routes[i].Stops[j] == stop)
			{
				return i;
			}
		}
	}
	return -1;
}