#include "Flight.h"
#include <exception>

using namespace std;

Flight CreateFlight(int flightNumber, string from, string purpose,
	int departureYear, int departureMonth, int departureDay,
	int departureHour, int departureMinute,
	int PurposeYear, int PurposeMonth, int PurposeDay,
	int PurposeHour, int PurposeMinute)
{
	Flight flight;
	flight.FlightNumber = flightNumber;
	flight.From = from;
	flight.Purpose = purpose;
	flight.DepartureTime = CreateTime(departureYear, departureMonth,
		departureDay, departureHour, departureMinute);
	flight.PurposeTime = CreateTime(PurposeYear, PurposeMonth,
		PurposeDay, PurposeHour, PurposeMinute);
	return flight;
}

void SetFlightNumber(Flight& flight, int flightNumber)
{
	flight.FlightNumber = flightNumber;
}
void SetFrom(Flight& flight, string from)
{
	flight.From = from;
}
void SetPurpose(Flight& flight, string purpose)
{
	flight.Purpose = purpose;
}
void SetDepartureTime(Flight& flight, int year, int month,
	int day, int hour, int minute)
{
	SetYear(flight.DepartureTime, year);
	SetMonth(flight.DepartureTime, month);
	SetDay(flight.DepartureTime, day);
	SetHour(flight.DepartureTime, hour);
	SetMinute(flight.DepartureTime, minute);
}
void SetPurposeTime(Flight& flight, int year, int month,
	int day, int hour, int minute)
{
	if (flight.DepartureTime.Year > year)
	{
		throw exception("Error");
	}
	else if (flight.DepartureTime.Month > month)
	{
		throw exception("Error");
	}
	else if (flight.DepartureTime.Day > day)
	{
		throw exception("Error");
	}
	else if (flight.DepartureTime.Hour > hour)
	{
		throw exception("Error");
	}
	else if (flight.DepartureTime.Minute > minute)
	{
		throw exception("Error");
	}
	SetYear(flight.PurposeTime, year);
	SetMonth(flight.PurposeTime, month);
	SetDay(flight.PurposeTime, day);
	SetHour(flight.PurposeTime, hour);
	SetMinute(flight.PurposeTime, minute);
}