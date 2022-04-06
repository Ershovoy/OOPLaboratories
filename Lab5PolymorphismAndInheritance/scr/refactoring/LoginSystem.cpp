#include "LoginSystem.h"

User* Login(User** users, int usersCount, std::string& enteredLogin, std::string& enteredPassword)
{
	for (int i = 0; i < usersCount; i++)
	{
		if (users[i]->GetLogin() == enteredLogin)
		{
			if (users[i]->IsCorrectPassword(enteredPassword))
			{
				return users[i];
			}
			else
			{
				// TODO: нужно кидать не строки, а объекты класса exception()
				throw "Uncorrect password.";
			}
		}
	}
	return nullptr;
}