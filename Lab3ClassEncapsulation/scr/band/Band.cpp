#include "Band.h"

Band::Band() : _title(), _description(), _albums() {}
//TODO: + передача по значению?
Band::Band(const std::string& title, const std::string& description)
	: _title(title), _description(description), _albums() {}
//TODO: + передача по значению?
Song* Band::FindSong(const std::string& songTitle)
{
	for (int i = 0; i < _albums.size(); ++i)
	{
		Album* currentAlbum = &_albums.at(i);
		for (int j = 0; j < currentAlbum->GetSongCount(); ++j)
		{
			Song* currentSong = currentAlbum->GetSongs(j);
			if (songTitle == currentSong->GetTitle())
			{
				return currentSong;
			}
		}
	}
	return nullptr;
}

Album* Band::FindAlbum(Song* song)
{
	for (int i = 0; i < _albums.size(); ++i)
	{
		Album* currentAlbum = &_albums.at(i);
		for (int j = 0; j < currentAlbum->GetSongCount(); ++j)
		{
			Song* currentSong = currentAlbum->GetSongs(j);
			if (song->GetTitle() == currentSong->GetTitle())
			{
				return currentAlbum;
			}
		}
	}
	return nullptr;
}

Song* Band::GetAllSong(int& allSongsCount)
{
	std::vector<Song> allSong;
	for (int i = 0; i < _albums.size(); ++i)
	{
		Album* currentAlbum = &_albums.at(i);
		for (int j = 0; j < currentAlbum->GetSongCount(); ++j)
		{
			allSong.push_back(*currentAlbum->GetSongs(j));
		}
	}
	allSongsCount = allSong.size();
	Song* result = new Song[allSongsCount];
	for (int i = 0; i < allSongsCount; ++i)
	{
		result[i] = allSong.at(i);
	}
	return result;
}

Song* Band::GetAllSong(Genre songGenre, int& allSongsCount)
{
	std::vector<Song> allSong;
	for (int i = 0; i < _albums.size(); ++i)
	{
		Album* currentAlbum = &_albums.at(i);
		for (int j = 0; j < currentAlbum->GetSongCount(); ++j)
		{
			if (currentAlbum->GetSongs(j)->GetGenre() == songGenre)
			{
				allSong.push_back(*currentAlbum->GetSongs(j));
			}
		}
	}
	allSongsCount = allSong.size();
	Song* result = new Song[allSongsCount];
	for (int i = 0; i < allSongsCount; ++i)
	{
		result[i] = allSong.at(i);
	}
	return result;
}

//TODO: + передача по значению?
void Band::SetTitle(const std::string& title)
{
	_title = title;
}

//TODO: + передача по значению?
// TODO: + грамошибка в названии. Исправить
void Band::SetDescription(const std::string& description)
{
	_description = description;
}

//TODO: + передача по значению?
void Band::AddAlbum(const Album& album)
{
	if (std::find(_albums.begin(), _albums.end(), album) == _albums.end())
	{
		_albums.push_back(album);
	}
	else
	{
		throw std::exception("Band already has this album.");
	}
}

//TODO: + передача по значению?
void Band::RemoveAlbum(const Album& album)
{
	_albums.erase(std::find(_albums.begin(), _albums.end(), album));
}
