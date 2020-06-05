#pragma once

#include <string>
#include"Person.h"

class Student : public Person
{
	private:
	//TODO: book records number и везде ниже также
		int _numberRecordBook;
		int _receiptDate;

	public:
	//TODO: Константные ссылки?
		Student(std::string& firstName, std::string& middleName,
			std::string& lastName, int numberRecordBookint,
			int receiptDate);
		~Student();

		void SetNumberRecordBook(int numberRecordBookint);
		void SetReceiptDate(int receiptDate);

		int GetNumberRecordBook();
		int GetReceiptDate();
};