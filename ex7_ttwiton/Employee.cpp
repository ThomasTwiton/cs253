#include "Employee.h"

Employee::Employee(string f, string l, double s, bool t){
    firstName=f;
    lastName=l;
    salary=s;
    isFullTime=t;
}
ostream& operator<<(ostream& os, const Employee& e){
    string descriptor;
    if (e.isFullTime){
        descriptor="full-time";
    } else {
        descriptor="part-time";
    }
    os << e.firstName << " " << e.lastName << " earns $"<<setprecision(2)<<fixed<<e.salary<< " and works "<<descriptor;
    return os;
}