#include "main.h"

int main() {
    task1();
    task2();
    task3();
    task4();
    task5();
    task6();
    task7();
    task8();
    task9();
    task10();
   
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

void task4(){
    cout<<"(Task4)\n";
    int sum=0;
    long product=1;

    for (int i=1; i<21; i++) {
        sum+=i;
        product*=i;
    }
    cout<<"The sum of integers 1 through 20 = " <<sum<<endl;
    cout<<"The product of integers 1 through 20 = " <<product<<endl;
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
    cout<<"(Task 6)\n";
    int array[10];
    for (int i=1; i<10; i++){
        array[i]=i*i*i;
        cout<<array[i]<<" ";
    }
    cout<<endl<<endl;
}

void task7(){
    cout<<"(Task 7)\n";
    srand(time(NULL));
    int array[100];
    for (int i=0; i<100; i++){
        array[i]=rand()%100;
    }
    int guess;
    cout<<"Enter a number: \n";
    cin >> guess;
    bool in=false;
    for (int i=0; i<100; i++){
        if (array[i]==guess){
            in=true;
        }
    }
    if (in) {
        cout<<"Your guess was in the array!\n";
    } else {
        cout<<"Your guess was not in the array :c\n";
    }
    cout<<endl;
}

void task8(){
    srand(time(NULL));
    int array[10];
    for (int i=0; i<10; i++){
        array[i]=rand()%100;
    }
    int answer=sumArray(array, 10); //helper function in header because
    cout<<answer<<endl<<endl;
}




void task9(){
    cout<<"(Task 9)\n";
    cout<<"Enter a single word please (all lower case, if you please):\n";
    string word;
    bool order=true;
    int prev=0; //holds the ASCII value of the previous letter
    cin>>word;
    for (int i=0; i<word.length();i++){
        if (char(word[i])<prev) {
            order=false;
        }
        prev=char(word[i]);
    }
    if (order) {
        cout<<"Your word's letters are in order\n";
    } else {
        cout<<"Your silly word's letters are out of order\n";
    }
    cout<<endl;

}

void task10(){
    cout<<"(Task 10)\n";
    //initialize a list of 100 numbers, consider them all prime (true)
    bool array[100];    
    for (int i=0; i<100; i++){
        array[i]=true;
    }

    array[0]=false; //1 isn't prime

    //find those that are not prime
    for (int i=0; i<100; i++){
        if (array[i]){
            for (int j=i+1; j<100; j++){
                int divisible=(j+1)%(i+1);
                if(divisible==0){
                    array[j]=false;
                }
            }
        }
    }

    //print the primes
    for (int i=0; i<100; i++){
        if (array[i]){
            cout<<(i+1)<<" ";
        }
    }
   
    cout<<endl;
}
