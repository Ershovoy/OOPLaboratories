#include "Album.h"

Album::Album() : _title(""), _releaseYear(0), _songs() {}

Album::Album(std::string title, int releaseYear) : _title(title), _releaseYear(releaseYear) {}

Album::Album(std::string title, int releaseYear, std::vector<Song> songs)
	: _title(title), _releaseYear(releaseYear), _songs(songs) {}

bool Album::operator==(const Album& album)
{
	if (_title == album._title && _releaseYear == album._releaseYear)
	{
		return true;
	}
	return false;
}

void Album::SetTitle(std::string title)
{
	_title = title;
}

void Album::SetReleaseYear(int releaseYear)
{
	_releaseYear = releaseYear;
}

void Album::AddSong(Song song)
{
	if (std::find(_songs.begin(), _songs.end(), song) == _songs.end())
	{
		_songs.push_back(song);
	}
	else
	{
		throw std::exception("Album already has this song.");
	}
}

void Album::RemoveSong(Song song)
{
	_songs.erase(std::find(_songs.begin(), _songs.end(), song));
}