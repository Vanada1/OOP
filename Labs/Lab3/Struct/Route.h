#pragma once
#include <string>

struct Route
{
	int RouteNumber;
	int DurationInMitutes;
	int FrequencyInMitutes;
	int NumberStops;
	std::string* Stops;
};

void DemoRoute();
void ReadRouteFromConsole(Route& route);
void WriteRouteToConsole(Route& route);
int FindRouteTo(Route* routes, int routeCount, std::string& route);