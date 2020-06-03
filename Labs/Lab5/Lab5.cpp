//5.1
#include "OutputFunction.h"
#include "Person.h"
#include "Student.h"
#include "Teacher.h"
//5.2
#include "5.2/User.h"
#include "5.2/PaidUser.h"
#include "5.2/Login.h"
//5.3
#include "ShowCheckWithDiscount.h"
#include "PercentDiscount.h"
#include "CertificateDiscount.h"
#include "Product.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	//5.1
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

	//5.2
	/*User** users = new User*[4] 
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
	delete[] paidUsers;*/

	//5.3
	const int arrayCount = 4;
	string names[arrayCount]
	{
		"LED DEXP H24E7000M", 
		"LED Gazer TV24-HS2",
		"Irbis NB125",
		"DEXP QC321K"
	};
	Product** products = new Product * [arrayCount]
	{
		new Product(names[0], TV, 3000.0),
		new Product(names[1], TV, 10000.0),
		new Product(names[2], Notebook, 20000.0),
		new Product(names[3], Monitor, 12000.0)
	};

	PercentDiscount* percentDiscount = new PercentDiscount(25.0, TV);
	ShowCheckWithDiscount(percentDiscount, products, arrayCount);
	delete percentDiscount;
	cout << endl;
	CertificateDiscount* certificateDiscount = new CertificateDiscount(5000.0, TV);
	ShowCheckWithDiscount(certificateDiscount, products, arrayCount);
	delete certificateDiscount;

	for (int i = 0; i < arrayCount; i++)
	{
		delete products[i];
	}
	delete[] products;
}