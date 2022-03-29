#pragma once

#include "Album.h"

#include <string>
#include <vector>
//TODO: + UTF8?
//TODO: + Doxygen?
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
	Band();
	Band(std::string title, std::string description);

	// 3.4.2
	// Задание: Описать функцию по поиску песни группы по её названию.

	/// <summary>
	/// Поиск песни группы по её названию
	/// </summary>
	/// <param name="songTitle">Название искомой песни</param>
	/// <returns>Найденная песня или nullptr</returns>
	Song* FindSong(std::string songTitle);

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

	void SetTitle(std::string title);
	void SetDesctiprion(std::string description);
	void AddAlbum(Album album);
	void RemoveAlbum(Album album);

	std::string GetTitle() const { return _title; }
	std::string GetDescription() const { return _description; }
	int GetAlbumCount() const { return _albums.size(); }
	Album* GetAlbum(int index) { return &_albums.at(index); }
};