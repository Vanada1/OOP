#pragma once
#include"Time.h"
#include <string>

struct Flight
{
	std::string FlightNumber;
	std::string From;
	std::string Purpose;
	Time* DepartureTime;
	Time* PurposeTime;
};

Flight* CreateFlight(std::string flightNumber, std::string from, 
	std::string purpose, Time* departureTime, Time* purposeTime);
void SetFlightNumber(Flight* flight, std::string flightNumber);
void SetFrom(Flight* flight, std::string from);
void SetPurpose(Flight* flight, std::string purpose);
void SetDepartureTime(Flight* flight, Time* departureTime);
void SetPurposeTime(Flight* flight, Time* purposeTime);
int GetFlightTimeMinutes(Flight* flight);