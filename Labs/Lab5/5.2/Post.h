#pragma once
#include <string>

class Post
{
	private:
		std::string _title;
		std::string _text;
	public:
		void SetTitle(const std::string& title);
		void SetText(const std::string& text);

		const std::string& GetTitle();
		const std::string& GetText();

		Post(const std::string& title, const std::string& text);
};