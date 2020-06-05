#pragma once

#include <string>

class Person
{
	private:
		std::string _firstName;
		std::string _middleName;
		std::string _lastName;

	public:
		Person(const std::string& firstName, const std::string& middleName,
			const std::string& lastName);
		~Person();

		void SetFirsName(const std::string& firstName);
		void SetMiddlename(const std::string& middleName);
		void SetLastName(const std::string& lastName);

		const std::string& GetFistName();
		const std::string& GetMiddleName();
		const std::string& GetLastName();
};