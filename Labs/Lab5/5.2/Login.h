#pragma once
#include "User.h"
#include <string>

User* Login(User** users, int usersCount,
	//TODO: ����������� ������?
	std::string enteredLogin, std::string enteredPassword);