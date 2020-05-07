#include "Flight.h"
#include <exception>
#include <iostream>

using namespace std;

Flight* CreateFlight(string flightNumber, string from, string purpose,
	Time* departureTime, Time* purposeTime)
{
	Flight* newFlight = new Flight();
	newFlight->DepartureTime = new Time();
	newFlight->PurposeTime = new Time();
	SetFlightNumber(newFlight, flightNumber);
	SetFrom(newFlight, from);
	SetPurpose(newFlight, purpose);
	SetDepartureTime(newFlight, departureTime);
	SetPurposeTime(newFlight, purposeTime);
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
void SetDepartureTime(Flight* flight, Time* departureTime)
{
	flight->DepartureTime = departureTime;
}

void SetPurposeTime(Flight* flight, Time* purposeTime)
{
	int minutesInHour = 60;
	if (flight->DepartureTime->Year > purposeTime->Year)
	{
		throw exception("Error");
	}
	else if (flight->DepartureTime->Year == purposeTime->Year)
	{
		if (flight->DepartureTime->Month > purposeTime->Month)
		{
			throw exception("Error");
		}
		else if (flight->DepartureTime->Month == purposeTime->Month)
		{
			if (flight->DepartureTime->Day > purposeTime->Day)
			{
				throw exception("Error");
			}
			else if (flight->DepartureTime->Day == purposeTime->Day)
			{
				if (flight->DepartureTime->Hour * minutesInHour
				+ flight->DepartureTime->Minute >=
					purposeTime->Hour * minutesInHour +
					purposeTime->Minute)
				{
					throw exception("Error");
				}
			}
		}

	}
	flight->PurposeTime = purposeTime;
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