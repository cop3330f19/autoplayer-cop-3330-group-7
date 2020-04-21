#include <iostream>
#include <string>
#include "Song.h"

class Playlist
{

public:
Playlist();
Playlist(std::string playlistName);
void setPlaylistName(string playlistName)
string getPlaylistName();
void addSong(Song &);
void deleteSong(Song &);
std::string intersect(Playlist & );
std::string Merge(Playlist &);
void Play(Playlist &);

private:
std::string playlistName;
std::vector<Song> playlist;


}





