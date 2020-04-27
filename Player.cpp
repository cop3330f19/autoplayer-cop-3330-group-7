
#include <iostream>
#include <string>
#include "Song.h"
#include "Playlist.h"
#include <fstream>
#include "StringHelper.h"
#include <vector>


using namespace std;

// Your driver program should allow users to create new named playlist, 
// view all the playlists, merge (intersect) exisiting playlists into a new list, 
// and play a playlist.
// A list of all created playlists should be stored in a file "Playlist.list". 
//     The songs in each playlist should be stored in a file named to match the list and 
//     the file extension ".playlist". This is a CSV format.
//     

int main()
{

    vector<Playlist> lists;//vector of playlists 
    vector<Song> songs; //vector of songs
    Playlist name; 
    string pName;
    string title, album,artist;
    int length, year;


    
    ifstream listFile;
    string in;
     vector<string> totalList;
    listFile.open("Playlist.list");//open lists of file
    while (!list.eof())
    {
        getline(listFile,in);
        totalList.push_back(in);
    }



    int selection,selection2;
    string song1,titleName,title,artist,album,listName;
    int year,length;
    Song song1;
    char mode,option1,option2;

  
   
    


 //INCLUDE A DO WHILE   
    do{
        cout<<"----------WELCOME to the AutoPlayer----------"<<endl;
        cout<<"1 - Open an existing playlist"<<endl;
        cout<<"2 - Create new list"<<endl;
        cout<<"3 - Exit"<<endl;
        cout<<"Selection: ";
        cin>>selection;
        
        if(selection==1)
        {int i
            for( i=0;i<size();i++)
            {
                cout<<i+1<<totalList.size()<<endl;
                cout<<totalList[i]<<endl;//print contents of Playlist.list
                
            }
         cout<<"Selection: ";
         cin>>option;
         
            cout<<"You are now playing: "<<
            cout<<"Selection: ";
             cin>>option1;
             if(toUpper(option1)=='A')//add song
             {   
              cout<<"Song Details: "<<endl;
              cout<<"Title"<<endl;
              cin>>title;
              cout<<"Artist: ";
              cin>>artist;
              cout<<endl;
              cout<<"Album: ";
              cin>>album;
              cout<<endl;
              cout<<"Year: ";
              cin>>year;
              cout<<endl;
              cout<<"Length(in seconds): ";
              cin>>length;
              cout<<endl;
              
              songs.push_back(new Song(title,artist,album,length,year));//adds new song to song vector create dynamic song object
              //add song to playlist at location of selected playlist
             }
             else if(toUpper(option1)=='D')
             {
              cout<<"Title"<<endl;
              cin>>title;
              cout<<"Artist: ";
              cin>>artist;
              cout<<endl;
                 //call deleting function
                 
             }
             else if(toUpper(option1)=='P')
             {
                 //call play function
             }
             else if(toUpper(option1)=='M')
             {
                 cout<<"Enter mode: "<<endl;
                 cout<<"N - Normal"<<endl;
                 cout<<"R - Repeat"<<endl;
                 cout<<"L - Loop"<<endl;
                 cin>>mode;
                 //call mode function
             }
             else if(toUpper(option1)=='S')
             {
                 //call function to print all songs
             }
        }//End opening playlist
        
        if(selection==2)
        {
           
                if(option2==1)//create
                {
                   cout<<"Name of new playlist ";
                    cin>>pName;
                    new Playlist(pName);
                    
                    //insert menu
                }
                if(option2==2)//merge
                {
                 cout<<"Name of new playlist ";
                    cin>>pName;
                    new Playlist(pName);
                    cout<<"List of playlists"<<endl;
                    cout<<
                }
                if(option2==3)
                {
                 cout<<"Name of new playlist ";
                    cin>>pName;
                    new Playlist(pName);   
                    
                    for( i=0;i<size();i++)
                        {
                            cout<<i+1<<totalList.size()<<endl;
                            cout<<totalList[i]<<endl;//print contents of Playlist.list

                        }
                    
                    
                }
                    
            
        } 
    }while(selection!=3);//end do while
       
        return 0;
        }


