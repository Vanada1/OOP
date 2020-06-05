#pragma once
#include "Post.h"
#include "User.h"
#include <string>

class PaidUser : public User
{
	private:
		Post* _posts;
		int _postsCount;

	public:
		void SetPosts(Post* posts, int postsCount);

		Post* GetPosts();
		int GetPostsCount();

	//TODO: ����������� ������?  (Done)
		PaidUser(int id, const std::string& login, const std::string& password,
			Post* posts, int postsCount);
		//TODO: ����������� ������?(Done)
		PaidUser(int id, const std::string& login, const std::string& password);
};