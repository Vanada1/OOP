#pragma once
#include <string>

class Post
{
	private:
		std::string _title;
		std::string _text;
	public:
		void SetTitle(std::string title);
		void SetText(std::string text);

		std::string GetTitle();
		std::string GetText();

		Post(std::string title, std::string text);
};