#include "Album.h"

Album::Album() : _title(""), _releaseYear(0), _songs() {}
Album::Album(const std::string& title,
		     int releaseYear) : _title(title), _releaseYear(releaseYear) {}
Album::Album(const std::string& title, 
		     int releaseYear, std::vector<Song> songs)
			 : _title(title), _releaseYear(releaseYear), _songs(songs) {}

bool Album::operator==(const Album& album)
{
	//TODO: + возвращать дальше
	return (_title == album._title) && (_releaseYear == album._releaseYear);
}

void Album::SetTitle(const std::string& title)
{
	_title = title;
}

void Album::SetReleaseYear(int releaseYear)
{
	_releaseYear = releaseYear;
}

//TODO: + передача по значению?
void Album::AddSong(const Song& song)
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

//TODO: + передача по значению?
void Album::RemoveSong(const Song& song)
{
	_songs.erase(std::find(_songs.begin(), _songs.end(), song));
}