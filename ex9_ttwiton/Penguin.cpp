#include "Penguin.h"

Penguin::Penguin(string name_, int age_, bool swimming_): Bird(name_, age_, "Antarctica", 1), swimming(swimming_) { className = __FUNCTION__; };

string Penguin::movement() const {
    //TODO: Task 7: return a string (see output.txt for an example) based on the value of swimming data member.
    if (swimming){
        return "swims";
    } else {
        return "walks";
    }
}

string Penguin::sound() const {
    //Task 8: return a string "Heyyy".
    return "Heyyy";
}
