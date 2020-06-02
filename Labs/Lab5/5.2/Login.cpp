#include "Login.h"
#include <exception>

User* Login(User** users, int usersCount,
	std::string enteredLogin, std::string enteredPassword)
{
	for (int i = 0; i < usersCount; i++)
	{ 
		if (users[i]->GetLogin() == enteredLogin) 
		{ 
			if (users[i]->IsCorrectPassword(enteredPassword)) 
			{ 
				return users[i]; 
			} 
			else 
			{ 
				throw std::exception("Uncorrect password");
			} 
		} 
	} 
	return nullptr;
}