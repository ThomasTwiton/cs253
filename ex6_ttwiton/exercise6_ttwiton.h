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
//4. Create a class Customer with the following private data members: double loan, int term. Define public functions double getLoan() and int getTerm() that return values of the loan amount and term respectively.
//5. Create a class Game with the following private data members: string title, int rating. Define the public class member methods string getTitle() and int getRating() that return values of the title and the rating respectively.
//6. Create a class Song with the following private data members: string title, string artist. Define the public class member functions getTitle() and getArtist() that return values of the title and the artist respectively.
//7. Create a class Company with the following private data members: string name, int stockPrice. Define the public member function getStockPrice() that returns the current value of the stockPrice and a public member function void setStockPrice(double) that assigns a new value to stockPrice.
//8. Create a class College with the following private data members: string name, int rank. Define the member function setRank() that assigns a new value to the rank. The provided function changeCollegeRank must work properly.
//9. Create a class Laptop with the following private data members: string manufacturer, double price, string color. Create accessors (getters) and mutators (setters) for all data members.
//10. Create a class Student with the following private data members: string name, string major, double gpa. Create a class Roster that contains a private member vector<Student> studentList. Its constructor must take the name of a file as a parameter, read data from the file (sample roster.txt is provided, another file of a similar structure may be used for grading), and store every line as an object of type Student in the vector studentList. Define public function getStudentList() that returns studentList. Roster's overloaded operator << must print every student in the studentList.