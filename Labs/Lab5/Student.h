#pragma once

#include <string>
#include"Person.h"

class Student : public Person
{
	private:
		std::string _numberRecordBook;
		int _receiptDate;
};