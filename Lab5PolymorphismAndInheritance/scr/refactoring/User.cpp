#include "User.h"

User::User(const std::string& login, const std::string& password)
{
    SetLogin(login);
    SetPassword(password);
    _id = UserIdGenerator::GetNewId();
}

bool User::IsCorrectPassword(const std::string& password)
{
    return (password == _password);
}

void User::SetLogin(const std::string& login)
{
    if (!StringValidator::IsAlphanumeric(login))
    {
        throw "Error occure: Login must have only letters or digits.";
    }
    _login = login;
}

void User::SetPassword(const std::string& password)
{
    if (!StringValidator::IsAlphanumeric(password))
    {
        throw "Error occure: Password must have only letters or digits.";
    }
    _password = password;
}