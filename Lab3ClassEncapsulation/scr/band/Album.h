#pragma once

#include "Song.h"

#include <vector>

// TODO: каждую предметную область в свою подпапку
// 3.4.1
// Задание: Класс Album с указанием названия, года выпуска и массива песен,
// а также с соответствующими конструкторами и сеттерами.

/// <summary>
/// Албом
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
	// TODO: комментарии ко всем методам!
	Album();
	Album(std::string title, int releaseYear);
	Album(std::string title, int releaseYear, std::vector<Song> songs);

	bool operator==(const Album& album);

	void SetTitle(std::string title);
	void SetReleaseYear(int releaseYear);
	void AddSong(Song song);
	void RemoveSong(Song song);

	std::string GetTitle() const { return _title; }
	int GetReleaseYear() const { return _releaseYear; }
	int GetSongCount() const { return _songs.size(); }
	Song* GetSongs(int index) { return &_songs.at(index); }
};

