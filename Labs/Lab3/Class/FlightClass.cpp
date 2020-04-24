#include "FlightClass.h"
#include <exception>

using namespace std;

Flight::Flight(string flightNumber, string from,
	string purpose, int departureYear, int departureMonth,
	int departureDay, int departureHour, int departureMinute,
	int PurposeYear, int PurposeMonth, int PurposeDay,
	int PurposeHour, int PurposeMinute)
{
	this->SetFlightNumber(flightNumber);
	this->SetFrom(from);
	this->SetPurpose(purpose);
	this->SetDepartureTime(departureYear, departureMonth,
		departureDay, departureHour, departureMinute);
	this->SetPurposeTime(PurposeYear, PurposeMonth,
		PurposeDay, PurposeHour, PurposeMinute);
}

//Flight::~Flight()
//{
//
//}

void Flight::SetFlightNumber(string flightNumber)
{
	this->_flightNumber = flightNumber;
}

void Flight::SetFrom(string from)
{
	this->_from = from;
}

void Flight::SetPurpose(string purpose)
{
	this->_purpose = purpose;
}

void Flight::SetDepartureTime(int year, int month,
	int day, int hour, int minute)
{
	this->_departureTime = new Time(year, month, day, hour, minute);
}

void Flight::SetPurposeTime(int year, int month,
	int day, int hour, int minute)
{
	int minutesInHour = 60;
	if (this->_departureTime->GetYear() > year)
	{
		throw exception("Error");
	}
	else if (this->_departureTime->GetMonth() > month)
	{
		throw exception("Error");
	}
	else if (this->_departureTime->GetDay() > day)
	{
		throw exception("Error");
	}
	else if (this->_departureTime->GetHour() * minutesInHour
		+ this->_departureTime->GetMinute() > hour * minutesInHour + minute)
	{
		throw exception("Error");
	}
	this->_purposeTime = new Time(year, month, day, hour, minute);
}

string Flight::GetFlightNumber()
{
	return this->_flightNumber;
}

string Flight::GetFrom() 
{
	return this->_from;
}

string Flight::GetPurpose()
{
	return this->_purpose;
}

Time* Flight::GetDepartureTime()
{
	return this->_departureTime;
}

Time* Flight::GetPurposeTime()
{
	return this->_purposeTime;
}

int Flight::GetFlightTimeMinutes()
{
	Time* departureTime = this->GetDepartureTime();
	Time* purposeTime = this->GetPurposeTime();
	int timeDifferenceMinutes = purposeTime->GetMinute()
		- departureTime->GetMinute();
	int timeDifferenceHours = purposeTime->GetHour()
		- departureTime->GetHour();
	int minutesInHour = 60;
	if (timeDifferenceMinutes < 0)
	{
		timeDifferenceMinutes += minutesInHour;
		timeDifferenceHours--;
	}
	return timeDifferenceHours * minutesInHour + timeDifferenceMinutes;
}