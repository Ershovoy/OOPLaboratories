#pragma once

#include "Song.h"

#include <vector>

// 3.4.1
// Задание: Класс Album с указанием названия, года выпуска и массива песен,
// а также с соответствующими конструкторами и сеттерами.

class Album
{
	std::string _title;
	int _releaseYear;
	std::vector<Song> _songs;

public:
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

