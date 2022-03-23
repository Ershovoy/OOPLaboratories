#pragma once

#include "Album.h"

#include <string>
#include <vector>
//TODO: UTF8?
//TODO: Doxygen?
// 3.4.1
// �������: ������� ����� �����, �������� ��������, �������� � ���������� �������.

class Band
{
	std::string _title;
	std::string _description;
	std::vector<Album> _albums;

public:
	Band();
	Band(std::string title, std::string description);

	// 3.4.2
	// �������: ������� ������� �� ������ ����� ������ �� � ��������.
	Song* FindSong(std::string songTitle);

	// 3.4.3
	// �������: ������� �� ������ ������� � �������� ������.
	Album* FindAlbum(Song* song);

	// 3.4.4
	// �������: ������� ������� �� ����������� ���� ����� ������.
	Song* GetAllSong(int& allSongsCount);

	// 3.4.6
	// �������: ������� ������� �� ����������� ���� ����� ������ ������������ �����.
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