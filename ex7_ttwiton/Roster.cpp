#include "Roster.h"

Roster::Roster(const char* filename){
    ifstream fileIn;
    fileIn.open(filename);
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