#pragma once

#include "Album.h"

#include <string>
#include <vector>
// 3.4.1
// Задание: Создать класс банда, хранящий название, описание и написанные альбомы.

/// <summary>
/// Класс музыкальная группа, композирующая альбом
/// </summary>
class Band
{
	/// <summary>
	/// Название музыкальной группы
	/// </summary>
	std::string _title;

	/// <summary>
	/// Описание музыкальной группы
	/// </summary>
	std::string _description;

	/// <summary>
	/// Альбомы написанные данной группой
	/// </summary>
	std::vector<Album> _albums;

public:
	// TODO: + комментарии
	
	/// <summary>
	/// Конструктор по умолчанию без параметров
	/// </summary>
	Band();

	/// <summary>
	/// Конструктор по умолчанию
	/// </summary>
	/// <param name="title">Название группы</param>
	/// <param name="description">Описание группы</param>
	Band(const std::string& title, const std::string& description);

	// 3.4.2
	// Задание: Описать функцию по поиску песни группы по её названию.

	/// <summary>
	/// Поиск песни группы по её названию
	/// </summary>
	/// <param name="songTitle">Название искомой песни</param>
	/// <returns>Найденная песня или nullptr</returns>
	Song* FindSong(const std::string& songTitle);

	// 3.4.3
	// Задание: функцию по поиску альбома с заданной песней.

	/// <summary>
	/// Поиск альбома с заданной песней
	/// </summary>
	/// <param name="song">Искомая песня</param>
	/// <returns>Альбом содержащий заданную песню или nullptr</returns>
	Album* FindAlbum(Song* song);

	// 3.4.4
	// Задание: Создать функцию по возвращению всех песен группы.

	/// <summary>
	/// Получить все песни группы
	/// </summary>
	/// <param name="outAllSongsCount">Количество найденных песен</param>
	/// <returns>Указатель на первый элемент массива</returns>
	Song* GetAllSong(int& outAllSongsCount);

	// 3.4.6
	// Задание: Создать функцию по возвращению всех песен группы определённого жанра.

	/// <summary>
	/// Получить все песни группы определённого жанра
	/// </summary>
	/// <param name="songGenre">Жанр песни по которому осуществляется поиск</param>
	/// <param name="allSongsCount">Количество найденных песен</param>
	/// <returns>Указатель на первый элемент массива</returns>
	Song* GetAllSong(Genre songGenre, int& allSongsCount);

	/// <summary>
	/// Задать название группе
	/// </summary>
	/// <param name="title">Новое название</param>
	void SetTitle(const std::string& title);

	/// <summary>
	/// Задать описание группе
	/// </summary>
	/// <param name="description">Новое описание</param>
	void SetDescription(const std::string& description);

	/// <summary>
	/// Добавить альбом новый альбом группы
	/// </summary>
	/// <param name="album">Новый альбом</param>
	void AddAlbum(const Album& album);

	/// <summary>
	/// Удалить заданный альбом из списка группы
	/// </summary>
	/// <param name="album">Альбом который надо удалить</param>
	void RemoveAlbum(const Album& album);

	/// <summary>
	/// Получить название группы
	/// </summary>
	/// <returns>Название</returns>
	const std::string& GetTitle() const { return _title; }

	/// <summary>
	/// Получить описание группы
	/// </summary>
	/// <returns>Описание в виде строки</returns>
	const std::string& GetDescription() const { return _description; }

	/// <summary>
	/// Получить количество написанных группой альбомов
	/// </summary>
	/// <returns>Количество альбомов</returns>
	int GetAlbumCount() const { return _albums.size(); }

	/// <summary>
	/// Получить альбом по заданному индексу
	/// </summary>
	/// <param name="index">Индекс альбома</param>
	/// <returns>Альбом группы по индексу</returns>
	Album* GetAlbum(int index) { return &_albums.at(index); }
};