#pragma once
#include "User.h"
#include <string>

User* Login(User** users, int usersCount,
	std::string enteredLogin, std::string enteredPassword);