#pragma once
#include "TimeClass.h"
#include <string>

class Flight
{
	private:
		std::string _flightNumber;
		std::string _from;
		std::string _purpose;
		Time* _departureTime;
		Time* _purposeTime;

	public:
		void SetFlightNumber(std::string flightNumber);
		void SetFrom(std::string from);
		void SetPurpose(std::string purpose);
		void SetDepartureTime(int year, int month,
			int day, int hour, int minute);
		void SetPurposeTime(int year, int month,
			int day, int hour, int minute);

		std::string GetFlightNumber();
		std::string GetFrom();
		std::string GetPurpose();
		Time* GetDepartureTime();
		Time* GetPurposeTime();


		int GetFlightTimeMinutes();

		Flight(std::string flightNumber, std::string from,
			std::string purpose, int departureYear, int departureMonth,
			int departureDay, int departureHour, int departureMinute,
			int PurposeYear, int PurposeMonth, int PurposeDay,
			int PurposeHour, int PurposeMinute);
		~Flight()
		{

		}
};