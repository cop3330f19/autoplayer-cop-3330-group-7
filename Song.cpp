

#include <iostream>
#include "Song.h"
#include <string>
using namespace std;


 Song::Song()
 {
     
 }

 Song::Song(string title, string artist, string album, int length, int year)
 {
     //** Sets private variable equal to the parameter value **//
     
     this->title=title;
     this->artist=artist;
     this->album=album;
     this->length=length;
     this->year=year;

 }
 
 void Song::set(string title, string artist, string album, int length, int year)
 {
     //** Sets private variable equal to the parameter value **//
     
     this->title=title;
     this->artist=artist;
     this->album=album;
     this->length=length;
     this->year=year;
 }
string Song::getTitle()
{
    return title;
}
    
    // output the song in the format:
	// title, artist, album, year, length
	// output to console
	
     ostream& operator<<(ostream& os, const Song& song)
     {
         os<< song.title<<endl<<song.artist<<endl<<song.album<<endl<<song.year<<endl<<song.length<<endl;//
         return os;
     }

		//output to file
     ofstream& operator<<(ofstream& os, const Song& song)
     {
         os<<song.title<<","<<song.artist<<","<<song.album<<","<<song.year<<","<<song.length<<endl;
         return os;
     }

		// input the song in the format:
		// from user
		// title, artist, album, year, length
	 istream& operator>>(istream& is, Song& song)//inputting info from file
     {
         cout<<"Title: "<<endl;
         is>> song.title;
         cout<<"Artist: "<<endl;
         is>>song.artist;
         cout<<"Album: "<<endl;
         is>>song.album;
         cout<<"Year: "<<endl;
         is>>song.year;
         cout<<"Length: "<<endl;
         is>>song.length;
         
         return is;
     }

		//input from file
	 fstream& operator>>(fstream& is, Song& song)
     {
     is>>song.title>>song.artist>>song.album>>song.year>>song.length;
         return is;
     }

		// compare two song objects for equality
	 bool operator==(const Song& lhs, const Song& rhs)
     {
         bool same=false;
         if((lhs.title==rhs.title )&&(lhs.artist==rhs.title));//compares to different song object, compares title and song name
         same=true;
         return same;
         
     }


 
 


