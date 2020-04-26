/*****************************************************
 *  File Name: Playlist.cpp
 *  Group Number:7
 *  Group Member Names:Andia Dark
 *  Date last edited: 
 *  Purpose: 
 ****************************************************/

#include <iostream>
#include <string>
#include "Song.h"
#include <vector>
class Playlist
{

public:
Playlist();
Playlist(std::string playlistName);
void setPlaylistName(std::string playlistName);
std::string getPlaylistName();
void addSong(Song &);
void deleteSong(Song &);
Playlist intersect(Playlist & );
Playlist Merge(std:: vector<Playlist> &);
void play();
void setMode(char mode);
friend std::ostream& operator<<(std::ostream& os, const Playlist& list);
friend std::ofstream& operator<<(std::ofstream& os, const Playlist& list);
friend std::istream& operator>>(std::istream& is, Playlist& list);
friend std::fstream& operator>>(std::fstream& is, Playlist& list);
friend Playlist operator+ (Playlist&, Song&);
friend Playlist operator+ (Playlist&, Playlist&);
friend Playlist operator- (Playlist&, Song&);



private:
std::string playlistName;
std::vector<Song> playlist;//holds list of song that belongs to playlist
static char mode;
int location;


};





