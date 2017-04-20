#include "Room.h"

Room::Room(string b, int n){
    building=b;
    number=n;
}

ostream& operator<<(ostream& os, const Room& r){
    os << r.building << " " <<r.number;
    return os;
}