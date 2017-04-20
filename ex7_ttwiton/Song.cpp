#include "Song.h"

Song::Song(string t, string a){
    title=t;
    artist=a;
}
string Song::getTitle(){return title;}
string Song::getArtist(){return artist;}

ostream& operator<<(ostream& os, const Song& s){
    os<<s.title<< " by "<<s.artist;
    return os;
}