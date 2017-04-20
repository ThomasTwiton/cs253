#include "Company.h"

Company::Company(string n, double s){
    name=n;
    stockPrice=s;
}
double Company::getStockPrice(){return stockPrice;}
void Company::setStockPrice(double s){stockPrice=s;}
ostream& operator<<(ostream& os, const Company& c){
    os<<c.name<<"\'s stock price is $"<<setprecision(2)<<fixed<<c.stockPrice;
    return os;
}