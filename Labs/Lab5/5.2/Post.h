#pragma once
#include <string>

class Post
{
	private:
		std::string _title;
		std::string _text;
	public:
		//TODO: ����������� ������?
		void SetTitle(std::string title);
		//TODO: ����������� ������?
		void SetText(std::string text);

		//TODO: ����������� ������?
		std::string GetTitle();
		std::string GetText();

		//TODO: ����������� ������?
		Post(std::string title, std::string text);
};