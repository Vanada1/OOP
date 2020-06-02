#include "Post.h"

void Post::SetTitle(std::string title) 
{ 
	_title = title; 
}

void Post::SetText(std::string text)
{ 
	_text = text; 
}

std::string Post::GetTitle() 
{ 
	return _title; 
}

std::string Post::GetText() 
{
	return _text; 
}

Post::Post(std::string title, std::string text)
{ 
	SetTitle(title); 
	SetText(text); 
}