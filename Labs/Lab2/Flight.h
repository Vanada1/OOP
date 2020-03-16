#pragma once
#include<string>

struct Flight
{
	std::string From;
	std::string Where;
	int FlightTimeMinute;
};
//2.2.6.1
void DemoDynamicFlight();
//2.2.6.2
void DemoDynamicFlights();
//2.2.6.3
void FindShortestFlight(Flight*, int);
//TODO: naming - create
//2.2.7.2
Flight* MakeFlight(std::string, std::string, int);
//TODO: naming
//2.2.7.3
Flight* CoppyFlight(Flight&);
//TODO: naming - enter
void ReadFlight(Flight&);
//TODO: naming - display
void WriteFlight(Flight&);