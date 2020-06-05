#pragma once
#include "User.h"
#include <string>

User* Login(User** users, int usersCount,
	//TODO: Константные ссылки?
	std::string enteredLogin, std::string enteredPassword);