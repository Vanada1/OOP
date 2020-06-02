#include "OutputFunction.h"
#include "Person.h"
#include "Student.h"
#include "Teacher.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string personFirstName = "Vasily";
	string personMiddleName = "Viktorovich";
	string personLastName = "Chekhov";
	Person* person = new Person(personFirstName, personMiddleName,
		personLastName);
	ShowName(person);

	string studentFirstName = "Innocent";
	string studentMiddleName = "Andreevich";
	string studentLastName = "Maslov";
	int numberRecordBook = 1234567;
	int receiptDate = 2017;
	Student* student = new Student(studentFirstName, 
		studentMiddleName, studentLastName, numberRecordBook,
		receiptDate);
	ShowName(student);

	string teacherFirstName = "Dmitry";
	string teacherMiddleName = "Alexeyevich";
	string teacherLastName = "Tolstoy";
	string post = "GPO teacher";
	Teacher* teacher = new Teacher(studentFirstName,
		studentMiddleName, studentLastName, post);
	ShowName(teacher);

	delete person;
	delete student;
	delete teacher;
}