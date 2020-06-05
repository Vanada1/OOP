#include "Teacher.h"

Teacher::Teacher(const std::string& firstName, const std::string& middleName,
	const std::string& lastName, std::string& post) :
	Person(firstName, middleName, lastName)
{
	this->SetPost(post);
}

Teacher::~Teacher()
{

}

void Teacher::SetPost(const std::string& post)
{
	this->_post = post;
}

const std::string& Teacher::GetPost()
{
	return this->_post;
}