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
//2.2.7.2
Flight* MakeFlight(std::string*, std::string*, int);
//2.2.7.3
Flight* CopyFlight(Flight&);
void ReadFlight(Flight&);
void WriteFlight(Flight&);