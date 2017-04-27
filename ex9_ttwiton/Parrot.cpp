#include "Parrot.h"

Parrot::Parrot(string name_, int age_, int eggs_, bool talking_): Bird(name_, age_, "Tropics", eggs_), talking(talking_) { className = __FUNCTION__; };

string Parrot::sound() const {
    //Task 6: return a string (see output.txt for an example) based on the value of talking data member.
    if (talking){
        return "I want a cracker";
    } else{
        return "ARGHHH!";
    }
}
