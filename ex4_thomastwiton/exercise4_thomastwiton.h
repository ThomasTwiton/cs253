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

struct Book{
    string title;
    string author;
    double price;
};

struct Room{
    string building;
    int number;
};

struct Employee{
    string firstName;
    string lastName;
    double salary;
    bool isFullTime;
};

struct Student1{
    double debt;
    bool isHungry;
};

struct Game{
    string title;
    int rating;
};

struct Song{
    string title;
    string artist;
};

struct Company{
    int djIndex;

    int getIndex(){
        return djIndex;
    }

    void setIndex(Company &c, int newIndex){
        djIndex=newIndex;
    }
};

struct University{
    string name;
    int rating;

    int getRating(){
        return rating;
    }

    void setRating(University &u, int newRating){
        rating=newRating;
    }
};

struct Laptop{
    string manufacturer;
    double price;
    string color;

    void initLaptop(Laptop &item, string _manufacturer, double _price, string _color){
        item.manufacturer=_manufacturer;
        item.price=_price;
        item.color=_color;
    }
};

struct Student2{
    string name;
    string major;
    double gpa;
};
