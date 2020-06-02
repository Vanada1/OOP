#pragma once
#include "User.h"
#include <string>

template < typename T >
T* Login(T** users, int usersCount,
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