#pragma once
#include"Time.h"
#include <string>

struct Flight
{
	int FlightNumber;
	std::string From;
	std::string Purpose;
	Time DepartureTime;
	Time PurposeTime;
};

Flight CreateFlight(int flightNumber, std::string from, std::string purpose,
	int departureYear, int departureMonth, int departureDay,
	int departureHour, int departureMinute,
	int PurposeYear, int PurposeMonth, int PurposeDay,
	int PurposeHour, int PurposeMinute);
void SetFlightNumber(Flight& flight, int flightNumber);
void SetFrom(Flight& flight, std::string from);
void SetPurpose(Flight& flight, std::string purpose);
void SetDepartureTime(Flight& flight, int year, int month,
	int day, int hour, int minute);
void SetPurposeTime(Flight& flight, int year, int month,
	int day, int hour, int minute);