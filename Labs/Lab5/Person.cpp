#include "Person.h"

Person::Person(std::string& firstName, std::string& middleName,
	std::string& lastName)
{
	this->SetFirsName(firstName);
	this->SetMiddlename(middleName);
	this->SetLastName(lastName);
}

Person::~Person()
{

}

void Person::SetFirsName(std::string& firstName)
{
	this->_firstName = firstName;
}

void Person::SetMiddlename(std::string& middleName)
{
	this->_middleName = middleName;
}

void Person::SetLastName(std::string& lastName)
{
	this->_lastName = lastName;
}

std::string Person::GetFistName()
{
	return  this->_firstName;
}

std::string Person::GetMiddleName()
{
	return  this->_middleName;
}

std::string Person::GetLastName()
{
	return  this->_lastName;
}