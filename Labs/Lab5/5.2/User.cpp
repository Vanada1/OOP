#include "User.h"

void User::SetId(int id) 
{ 
	this->_id = id;
} 

void User::SetLogin(std::string login) 
{
	this->_login = login;
} 

void User::SetPassword(std::string password) 
{
	this->_password = password;
}

int User::GetId() 
{ 
	return this->_id; 
} 

std::string User::GetLogin() 
{ 
	return this->_login;
}

std::string User::GetPassword() 
{ 
	return this->_password;
}

User::User(int id, std::string login, std::string password)
{
	this->SetId(id); 
	this->SetLogin(login);
	this->SetPassword(password);
} 

bool User::IsCorrectPassword(std::string password) 
{ 
	return (password == this->_password);
}