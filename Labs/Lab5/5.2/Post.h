#pragma once
#include <string>

class Post
{
	private:
		std::string _title;
		std::string _text;
	public:
		//TODO: Константные ссылки?
		void SetTitle(std::string title);
		//TODO: Константные ссылки?
		void SetText(std::string text);

		//TODO: Константные ссылки?
		std::string GetTitle();
		std::string GetText();

		//TODO: Константные ссылки?
		Post(std::string title, std::string text);
};