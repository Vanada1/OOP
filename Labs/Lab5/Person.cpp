#include "Person.h"

Person::Person(const std::string& firstName, const std::string& middleName,
	const std::string& lastName)
{
	this->SetFirsName(firstName);
	this->SetMiddlename(middleName);
	this->SetLastName(lastName);
}

Person::~Person()
{

}

void Person::SetFirsName(const std::string& firstName)
{
	this->_firstName = firstName;
}

void Person::SetMiddlename(const std::string& middleName)
{
	this->_middleName = middleName;
}

void Person::SetLastName(const std::string& lastName)
{
	this->_lastName = lastName;
}

const std::string& Person::GetFistName()
{
	return  this->_firstName;
}

const std::string& Person::GetMiddleName()
{
	return  this->_middleName;
}

const std::string& Person::GetLastName()
{
	return  this->_lastName;
}