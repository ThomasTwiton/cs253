#include "main.h"

int main() {
    task1();
    task2();
    task3();
    //task4
    task5();
    task6();
    /*
srand(NULL);
cout << rand() << endl;
rand() % 100 number between 0 and 99
int array[10];
array[i] = i +5;
    */
}

void task1(){
    cout<<"(Task 1)\n";
    cout<<"Hello World!\n";
    cout<<endl;
}

void task2(){
    cout<<"(Task 2)\n";
    for (int i=1; i<101; i++) {
        if (i % 3 == 0 and i % 5 == 0){
            cout<< "huh ";
        } else if (i % 3 == 0){
            cout << "foo ";
        } else if (i % 5 == 0) {
            cout << "bar ";
        } else {
            cout << i << " ";
        }
        if (i % 25 == 0){
            cout<<endl;
        }                
    }
    cout<<endl;
}

void task3(){
    cout<<"(Task 3)\n";
    int sum = 0;
    for (int i=1; i<101; i++) {
        if (i%7==0){
            sum+=i;
        }
    }
    cout<<"Sum of numbers between 1 and 100 that are divisible by 7 = "<<sum<<endl;
    cout<<endl;
}


void task5(){
    cout<<"(Task 5)\n";
    cout<<"Enter your full name (First Last): " << endl;
    string fname, lname;
    cin >> fname >> lname;
    //getline(cin, name);
    cout << "Your initials are " << fname[0] << lname[0] << endl;
    cout << endl;
}

void task6(){

}
