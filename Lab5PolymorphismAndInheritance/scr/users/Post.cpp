#include "Post.h"

void Post::SetTitle(const std::string& title)
{
	_title = title;
}

void Post::SetText(const std::string& text)
{
	_text = text;
}

Post::Post(const std::string& title, const std::string& text)
{
	SetTitle(title);
	SetText(text);
}