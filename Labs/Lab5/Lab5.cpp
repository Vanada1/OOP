#include "OutputFunction.h"
#include "Person.h"
#include "Student.h"
#include "Teacher.h"

#include "5.2/User.h"
#include "5.2/PaidUser.h"
#include "5.2/Login.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	/*string personFirstName = "Vasily";
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
	delete teacher;*/

	User** users = new User*[4] 
	{ 
		new User(100000, "morkovka1995", "1995morkovka"), 
		new User(100001, "ilon_mask", "X æ A-12"), 
		new User(100002, "megazver", "password"), 
		new User(100003, "yogurt", "ksTPQzSu"),
	}; 

	PaidUser** paidUsers = new PaidUser*[4] 
	{ 
		new PaidUser(200000, "TheKnyazz", "JHPzPGFG"), 
		new PaidUser(200001, "system_exe", "UgfkDGmU"), 
		new PaidUser(200002, "RazorQ", "TBgRnbCP"),
		new PaidUser(200003, "schdub", "CetyQVID"),
	}; 

	string login = "megazver";
	string password = "password"; 
	User* loginedUser = Login<User>(users, 4, login, password);
	cout << "Signed in as: " << loginedUser->GetLogin() << endl;
	
	login = "system_exe";
	password = "UgfkDGmU"; 
	PaidUser* loginedPaidUser = Login<PaidUser>(paidUsers, 4, 
		login, password);
	cout << "Signed in as: " << loginedPaidUser->GetLogin() << endl;

	for (int i = 0; i < 4; i++) 
	{
		delete users[i];
	} 
	delete[] users;

	for (int i = 0; i < 4; i++) 
	{
		delete paidUsers[i];
	} 
	delete[] paidUsers;
}