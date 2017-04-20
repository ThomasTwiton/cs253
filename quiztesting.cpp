#include <iostream>
#include <iomanip>
#include <fstream>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <vector>
#include <cmath>

using namespace std;

using namespace std;
class Date {
    private:
        int day;
        int month;
        int year;
    public:
        Date();
        Date(int, int, int);
        inline int getDay() { return day; }
        inline void setDay(int d) { day = d; }
        inline int getMonth() { return month; }
        inline void setMonth(int m) { month = m; }
        inline int getYear() { return year; }
        inline void setYear(int y) { year = y; }
        friend ostream& operator<<(ostream&, const Date&);
};
Date::Date() {
    day = 20;
    month = 4;
    year = 2017;
}
Date::Date(int day_, int month_, int year_) {
    day = day_;
    month = month_;
    year = year_;
}
ostream& operator<<(ostream& os, const Date& d) {
    os << d.month << "/" << d.day << "/" << d.year;
    return os;
}
class Person {
    private:
        string name;
        Date *dob;
    public:
        Person();
        Person(string, Date*);
        inline string getName() { return name; }
        inline void setName(string n) { name = n; }
        inline Date* getDOB() { return dob; }
        inline void setDOB(Date* d) { dob = d; }
        friend ostream& operator<<(ostream&, const Person&);
};
Person::Person() {
    name = "John Doe";
    dob = new Date();
}
Person::Person(string name_, Date *date_) {
    name = name_;
    dob = date_;
}
ostream& operator<<(ostream& os, const Person& p) {
    os << p.name << " was born on " << *(p.dob);
    return os;
}

int main(){
    /*
    int* ptrInt= new int;
    *ptrInt=10;
    cout<<sizeof(ptrInt)<<endl;
    cout<<sizeof(*ptrInt)<<endl;
    cout<<ptrInt<<endl;
    cout<<*ptrInt<<endl;
    ptrInt++;
    cout<<sizeof(ptrInt)<<endl;
    cout<<sizeof(*ptrInt)<<endl;
    cout<<ptrInt<<endl;
    cout<<*ptrInt<<endl;
   
    int a=10;
    int *p =&a;
    cout<<*p<<endl;
    ++*p;
    cout<< a << endl;
    cout<< *p << endl;   

    cout<<"$"<<setfill('.')<<setw(5)<<5.20<<endl;

    ofstream ofs;
    ofs.open("test.txt");
    ofs<<"Test 1"<<endl;
    ofs.open("test.txt");
    ofs<<"Test 2"<<endl;
    ofs.close();

    int n, sum=0, count=0;
    ifstream ifs;
    ifs.open("test.txt");
    while(ifs>>n){if (count++ % 2){sum=sum+n;}}
    cout<<sum<<endl;
    */

    Person *p8=new Person("Alice", new Date(1,2,2016));
    cout<<p8;

}