#pragma once

#include <string>
#include"Person.h"

class Student : public Person
{
	private:
	//TODO: book records number и везде ниже также(done)
		int _bookRecordsNumber;
		int _receiptDate;

	public:
	//TODO: Константные ссылки?(Done)
		Student(const std::string& firstName, const std::string& middleName,
			const std::string& lastName, int bookRecordsNumber,
			int receiptDate);
		~Student();

		void SetBookRecordsNumber(int bookRecordsNumber);
		void SetReceiptDate(int receiptDate);

		int GetBookRecordsNumber();
		int GetReceiptDate();
};