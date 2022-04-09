#pragma once

#include "User.h"
#include "Post.h"

#include <vector>

/// <summary>
/// Класс описывающий пользователя с платным аккаунтом
/// </summary>
class PaidUser : public User
{
	/// <summary>
	/// Посты написанные данным пользователем
	/// </summary>
	std::vector<Post*> _posts;

public:
	// TODO: + комментарий

	/// <summary>
	/// Конструктор с параметрами для платного пользователя
	/// </summary>
	/// <param name="login">Логин платного пользователя</param>
	/// <param name="password">Пароль платного пользователя</param>
	PaidUser(const std::string& login, const std::string& password);

	/// <summary>
	/// Добавить новый пост в список данного пользователя
	/// </summary>
	/// <param name="post">Новый пост</param>
	void AddPost(Post* post);

	/// <summary>
	/// Получить пост написанный пользователем по индексу
	/// </summary>
	/// <param name="index">Индекс поста</param>
	/// <returns>Статья пользователя по индексу</returns>
	Post* GetPost(int index) { return _posts.at(index); };

	/// <summary>
	/// Получить количество статей пользователя
	/// </summary>
	/// <returns>Количество статей</returns>
	int GetPostCount() { return _posts.size(); }
};