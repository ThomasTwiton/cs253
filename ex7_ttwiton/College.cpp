#include "College.h"

College::College(string n, int r){
    name=n;
    rank=r;
}
void College::setRank(int r){rank=r;}
ostream& operator<<(ostream& os, const College& c){
    os<<c.name<<" is ranked #"<<c.rank;
    return os;
}