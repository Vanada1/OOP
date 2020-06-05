#pragma once
#include<string>

class User
{
	private:
		int _id;
		std::string _login;
		std::string _password;
		void SetId(int id);

	public:
		void SetLogin(const std::string& login);
		void SetPassword(const std::string& password);

		int GetId(); 
		const std::string& GetLogin();
		const std::string& GetPassword();

		User(int id, const std::string& login, const std::string& password);

		bool IsCorrectPassword(const std::string& password);
};