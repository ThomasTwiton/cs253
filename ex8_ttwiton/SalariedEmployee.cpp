#include "SalariedEmployee.h"

SalariedEmployee::SalariedEmployee() : Employee(), salary(0) { }

SalariedEmployee::SalariedEmployee(string the_name, string the_ssn, double the_weekly_salary)
    : Employee(the_name, the_ssn), salary(the_weekly_salary) { }

void SalariedEmployee::set_salary(double new_salary){salary=new_salary;}

double SalariedEmployee::get_salary() const{return salary;}

void SalariedEmployee::print_check(){
    set_net_pay(salary);
    cout<<setfill('_')<<setw(40)<<'_'<<endl;
    cout<<"Pay to the order of "<<name<<endl;
    cout<<"The sum of "<<net_pay<<endl;
    cout<<setfill('_')<<setw(40)<<'_'<<endl;
    cout<<"Check Stub: NOT NEGOTIABLE"<<endl;
    cout<<"Employee Number: "<<ssn<<endl;
    cout<<"Salaried Employee. Regular pay: "<<salary<<endl;
    cout<<setfill('_')<<setw(40)<<'_'<<endl;
}
