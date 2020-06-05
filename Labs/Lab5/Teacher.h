#pragma once

#include "Person.h"
#include  <string>

class Teacher : public Person
{
	private:
		std::string _post;

	public:
		Teacher(const std::string& firstName, const std::string& middleName,
			const std::string& lastName, std::string& post);
		~Teacher();

		void SetPost(const std::string& post);

		const std::string& GetPost();
};