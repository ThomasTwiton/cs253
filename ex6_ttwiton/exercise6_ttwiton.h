#pragma once

#include <iostream>
#include <iomanip>
#include <fstream>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <vector>
#include <cmath>

using namespace std;

//1. Create a class Book with the following private data members: string title, string author, double price.
class Book {
    private:
        string title;
        string author;
        double price;
    public:
        Book(string, string, double);
        friend ostream& operator<<(ostream&, const Book&);
};

Book::Book(string t, string a, double p){
    title=t;
    author=a;
    price=p;
}

ostream& operator<<(ostream& os, const Book& b){
    os << b.title << " by " << b.author << " costs $" << fixed << setprecision(2) << b.price;
    return os;
}

//2. Create a class Room with the following private data members: string building, int number.
class Room{
    private:
        string building;
        int number;
    public:
        Room(string, int);
        friend ostream& operator<<(ostream&, const Room&);
};

Room::Room(string b, int n){
    building=b;
    number=n;
}

ostream& operator<<(ostream& os, const Room& r){
    os << r.building << " " <<r.number;
    return os;
}
//3. Create a class Employee with the following private data members: string firstName, string lastName, double salary, bool isFullTime. The output (as defined in the << operator) of an object of this class depends on the value of the isFullTime member.
class Employee{
    private:
        string firstName;
        string lastName;
        double salary;
        bool isFullTime;
    public:
        Employee(string, string, double, bool);
        friend ostream& operator<<(ostream&, const Employee&);
};
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
//4. Create a class Customer with the following private data members: double loan, int term. Define public functions double getLoan() and int getTerm() that return values of the loan amount and term respectively.
class Customer{
    private:
        double loan;
        int term;
    public:
        Customer(double, int);
        friend ostream& operator<<(ostream&, const Customer&);
        double getLoan();
        int getTerm();
};
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
//5. Create a class Game with the following private data members: string title, int rating. Define the public class member methods string getTitle() and int getRating() that return values of the title and the rating respectively.
class Game{
    private:
        string title;
        int rating;
    public:
        Game(string, int);
        friend ostream& operator<<(ostream&, const Game&);
        string getTitle();
        int getRating();
};
Game::Game(string t, int r){
    title=t;
    rating=r;
}
string Game::getTitle(){return title;}
int Game::getRating(){return rating;}

ostream& operator<<(ostream& os, const Game& g){
    os<<"The rating of "<<g.title<<" is "<<g.rating;
    return os;
}
//6. Create a class Song with the following private data members: string title, string artist. Define the public class member functions getTitle() and getArtist() that return values of the title and the artist respectively.
class Song{
    private:
        string title;
        string artist;
    public:
        Song(string, string);
        friend ostream& operator<<(ostream&, const Song&);
        string getTitle();
        string getArtist();
};
Song::Song(string t, string a){
    title=t;
    artist=a;
}
string Song::getTitle(){return title;}
string Song::getArtist(){return artist;}

ostream& operator<<(ostream& os, const Song& s){
    os<<s.title<< " by "<<s.artist;
    return os;
}
//7. Create a class Company with the following private data members: string name, int stockPrice. Define the public member function getStockPrice() that returns the current value of the stockPrice and a public member function void setStockPrice(double) that assigns a new value to stockPrice.
class Company{
    private:
        string name;
        double stockPrice;
    public:
        Company(string, double);
        friend ostream& operator<<(ostream&, const Company&);
        double getStockPrice();
        void setStockPrice(double);
};
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
//8. Create a class College with the following private data members: string name, int rank. Define the member function setRank() that assigns a new value to the rank. The provided function changeCollegeRank must work properly.
class College{
    private:
        string name;
        int rank;
    public:
        College(string, int);
        friend ostream& operator<<(ostream&, const College&);
        void setRank(int);
};
College::College(string n, int r){
    name=n;
    rank=r;
}
void College::setRank(int r){rank=r;}
ostream& operator<<(ostream& os, const College& c){
    os<<c.name<<" is ranked #"<<c.rank;
    return os;
}
//9. Create a class Laptop with the following private data members: string manufacturer, double price, string color. Create accessors (getters) and mutators (setters) for all data members.
class Laptop{
    private:
        string manufacturer;
        double price;
        string color;
    public:
        Laptop(string, double, string);
        friend ostream& operator<<(ostream&, const Laptop);
        string getManufacturer();
        void setManufacturer(string);
        double getPrice();
        void setPrice(double);
        string getColor();
        void setColor(string);
};
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
ostream& operator<<(ostream& os, const Laptop l){
    os<<l.color<<" laptop by "<<l.manufacturer<<" costs $"<<setprecision(2)<<fixed<<l.price;
    return os;
}

//10. Create a class Student with the following private data members: string name, string major, double gpa. Create a class Roster that contains a private member vector<Student> studentList. Its constructor must take the name of a file as a parameter, read data from the file (sample roster.txt is provided, another file of a similar structure may be used for grading), and store every line as an object of type Student in the vector studentList. Define public function getStudentList() that returns studentList. Roster's overloaded operator << must print every student in the studentList.
class Student{
    private:
        string name;
        string major;
        double gpa;
    public:
        Student(string, string, double);
        friend ostream& operator<<(ostream&, const Student&);
};
Student::Student(string n, string m, double g){
    name=n;
    major=m;
    gpa=g;
}
ostream& operator<<(ostream& os, const Student& s){
    os<<s.name<<" ("<<s.gpa<<") majors in "<<s.major;
    return os;
}

class Roster{
    private:
        vector<Student> studentList;
    public:
        Roster(string);
        friend ostream& operator<<(ostream&, const Roster&);
        vector<Student> getStudentList();
};

Roster::Roster(string filename){
    ifstream fileIn;
    fileIn.open(filename.c_str());
    if (fileIn.fail()) {
        cout << "Whoops: File couldn't be opened" << endl;
        exit(1);
    }
    while(!fileIn.eof()){
        string name;
        string major;
        double gpa;
        getline(fileIn, name, ',');
        getline(fileIn, major, ',');
        fileIn>>gpa;
        fileIn.ignore(__INT_MAX__,'\n');
        Student s = Student(name, major, gpa);
        studentList.push_back(s);
    }
    fileIn.close();
}
vector<Student> Roster::getStudentList(){return studentList;}

ostream& operator<<(ostream& os, const Roster& r){
    for(int i=0; i<r.studentList.size(); i++){
        cout<<r.studentList.at(i)<<endl;
    }
}