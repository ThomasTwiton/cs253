#include "exercise4_thomastwiton.h"

int main() {
    cout << "# Exercise 4" << endl;
    srand(time(0));
    cout << "\n# Structures" << endl;
    cout<<endl;

    Book *myBook = new Book;
    (*myBook).title="Nested Lullaby";
    (*myBook).author="T.J. Twiton";
    (*myBook).price=12.95;
    cout<<(*myBook).title <<" is written by "<<(*myBook).author<<" and costs "<<(*myBook).price<<endl;
    
    cout<<endl;

    Room *partyRoom = new Room;
    (*partyRoom).building="Fun House";
    (*partyRoom).number=1;
    cout<<"Room number "<<(*partyRoom).number<<" in the "<<(*partyRoom).building<<endl<<endl;

    Employee *recentgrad = new Employee;
    (*recentgrad).firstName="Thomas";
    (*recentgrad).lastName="Twiton";
    (*recentgrad).salary=0.01;
    (*recentgrad).isFullTime=false;
    cout<<(*recentgrad).firstName<<" "<<(*recentgrad).lastName<<" is an employee making a "<<(*recentgrad).salary<<" salary."<<endl;
    cout<<"Is this employee full time?"<<endl;
    if((*recentgrad).isFullTime){
        cout<<"Yes!"<<endl<<endl;
    } else{
        cout<<"Nah"<<endl<<endl;
    }

    Student1 *coolkid= new Student1;
    int n=rand() % 1000000;
    (*coolkid).debt=n;
    if((coolkid->debt)>20000){
        (*coolkid).isHungry=true;
        cout<<"This student has a debt of "<<(*coolkid).debt<<" and is hungry!"<<endl<<endl;
    } else {
        (*coolkid).isHungry=false;
        cout<<"This student has a debt of "<<(*coolkid).debt<<" and is not hungry"<<endl<<endl;
    }

    Game *boardgame=new Game;
    (*boardgame).title="Pandemic";
    (*boardgame).rating=7;
    cout<<(*boardgame).title<<" has a rating of "<<(*boardgame).rating<<endl;
    (*boardgame).rating=10;
    cout<<(*boardgame).title<<" has a rating of "<<(*boardgame).rating<<endl<<endl;

    Song *song1=new Song;
    (*song1).title="Break Down";
    (*song1).artist="Jack Johnson";
    Song *song2=new Song;
    (*song2).title="Stronger than You";
    (*song2).artist="Estelle";
    Song *song3=new Song;
    (*song3).title="Fidelity";
    (*song3).artist="Regina Spektor";
    vector<Song> playlist;
    playlist.push_back(*song1);
    playlist.push_back(*song2);
    playlist.push_back(*song3);
    for(int i=0; i<playlist.size(); i++){
        cout<<playlist[i].title<<" by "<<playlist[i].artist<<endl;
    }
    cout<<endl;

    Company *mcDonalds=new Company;
    (*mcDonalds).djIndex=2;
    cout<<"Index is "<<(*mcDonalds).djIndex<<endl;
    (*mcDonalds).setIndex(*mcDonalds, 5);
    cout<<"Index is "<<(*mcDonalds).getIndex()<<endl<<endl;

    University *learnplace=new University;
    (*learnplace).name="Luther College";
    (*learnplace).rating=75;
    cout<<(*learnplace).name<<"'s rating is "<<(*learnplace).rating<<endl;
    (*learnplace).setRating(*learnplace, 100);
    cout<<"New rating is "<<(*learnplace).getRating()<<endl<<endl;

    Laptop *purplefriend=new Laptop;
    (*purplefriend).initLaptop(*purplefriend, "Forge of Magic", 0.01, "PURPLE!");
    cout<<"This laptop is made by "<<(*purplefriend).manufacturer<<" and sold for the price of "<<(*purplefriend).price<<" in the color of "<<(*purplefriend).color<<endl<<endl;

    vector<Student2> roster;

    ifstream fileIn;
    fileIn.open("roster.txt");
    string line;

    if (fileIn.fail()) {
        cout << "Whoops: File couldn't be opened" << endl;
        exit(1);
    }
    while(getline(fileIn, line)){
        Student2 *nextStudent = new Student2;
        fileIn>>(*nextStudent).name>>(*nextStudent).major>>(*nextStudent).gpa;
        roster.push_back(*nextStudent);
    }
    fileIn.close();
    roster.pop_back(); //get rid of a junk line
    for(int i=0; i<roster.size(); i++){
        cout<<roster[i].name<<" is a "<<roster[i].major<<" major with a GPA of "<<roster[i].gpa<<endl;
    }

    return 0;
}
