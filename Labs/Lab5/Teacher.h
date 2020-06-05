#pragma once

#include "Person.h"
#include  <string>

class Teacher : public Person
{
	private:
		std::string _post;

	public:
	//TODO: Константные ссылки?
		Teacher(std::string& firstName, std::string& middleName,
			std::string& lastName, std::string& post);
		~Teacher();

		void SetPost(std::string& post);

		std::string GetPost();
};