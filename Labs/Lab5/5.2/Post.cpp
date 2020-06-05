#include "Post.h"

void Post::SetTitle(const std::string& title)
{ 
	_title = title; 
}

void Post::SetText(const std::string& text)
{ 
	_text = text; 
}

const std::string& Post::GetTitle()
{ 
	return _title; 
}

const std::string& Post::GetText()
{
	return _text; 
}

Post::Post(const std::string& title, const std::string& text)
{ 
	SetTitle(title); 
	SetText(text); 
}