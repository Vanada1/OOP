#pragma once

#include <string>

class Person
{
	private:
		std::string _firstName;
		std::string _middleName;
		std::string _lastName;

	public:
	//TODO: Константные ссылки?
		Person(std::string& firstName, std::string& middleName,
			std::string& lastName);
		~Person();

		void SetFirsName(std::string& firstName);
		void SetMiddlename(std::string& middleName);
		void SetLastName(std::string& lastName);

		std::string GetFistName();
		std::string GetMiddleName();
		std::string GetLastName();
};