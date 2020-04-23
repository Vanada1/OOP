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

Flight::~Flight()
{

}

void Flight::SetFlightNumber(std::string flightNumber)
{
	this->_flightNumber = flightNumber;
}

void Flight::SetFrom(std::string from)
{
	this->_from = from;
}

void Flight::SetPurpose(std::string purpose)
{
	this->_purpose = purpose;
}

void Flight::SetDepartureTime(int year, int month,
	int day, int hour, int minute)
{
	this->_departureTime->SetYear(year);
	this->_departureTime->SetMonth(month);
	this->_departureTime->SetDay(day);
	this->_departureTime->SetHour(hour);
	this->_departureTime->SetMinute(minute);
}

void Flight::SetPurposeTime(int year, int month,
	int day, int hour, int minute)
{
	if (this->_departureTime->GetYear() > year)
	{
		throw std::exception("Error");
	}
	else if (this->_departureTime->GetMonth() > month)
	{
		throw std::exception("Error");
	}
	else if (this->_departureTime->GetDay() > day)
	{
		throw std::exception("Error");
	}
	else if (this->_departureTime->GetHour() > hour)
	{
		throw std::exception("Error");
	}
	else if (this->_departureTime->GetMinute() > minute)
	{
		throw std::exception("Error");
	}
	this->_purposeTime->SetYear(year);
	this->_purposeTime->SetMonth(month);
	this->_purposeTime->SetDay(day);
	this->_purposeTime->SetHour(hour);
	this->_purposeTime->SetMinute(minute);
}

int Flight::GetFlightTimeMinutes(Flight* flight)
{

}