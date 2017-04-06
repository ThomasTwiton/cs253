#include "thomas_exercise3.h"

using namespace std;

int main() {
    cout << "# Exercise 3" << endl;
   
    string filename1 = "matrix1.txt";
    string filename2 = "matrix2.txt";
    string filename3 = "matrix3.txt";

    int rows1, cols1;
    int rows2, cols2;

    ifstream fileIn;
    ofstream fileOut;

    fileIn.open(filename1);
    if (fileIn.fail()) {
        cout << "Whoops: " << filename1 << " couldn't be opened" << endl;
        exit(1);
    }
    fileIn>>rows1>>cols1;
    cout << "This is a " << rows1 << "x" << cols1 << " matrix" << endl;
    int trix1[rows1][cols1];
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            fileIn >> trix1[i][j];
        }
    }
    fileIn.close();

    fileIn.open(filename2);
    if (fileIn.fail()) {
        cout << "Whoops: " << filename2 << " couldn't be opened'" << endl;
        exit(1);
    }
    fileIn>>rows2>>cols2;
    cout << "This is a " << rows2 << "x" << cols2 << " matrix" << endl;
    int trix2[rows2][cols2];
    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < cols2; j++) {
            fileIn >> trix2[i][j];
        }
    }
    fileIn.close();

    if(cols1!=rows2){
        cout<<"Whoops! These matrices can not be multiplied!!!"<<endl;
        exit(1);
    }

    int trix3[rows1][cols2];
    for (int i=0; i<rows1; i++){
        for(int j=0; j<cols2; j++){
            trix3[i][j]=0;
        }
    }
        

    fileOut.open(filename3);
    if (fileOut.fail()) {
        cout << "Whoops: " << filename3 << " couldn't be opened" << endl;
        exit(1);
    }

    for(int i=0; i<rows1; i++){
        for(int j=0; j<cols2; j++){
            for(int k=0; k<rows2; k++){
                trix3[i][j]=trix3[i][j]+(trix1[i][k]*trix2[k][j]);
            }
            fileOut<<trix3[i][j]<<" ";
        }
        fileOut<<endl;
    }

    fileOut.close();
    return 0;
}




