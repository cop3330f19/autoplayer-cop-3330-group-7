#include <iostream>
#include <string>
#include "Song.h"


using namespace std;

int main()
{
Playlist list1;
int option;

cout<<"----------WELCOME to the AutoPlayer----------"<<endl;
cout<<"1 - Open an existing playlist"<<endl;
cout<<"2 - Create new list"<<endl;
cout<<"3 - Exit"<<endl;
cout<<"Selection: ";
cin>>option;

if (option==1)
{
    cout<<"Please select a playlist from below: "<<endl;
    for (int i=0;i<list1.size;i++)
    {
        cout<<i<<" "<<list1.name<<endl;
    }
    cout<<"Selection: ";
    cin>>option;
    
}

    return 0;
}
