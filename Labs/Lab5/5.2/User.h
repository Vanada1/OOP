#pragma once
#include<string>

class User
{
	private:
		int _id{};
		std::string _login;
		std::string _password;
		void SetId(int id);

	public:
		//TODO: Константные ссылки?
		void SetLogin(std::string login);
		void SetPassword(std::string password);

		int GetId(); 
		std::string GetLogin();
		std::string GetPassword();

		User(int id, std::string login, std::string password);

		bool IsCorrectPassword(std::string password);
};