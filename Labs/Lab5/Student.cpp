#include "Student.h"

Student::Student(const std::string& firstName, const std::string& middleName,
	const std::string& lastName, int bookRecordsNumber,
	int receiptDate) : Person(firstName, middleName, lastName)
{
	this->SetBookRecordsNumber(bookRecordsNumber);
	this->SetReceiptDate(receiptDate);
}

Student::~Student()
{

}

void Student::SetBookRecordsNumber(int bookRecordsNumber)
{
	this->_bookRecordsNumber = bookRecordsNumber;
}

void Student::SetReceiptDate(int receiptDate)
{
	this->_receiptDate = receiptDate;
}

int Student::GetBookRecordsNumber()
{
	return this->_bookRecordsNumber;
}

int Student::GetReceiptDate()
{
	return this->_receiptDate;
}