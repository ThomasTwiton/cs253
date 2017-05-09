#include "exercise12.hpp"
#include "Fraction.hpp"

void exercise12(){
    //access file
    ifstream fileIn;
    string filename="expressions.txt";
    fileIn.open(filename.c_str());
    if (fileIn.fail()) {
        cout << "ERROR: Could not open the file" << endl;
        exit(1);
    }

    //declarations for loop
    string sn1, sn2, sd1, sd2;
    int n1, n2, d1, d2;
    string operation;
    vector<Fraction> fracvec;
    vector<double> doubvec;
    
    //read the file, fill the vectors
    while(!fileIn.eof()){
        getline(fileIn, sn1, '/');
        n1=stoi(sn1, nullptr);
        getline(fileIn, sd1, ' ');
        d1=stoi(sd1, nullptr);
        getline(fileIn, operation,' ');
        getline(fileIn, sn2, '/');
        n2=stoi(sn2, nullptr);
        getline(fileIn, sd2);
        d2=stoi(sd2, nullptr);

        Fraction f1=Fraction(n1, d1);
        Fraction f2=Fraction(n2, d2);
                
        Fraction f3=Fraction(0,1);               
        if (operation == "+"){
            f3=f1+f2;
        } else if (operation == "-"){
            f3=f1-f2;
        } else if (operation == "*"){
            f3=f1*f2;
        } else {
           f3=f1/f2;
        }
        
        cout<<f1<<" "<<operation<<" "<<f2<<" = "<<f3<<endl;
        fracvec.push_back(f3);
        doubvec.push_back(double(f3.getNumerator())/double(f3.getDenominator()));
    }

        cout<<"---"<<endl; //section break

        //print the vectors
        cout<<"Vector of fractions"<<endl;
        for(uint i=0; i<fracvec.size(); i++){
            cout<<fracvec[i]<<" ";
        }
        cout<<endl;
        cout<<"Vector of doubles"<<endl;
        for(uint i=0; i<fracvec.size(); i++){
            cout<<doubvec[i]<<" ";
        }
        cout<<endl;

        //sort the vectors
        sort(fracvec.begin(),fracvec.end());
        sort(doubvec.begin(), doubvec.end());

        //reprint the vectors
        cout<<"Sorted vector of fractions"<<endl;
        for(uint i=0; i<fracvec.size(); i++){
            cout<<fracvec[i]<<" ";
        }
        cout<<endl;
        cout<<"Sorted vector of doubles"<<endl;
        for(uint i=0; i<fracvec.size(); i++){
            cout<<doubvec[i]<<" ";
        }
        cout<<endl;

        cout<<"---"<<endl; //section break

        //declare fractions to be compared
        Fraction f4=Fraction(1,3);
        Fraction f5=Fraction(1,4);
        Fraction f6=Fraction(1,2);

        //statement will only print if the comparison worked right
        if(f4<f6){
            cout<<f4<<" is less than "<<f6<<endl;
        }
        if(f4>f5){
            cout<<f4<<" is greater than "<<f5<<endl;
        }
        if(f4==f4){
            cout<<f4<<" is equal to "<<f4<<endl;
        }
        if(f4!=f5){
            cout<<f4<<" is not equal to "<<f5<<endl;
        }
}

int main(){
    bool madeit=false;
    while(!madeit){
        try{
            exercise12();
            madeit=true;
        } catch(DivisionByZero eqe) {
            cout << eqe.getMsg() << endl;
            break;
        }
    }  
    return 0;
}
