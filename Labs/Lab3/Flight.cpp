#include "Flight.h"
#include <exception>
#include <iostream>

using namespace std;

void DemoFlightWithTime()
{
	const int COUNT = 5;
	Flight flights[COUNT];
	flights[0] = CreateFlight("A201", "Moscow", "Tomsk", 2020, 1, 23, 
		12, 40, 2020, 1, 23, 16, 30);
	flights[1] = CreateFlight("A323", "Tomsk", "Moscow", 2020, 1, 23, 
		12, 0, 2020, 1, 23, 16, 0);
	flights[2] = CreateFlight("S588", "Kemerovo", "Moscow", 2020, 3, 2, 
		9, 30, 2020, 3, 2, 12, 30);
	flights[3] = CreateFlight("G023", "Moscow", "Kemerovo", 2020, 3, 2,
		9, 30, 2020, 3, 2, 12, 30);
	flights[4] = CreateFlight("MA404", "Kemerovo", "Tomsk", 2020, 6, 12, 
		3, 0, 2020, 6, 12, 4, 0);
	
	for (int i = 0; i < COUNT; i++)
	{
		cout << flights[i].FlightNumber << "\t" << flights[i].From << '-'
			<< flights[i].Purpose << "\t Departure "
			<< flights[i].DepartureTime.Month << '.'
			<< flights[i].DepartureTime.Day << '\t'
			<< flights[i].DepartureTime.Hour << ':'
			<< flights[i].DepartureTime.Minute << '.'
			<< "\tArrival " << flights[i].PurposeTime.Month
			<< flights[i].PurposeTime.Day
			<< '\t' << flights[i].PurposeTime.Hour << ':'
			<< flights[i].PurposeTime.Minute << endl;
	}
	int timeDifference = GetFlightTimeMinutes(flights[0]);
	cout << flights[0].FlightNumber << "\t" << flights[0].From << '-'
		<< flights[0].Purpose << "\tFlight time: "
		<< timeDifference / 60 << "h " << timeDifference % 60 << "min" << endl;
}

Flight CreateFlight(string flightNumber, string from, string purpose,
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

void SetFlightNumber(Flight& flight, string flightNumber)
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

int GetFlightTimeMinutes(Flight& flight)
{
	Time& departureTime = flight.DepartureTime;
	Time& purposeTime = flight.PurposeTime;
	int timeDifferenceMinutes = purposeTime.Minute - departureTime.Minute;
	int timeDifferenceHours = purposeTime.Hour - departureTime.Hour;
	int minutesPerHour = 60;
	if (timeDifferenceMinutes < 0)
	{
		timeDifferenceMinutes += minutesPerHour;
		timeDifferenceHours--;
	}
	return timeDifferenceHours * minutesPerHour + timeDifferenceMinutes;
}