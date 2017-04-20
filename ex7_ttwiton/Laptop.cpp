#include "Laptop.h"

Laptop::Laptop(string m, double p, string c){
    manufacturer=m;
    price=p;
    color=c;
}
string Laptop::getManufacturer(){return manufacturer;}
void Laptop::setManufacturer(string m){manufacturer=m;}
double Laptop::getPrice(){return price;}
void Laptop::setPrice(double p){price=p;}
string Laptop::getColor(){return color;}
void Laptop::setColor(string c){color=c;}
ostream& operator<<(ostream& os, const Laptop& l){
    os<<l.color<<" laptop by "<<l.manufacturer<<" costs $"<<setprecision(2)<<fixed<<l.price;
    return os;
}