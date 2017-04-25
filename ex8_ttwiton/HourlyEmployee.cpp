#include "HourlyEmployee.h"

HourlyEmployee::HourlyEmployee() : Employee(), wage_rate(0), hours(0) { }

HourlyEmployee::HourlyEmployee(string the_name, string the_ssn, double the_wage_rate, double the_hours)
    : Employee(the_name, the_ssn), wage_rate(the_wage_rate), hours(the_hours) { }
 
void HourlyEmployee::set_hours(double h) {hours =h;}
void HourlyEmployee::set_rate(double r) {wage_rate=r;}

double HourlyEmployee::get_hours() const{return hours;}
double HourlyEmployee::get_rate() const {return wage_rate;}

 void HourlyEmployee::print_check() {
    set_net_pay(hours * wage_rate);
    cout<<setfill('_')<<setw(40)<<'_'<<endl;
    cout<<"Pay to the order of "<<name<<endl;
    cout<<"The sum of "<<net_pay<<endl;
    cout<<setfill('_')<<setw(40)<<'_'<<endl;
    cout<<"Check Stub: NOT NEGOTIABLE"<<endl;
    cout<<"Employee Number: "<<ssn<<endl;
    cout<<"Hourly Employee"<<endl;
    cout<<"Hours worked: "<<hours<<" Rate: "<<wage_rate<<" Pay: "<<net_pay<<endl;
    cout<<setfill('_')<<setw(40)<<'_'<<endl;
}