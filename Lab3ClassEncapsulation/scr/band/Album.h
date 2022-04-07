#pragma once

#include "..\song\Song.h"

#include <vector>

// TODO: + каждую предметную область в свою подпапку
// 3.4.1
// Задание: Класс Album с указанием названия, года выпуска и массива песен,
// а также с соответствующими конструкторами и сеттерами.

/// <summary>
/// Альбом
/// </summary>
class Album
{
	/// <summary>
	/// Название альбома
	/// </summary>
	std::string _title;

	/// <summary>
	/// Год выпуска альбома
	/// </summary>
	int _releaseYear;

	/// <summary>
	/// Песни в альбоме
	/// </summary>
	std::vector<Song> _songs;

public:
	// TODO: + комментарии ко всем методам!

	/// <summary>
	/// Конструктор по умолчанию
	/// </summary>
	Album();

	/// <summary>
	/// Конструктор с параметрами
	/// </summary>
	/// <param name="title">Название альбома</param>
	/// <param name="releaseYear">Год выхода альбома</param>
	Album(const std::string& title, int releaseYear);

	/// <summary>
	/// Конструктор с параметрами
	/// </summary>
	/// <param name="title">Название альбома</param>
	/// <param name="releaseYear">год выхода альбома</param>
	/// <param name="songs">Песни альбома</param>
	Album(const std::string& title, int releaseYear, std::vector<Song> songs);

	/// <summary>
	/// Перегрузка оператора сравнения
	/// </summary>
	/// <param name="album">Альбом с котором нужно с равнить текущий</param>
	/// <returns>true - если равны, иначе false</returns>
	bool operator==(const Album& album);

	/// <summary>
	/// Задать название альбому
	/// </summary>
	/// <param name="title">Новое название</param>
	void SetTitle(const std::string& title);

	/// <summary>
	/// Задать год выхода альбому
	/// </summary>
	/// <param name="releaseYear">Год выхода</param>
	void SetReleaseYear(int releaseYear);

	/// <summary>
	/// Добавить песню в альбом
	/// </summary>
	/// <param name="song">Песня которую нужно добавить в альбом</param>
	void AddSong(const Song& song);

	/// <summary>
	/// Удалить песню из альбома
	/// </summary>
	/// <param name="song">Песня которую нужно удалить</param>
	void RemoveSong(const Song& song);

	/// <summary>
	/// Получить название альбома
	/// </summary>
	/// <returns>Название альбома</returns>
	const std::string& GetTitle() const { return _title; }

	/// <summary>
	/// Получить год выхода альбома
	/// </summary>
	/// <returns>Год выхода</returns>
	int GetReleaseYear() const { return _releaseYear; }

	/// <summary>
	/// Получить количество песен в альбоме
	/// </summary>
	/// <returns>Количество песен</returns>
	int GetSongCount() const { return _songs.size(); }

	/// <summary>
	/// Получить песню альбома по заданному индексу
	/// </summary>
	/// <param name="index">Заданный индекс</param>
	/// <returns>Песня по заданному индексу</returns>
	Song* GetSongs(int index) { return &_songs.at(index); }
};

