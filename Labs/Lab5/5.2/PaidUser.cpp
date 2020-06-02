#include "PaidUser.h"
#include <exception>

void PaidUser::SetPosts(Post* posts, int postsCount) 
{ 
	if (postsCount < 0) 
	{ 
		throw std::exception("Posts count must be more than 0");
	} 
	_posts = posts;
	_postsCount = postsCount; }

Post* PaidUser::GetPosts() 
{
	return this->_posts;
} 

int PaidUser::GetPostsCount()
{ 
	return this->_postsCount;
}

PaidUser::PaidUser(int id, std::string login, std::string password,
	Post* posts, int postsCount) : User(id, login, password)
{ 
	this->SetPosts(posts, postsCount);
} 

PaidUser::PaidUser(int id, std::string login, std::string password)
	: PaidUser(id, login, password, nullptr, 0)
{ } 