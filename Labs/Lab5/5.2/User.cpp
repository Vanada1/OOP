#include "User.h"
#include <exception>

void User::SetId(int id) 
{ 
	this->_id = id;
} 

void User::SetLogin(const std::string& login)
{
	const int countChar = 11;
	char trashSymbols[countChar]{ '{', '}', '<', '>', '@', '#',
		'$','%','^', ':','*' };
	for (int i = 0; i < login.size(); i++)
	{
		for (int j = 0; j < countChar; j++)
		{
			if (login[i] == trashSymbols[j])
			{
				throw std::exception("Error Symbol");
			}
		}
	}
	this->_login = login;
} 

void User::SetPassword(const std::string& password)
{
	this->_password = password;
}

int User::GetId() 
{ 
	return this->_id; 
} 

const std::string& User::GetLogin()
{ 
	return this->_login;
}

const std::string& User::GetPassword()
{ 
	return this->_password;
}

User::User(int id, const std::string& login, const std::string& password)
{
	this->SetId(id); 
	this->SetLogin(login);
	this->SetPassword(password);
} 

bool User::IsCorrectPassword(const std::string& password)
{ 
	return (password == this->_password);
}