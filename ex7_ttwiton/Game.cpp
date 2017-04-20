#include "Game.h"

Game::Game(string t, int r){
    title=t;
    rating=r;
}
string Game::getTitle(){return title;}
int Game::getRating(){return rating;}

ostream& operator<<(ostream& os, const Game& g){
    os<<"The rating of "<<g.title<<" is "<<g.rating;
    return os;
}