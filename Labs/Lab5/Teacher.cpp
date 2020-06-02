#include "Teacher.h"

Teacher::Teacher(std::string& firstName, std::string& middleName,
	std::string& lastName, std::string& post) : 
	Person(firstName, middleName, lastName)
{
	this->SetPost(post);
}

Teacher::~Teacher()
{

}

void Teacher::SetPost(std::string& post)
{
	this->_post = post;
}

std::string Teacher::GetPost()
{
	return this->_post;
}