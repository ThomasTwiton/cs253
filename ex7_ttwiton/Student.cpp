#include "Student.h"

Student::Student(string n, string m, double g){
    name=n;
    major=m;
    gpa=g;
}
ostream& operator<<(ostream& os, const Student& s){
    os<<s.name<<" ("<<s.gpa<<") majors in "<<s.major;
    return os;
}