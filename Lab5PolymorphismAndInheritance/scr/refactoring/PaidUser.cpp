#include "PaidUser.h"

PaidUser::PaidUser(const std::string& login,
				   const std::string& password) :
				   User(login, password)
{

}

void PaidUser::AddPost(Post* post)
{
	_posts.push_back(post);
}