#pragma once
#include <string>

class Post
{
	private:
		std::string _title;
		std::string _text;
	public:
		//TODO: ����������� ������?(Done)
		void SetTitle(const std::string& title);
		//TODO: ����������� ������(Done)
		void SetText(const std::string& text);

		//TODO: ����������� ������?(Done)
		const std::string& GetTitle();
		const std::string& GetText();

		//TODO: ����������� ������?(Done)
		Post(const std::string& title, const std::string& text);
};