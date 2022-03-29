#include "IOBand.h"

void DemoBand()
{
	Band band;
	band.SetTitle("Band1");
	band.SetDesctiprion("Description1");

	band.AddAlbum(Album("Album1", 1998));
	band.GetAlbum(0)->AddSong(Song("Song1", Genre::Metal, 123));
	band.GetAlbum(0)->AddSong(Song("Song2", Genre::PunkRock, 66));
	band.GetAlbum(0)->AddSong(Song("Song3", Genre::Metal, 13));

	band.AddAlbum(Album("Album2", 2000));
	band.GetAlbum(1)->AddSong(Song("Song4", Genre::Punk, 111));
	band.GetAlbum(1)->AddSong(Song("Song5", Genre::PunkRock, 155));
	band.GetAlbum(1)->AddSong(Song("Song6", Genre::Rock, 81));
	band.GetAlbum(1)->AddSong(Song("Song7", Genre::Jazz, 99));

	band.AddAlbum(Album("Album3", 2005));
	band.GetAlbum(2)->AddSong(Song("Song8", Genre::Metal, 135));
	band.GetAlbum(2)->AddSong(Song("Song9", Genre::Rock, 100));

	std::cout << "All Songs:\n";
	int allSongCount;
	Song* allSong = band.GetAllSong(allSongCount);
	for (int i = 0; i < allSongCount; ++i)
	{
		std::cout << allSong[i].GetTitle() << '\n';
	}

	std::cout << "\nSong with \"Song4\" title: ";
	std::cout << band.FindSong("Song4")->GetTitle();

	//TODO: + опечатка
	std::cout << "\nAll songs in third album:\n";
	Album* album = band.FindAlbum(band.FindSong("Song8"));
	for (int i = 0; i < album->GetSongCount(); ++i)
	{
		std::cout << album->GetSongs(i)->GetTitle() << '\n';
	}
}
