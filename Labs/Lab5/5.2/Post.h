#pragma once
#include <string>

class Post
{
	private:
		std::string _title;
		std::string _text;
	public:
		//TODO: Константные ссылки?(Done)
		void SetTitle(const std::string& title);
		//TODO: Константные ссылки(Done)
		void SetText(const std::string& text);

		//TODO: Константные ссылки?(Done)
		const std::string& GetTitle();
		const std::string& GetText();

		//TODO: Константные ссылки?(Done)
		Post(const std::string& title, const std::string& text);
};