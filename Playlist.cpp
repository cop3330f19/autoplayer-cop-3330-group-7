

#include<iostream>
#include <string>
#include "Song.h"
#include <vector>
#include "Playlist.h"
using namespace std;

//default
Playlist::Playlist(){
    
}

Playlist::Playlist(string playlistName)
{
    this->playlistName = playlistName;
    setPlaylistName(playlistName);
}
void Playlist::setPlaylistName(string playlistName)
{
    this->playlistName = playlistName;
}
string Playlist::getPlaylistName() const// this doesn't not need to be changed
{
    return playlistName;
}
void Playlist::addSong(Song &a)
{
    playlist.push_back(a);//song a is added to the vector of songs
}

bool Playlist::deleteSong(Song  &a)//takes song object as a parameter, search and delete from playlist
{
    int i=0;
    bool flag;
    flag=false;
  
    for(int i=0;i<playlist.size();i++)
    {
        if(playlist[i]==a)//if found 
        {
            playlist.erase(playlist.begin()+i);//erases the song at position ) + i wwhich is the location of the song
            //playlist.erase(playlist.at(i));    
                flag=true;//change flag to true if found
        }
        if(flag==true)//when true print that it has been deleter
        {
            cout<<"Deleted"<<endl;
        }
        else if(flag==false)// if not found print the somg does not exist
        {
            cout<<"This song does not exist"<<endl;
        }
    }
    return flag;
}
vector<Song> Playlist:: getPlaylist(){return playlist; }
Playlist Playlist::intersect(Playlist &i)//take a playlist object as a parameter and return a new playlist
{
    Playlist intersectList;//new playlist 
    
    
    vector<Song> song1 =this->playlist;
    vector<Song> songs = i.getPlaylist();
    bool flag =false;
    
    cout<<"What is the playlist name?"<<endl;
    cin>>playlistName;
    intersectList(playlistName);//sets the name of the new playlist
     for(int i=0;i<playlist.size();i++)
     {
         for(int j=0;j<song1.size();j++)
             {
                 if(song1[j]==playlist[i])
                     flag=true;
               intersectList.addSong(song1[i]);
             }
     }
    
    return intersectList;
}
// int Playlist::search(vector<string> &l,int location)
// {
//     string name = l[location];
    
//     return index;
    
// }
Playlist Playlist::Merge(Playlist &m)
{
    Playlist mergedList;   //new playlist variable, will be returned to call
    string name;
    int n,option1,option2;
    
   
    //mergedList=m+ ?
    
    
    
    return mergedList;
}

void Playlist::play()
{
    //send in playlist
    //select song from list and play(print contents of song)
    if(mode=='N'||mode=='n')//regular
    {
    cout<<"Now playing: "<<playlist[location].getTitle()<<endl;
        location++;
    if(location<playlist.size())//checks for the location in the vector, makes sure it is within the bounds of vector
        cout<< playlist[location]<<endl;
    else
        cout<<"End of playlist"<<endl;
    }
   if(mode=='R'||mode=='r')//repeat
   {
       cout<<playlist[location]<<endl;
   }
    if(mode=='L'||mode=='l')//loop
    {
        if(location>playlist.size())//checks to see it is out of bounds of vector
            location=0;//resets it to the first song in playlist
    }
}


void Playlist::setMode(char mode)
{
    this->mode=mode;
}
//    /***************************************************************
// 	 *                             operator+                      *
// 	 *                                                            *
// 	 * Passed   : 2 arguments: a Playlist object and a Song object*                                 *
// 	 * Purpose  : Add a song to a playlist.                       *
// 	 * Returns  : New Playlist object                             *
// 	 **************************************************************/
Playlist operator+ (Playlist& list, Song& song)
{
   
    list.addSong(song);//adds song to end of new playlist object
    return list;
}

//  /***************************************************************
// 	 *                             operator+                      *
// 	 *                                                            *
// 	 * Passed   : 2 arguments: Two playlist objects.              *                                 *
// 	 * Purpose  : Combines 2 playlists.                           *
// 	 * Returns  : New Playlist object                             *
// 	 **************************************************************/
Playlist operator+ (Playlist& list1, Playlist& list2)
{
    string playlistName;
    Playlist listNew;
    string name1=list1.getPlaylistName();// get playlist 1 name
    string name2=list2.getPlaylistName();// get playlist 2 name
    playlistName=name1+name2;//combine playlist names
    listNew.setPlaylistName(playlistName);//set new playlist name
    listNew= list1 + list2;//combine playlists
    return listNew;//return new playlist object
    
}

//    /***************************************************************
// 	 *                             operator-                      *
// 	 *                                                            *
// 	 * Passed   : 2 arguments: a Playlist object and a Song object*                                 *
// 	 * Purpose  : Delete a song from a playlist                   *
// 	 * Returns  : New Playlist object                             *
// 	 **************************************************************/
Playlist operator- (Playlist& list, Song& song)
{
    
    list.deleteSong(song);//calls delete function to delete parameter song from list
    return list;//return new playlist
}

ostream& operator<<(ostream& os, const Playlist& list)//print list of 
{
    for(int i=0;i<playlist.size();i++)//loops through playlist vector 
    os<<list.playlist[i];
    return os;
}

