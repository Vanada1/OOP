#pragma once
#include "User.h"
#include <string>

User* Login(User** users, int usersCount,
	//TODO: Константные ссылки?(Done)
	const std::string& enteredLogin, const std::string& enteredPassword);