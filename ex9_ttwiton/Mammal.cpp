#include "Mammal.h"

//Task 4: implement the constructor of class Mammal
Mammal::Mammal(string name_, int age_, string habitat_, bool carnivore_) : Animal(name_, age_, habitat_), carnivore(carnivore_){};

string Mammal::movement() const {
    return "runs";
}

ostream& operator<<(ostream& os, const Mammal& m) {
    os << (const Animal&) m;
    //Task 5: specify whether an animal eats grass or meat, depending on the value of the carnivore data member.
    if (m.carnivore) {
        os<< " to eat meat";
    } else {
        os<< " to eat grass";
    }
    return os;
}
