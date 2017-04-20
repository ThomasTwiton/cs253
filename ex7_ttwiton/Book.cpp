#include "Book.h"

Book::Book(string t, string a, double p){
    title=t;
    author=a;
    price=p;
}

ostream& operator<<(ostream& os, const Book& b){
    os << b.title << " by " << b.author << " costs $" << fixed << setprecision(2) << b.price;
    return os;
}