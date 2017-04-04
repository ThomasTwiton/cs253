#include "exercise2.h"

using namespace std;

int main() {
    cout << "Class:" << "\t\t" << "CS253" << endl;
    cout << "Assignment:" << "\t" << "Exercise 2" << endl;
    cout << "Name:" << "\t\t" << "Thomas Twiton" << endl;
    srand(time(0));
    cout << "\n# Arrays and vectors" << endl;
    const int size = 10;
	int my_arr[size];
    vector<int> my_vec(size);
	for (int i = 0; i < size; i++) {
        int n = rand() % 100;
		my_arr[i] = my_vec[i] = n;\
        cout<<my_arr[i]<<" ";
	}
    int my_trix[10][10];
    cout << endl<<endl;
    task1(5);
    task2(my_arr, size, 75);
    task3(my_arr, size);
    task4(my_arr, size);
    task5(my_arr, size);
    task6();
    vector<int> for8=task7(size);
    task8(for8);
    task9(my_trix, 10, 10);
    task10(my_trix, 10, 10);
    cout << "Done" << endl;

    return 0;
}

void nHeads(int n) {
    int numheads=0;
    int result=0;
    while (numheads<n){
        result=rand()%2;
        if (result==0) {
            cout<<"Heads"<<endl;
            numheads++;
        } else {
            cout<<"Tails"<<endl;
            numheads=0;
        }
    }
}

void task1(int n) {    
    cout << "# Task1" << endl;
    nHeads(n);
    cout<<endl;
}

bool task2(int arr[], int size, int target) {
    cout << "# Task2" << endl;
    bool challengerwins=true;
    cout<<"The challenger is "<< target <<endl;
    for (int i=0; i<size; i++) {
        if (target<arr[i]){
            challengerwins=false;
        }
    }
    if (challengerwins==true) {
        cout<<"The target number is bigger than every element of the array" <<endl<<endl;
    } else {
        cout<<"There was an element bigger than the target number within the array"<<endl<<endl;
    }
    return challengerwins;
}

int task3(int arr[], int size) {
    cout << "# Task3" << endl;
    for (int i=0; i<size; i++) {
        if (arr[i]<75) {
            cout<<arr[i]<< " ";
        }
    }
    cout<<endl<<endl;
    return 0;
}

void task4(int arr[], int size) {
    cout << "Task4" << endl;
    int max=0;
    for (int i=0; i<size; i++){
        if (arr[i]>max) {
            max=arr[i];
        }
    }
    int diff=100-max;
    for (int i=0; i<size; i++){
        arr[i]=arr[i]+diff;
        cout<<arr[i]<<" ";
    }
    cout<<endl<<endl;
}

void task5(int arr[], int size) {
    cout << "Task5" << endl;
    int astudents=0;
    int bstudents=0;
    int cstudents=0;
    int dstudents=0;
    int fstudents=0;
    for(int i=0;i<size;i++){
        if (arr[i]>=90){
            astudents++;
        } else if (arr[i]>=80) {
            bstudents++;
        } else if (arr[i]>=70) {
            cstudents++;
        } else if (arr[i]>=60) {
            dstudents++;
        } else {
            fstudents++;
        }
    }
    cout<<astudents<<" got As"<<endl;
    cout<<bstudents<<" got Bs"<<endl;
    cout<<cstudents<<" got Cs"<<endl;
    cout<<dstudents<<" got Ds"<<endl;
    cout<<fstudents<<" got Fs"<<endl<<endl;
}

void task6() {
    cout << "Task6" << endl;
    vector<double> usernumbers;
    double unum=1;
    while (unum!=0) {
        cout<<"Enter a number (enter 0 to exit)"<<endl;
        cin>>unum;
        usernumbers.push_back(unum);
    }
    for(int i=0;i<usernumbers.size();i++){
        cout<<usernumbers[i]<<" ";
    }
    cout<<endl<<endl;
}

vector<int> task7(int size) {
    cout << "Task7" << endl;
    vector<int> a(size);
    for(int i=0; i<size; i++){
        int n = rand() % 50 + 50;
        a[i]=n;
        cout<<a[i]<<" ";
    }
    cout<<endl<<endl;
    return a;
}

int task8(vector<int> vec) {
    cout << "Task8" << endl;
    for (int i=0; i<vec.size(); i++) {
        if (vec[i]<75) {
            cout<<vec[i]<< " ";
        }
    }
    cout<<endl<<endl;
    return 0;

}

void task9(int matrix[10][10], int rows, int cols) {
    cout << "Task9" << endl;
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            matrix[i][j]=(i+1)*(j+1);
            cout<< matrix[i][j] << "\t";
        }
        cout<<endl;
    }
    cout<<endl;
}

void task10(int matrix[10][10], int rows, int cols) {
    cout << "Task10" << endl;
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            matrix[i][j]=(i+1)*(j+1);
        }
    }
    int rowsum=0;
    int columnsum=0;
    //sum rows
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            rowsum=rowsum+matrix[i][j];
        }
        cout<<"The sum of the " << i+1 << " row is " << rowsum << endl;
        rowsum=0;
    }
   cout<<endl;
    //sum columns
     for(int j=0; j<cols; j++){
        for(int i=0; i<rows; i++){
            columnsum=columnsum+matrix[i][j];
        }
        cout<<"The sum of the " << j+1 << " column is " << columnsum << endl;
        columnsum=0;
    }
    cout<<endl;
}
