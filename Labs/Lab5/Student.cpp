#include "Student.h"

Student::Student(std::string& firstName, std::string& middleName,
	std::string& lastName, int numberRecordBookint,
	int receiptDate) : Person(firstName, middleName, lastName)
{
	this->SetNumberRecordBook(numberRecordBookint);
	this->SetReceiptDate(receiptDate);
}

Student::~Student()
{

}

void Student::SetNumberRecordBook(int numberRecordBookint)
{
	this->_numberRecordBook = numberRecordBookint;
}

void Student::SetReceiptDate(int receiptDate)
{
	this->_receiptDate = receiptDate;
}

int Student::GetNumberRecordBook()
{
	return this->_numberRecordBook;
}

int Student::GetReceiptDate()
{
	return this->_receiptDate;
}