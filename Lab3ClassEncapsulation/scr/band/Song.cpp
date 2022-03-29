#include "Song.h"

Song::Song() : _title(""), _durationInSecond(0), _genre() {}

Song::Song(std::string title, Genre genre, int duration)
{
	SetTitle(title);
	SetDuration(duration);
	SetGenre(genre);
}

bool Song::operator==(const Song& song)
{
	if (_title == song._title && _durationInSecond == song._durationInSecond && _genre == song._genre)
	{
		return true;
	}
	return false;
}

//TODO: - передача по значению?
void Song::SetTitle(std::string title)
{
	_title = title;
}

void Song::SetDuration(int durationInSecond)
{
	if (durationInSecond < 0)
	{
		throw std::exception("Song duration can't be negative number.");
	}
	_durationInSecond = durationInSecond;
}

void Song::SetGenre(Genre genre)
{
	_genre = genre;
}
