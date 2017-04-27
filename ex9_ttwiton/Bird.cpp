#include "Bird.h"

//Task 2: implement the constructor of class Bird
Bird::Bird(string name_, int age_, string habitat_, int eggs_) : Animal(name_,age_,habitat_), eggs(eggs_) {};

ostream& operator<<(ostream& os, const Bird& b) {
    if (b.eggs>1){
        os << (const Animal&) b << " to lay " << b.eggs << " eggs";
    } else {
        os << (const Animal&) b << " to lay " << b.eggs << " egg";
    }
      
    return os;
}
