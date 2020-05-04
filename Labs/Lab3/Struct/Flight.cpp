#include "Flight.h"
#include <exception>
#include <iostream>

using namespace std;

Flight* CreateFlight(string flightNumber, string from, string purpose,
	int departureYear, int departureMonth, int departureDay,
	int departureHour, int departureMinute,
	int PurposeYear, int PurposeMonth, int PurposeDay,
	int PurposeHour, int PurposeMinute)
{
	Flight* newFlight = new Flight();
	newFlight->DepartureTime = new Time();
	newFlight->PurposeTime = new Time();
	SetFlightNumber(newFlight, flightNumber);
	SetFrom(newFlight, from);
	SetPurpose(newFlight, purpose);
	SetDepartureTime(newFlight, departureYear, departureMonth,
		departureDay, departureHour, departureMinute);
	SetPurposeTime(newFlight, PurposeYear, PurposeMonth,
		PurposeDay, PurposeHour, PurposeMinute);
	return newFlight;
}

void SetFlightNumber(Flight* flight, string flightNumber)
{
	flight->FlightNumber = flightNumber;
}
void SetFrom(Flight* flight, string from)
{
	flight->From = from;
}
void SetPurpose(Flight* flight, string purpose)
{
	flight->Purpose = purpose;
}
void SetDepartureTime(Flight* flight, int year, int month,
	int day, int hour, int minute)
{
	SetYear(flight->DepartureTime, year);
	SetMonth(flight->DepartureTime, month);
	SetDay(flight->DepartureTime, day);
	SetHour(flight->DepartureTime, hour);
	SetMinute(flight->DepartureTime, minute);
}

void SetPurposeTime(Flight* flight, int year, int month,
	int day, int hour, int minute)
{
	int minutesInHour = 60;
	if (flight->DepartureTime->Year > year)
	{
		throw exception("Error");
	}
	else if (flight->DepartureTime->Year == year)
	{
		if (flight->DepartureTime->Month > month)
		{
			throw exception("Error");
		}
		else if (flight->DepartureTime->Month == month)
		{
			if (flight->DepartureTime->Day > day)
			{
				throw exception("Error");
			}
			else if (flight->DepartureTime->Day == day)
			{
				if (flight->DepartureTime->Hour * minutesInHour
				+ flight->DepartureTime->Minute >=
					hour * minutesInHour + minute)
				{
					throw exception("Error");
				}
			}
		}

	}
	else if (flight->DepartureTime->Hour * minutesInHour
		+ flight->DepartureTime->Minute > hour* minutesInHour + minute)
	{
		throw exception("Error");
	}
	SetYear(flight->PurposeTime, year);
	SetMonth(flight->PurposeTime, month);
	SetDay(flight->PurposeTime, day);
	SetHour(flight->PurposeTime, hour);
	SetMinute(flight->PurposeTime, minute);
}

int GetFlightTimeMinutes(Flight* flight)
{
	Time* departureTime = flight->DepartureTime;
	Time* purposeTime = flight->PurposeTime;
	int timeDifferenceMinutes = purposeTime->Minute - departureTime->Minute;
	int timeDifferenceHours = purposeTime->Hour - departureTime->Hour;
	int minutesInHour = 60;
	if (timeDifferenceMinutes < 0)
	{
		timeDifferenceMinutes += minutesInHour;
		timeDifferenceHours--;
	}
	return timeDifferenceHours * minutesInHour + timeDifferenceMinutes;
}