#include "Customer.h"

Customer::Customer(double l, int t){
    loan=l;
    term=t;
}
double Customer::getLoan(){ return loan;}
int Customer::getTerm(){return term;}

ostream& operator<<(ostream& os, const Customer& c){
    os<<"Loan: $"<<setprecision(2)<<fixed<<c.loan<<"; Term: "<<c.term<<" months";
    return os;
}