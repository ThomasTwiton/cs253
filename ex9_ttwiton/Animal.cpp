#include "Animal.h"

Animal::Animal(string name_, int age_, string habitat_) {
    className = __FUNCTION__;
    name = name_;
    age = age_;
    habitat = habitat_;
}

ostream& operator<<(ostream& os, const Animal& a) {
    //Task 1: print an animal info: age, species (className), name, the sound and the movement it makes, and its habitat
    os << a.age << "yo "<< a.className << " " << a.name <<" says " << a.sound() << " and " << a.movement() << " back to " << a.habitat;
    return os;
}
