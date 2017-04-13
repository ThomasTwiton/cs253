#include "exercise5_ttwiton.h"

using namespace std;

void printNChars(char c, int n) {
	for (int i = 0; i < n; i++){
		cout << c;
	}
    cout << endl;
}

void printNChars(ofstream &fout, char c, int n) {
	for (int i = 0; i < n; i++){
		fout << c;
	}
    fout << endl;
}

void readStates(ifstream &fileIn, vector<State> &states) {
    //Read the states from a file to a vector
    string code;
    double rate;
    string name;
    while (!fileIn.eof()){
        getline(fileIn, code, '|');
        fileIn >> rate;
        fileIn.ignore(__INT_MAX__,'|');
        getline(fileIn, name);
        State s = {code, rate, name};
        states.push_back(s);
    }

}

void readInventory(ifstream &fileIn, vector<Game> &inventory) {
    //TODO: Read the inventory from the file into a vector
}

void displayInventory(vector<Game> inventory) {
    //TODO: Display inventory
}

double displayCart(vector<GameInCart> cart, double salesTax, ofstream &fout) {
    //TODO: Display the cart and calculate total amount owned
    double total = 0;

    return total;
}

int readANumber(int lower_bound=0, int upper_bound=100) {
    //TODO: Read the number with boundaries
    int result = lower_bound-1;
    while(result<lower_bound || result>upper_bound){        
        cout<<"Enter a number between "<<lower_bound<<" and "<<upper_bound<<endl;
        cin>>result;        
        cin.clear();
        cin.ignore(__INT_MAX__, '\n');
    }
    return result;
}

void readState(vector<State> &states, double &salesTax) {
    //TODO: Read the state code
}

int main() {
    /* Exercise 5: Online game store */
    ifstream inventoryFileContent("inventory.txt");
    if (inventoryFileContent.fail()) {
        cout << "ERROR: Could not open the inventory file" << endl;
        exit(1);
    }
    ifstream statesFileContent("salesTaxRates.txt");
    if (statesFileContent.fail()) {
        cout << "ERROR: Could not open the tax rate file" << endl;
        exit(1);
    }
    ofstream cartFileContent("cart.txt");
    if (cartFileContent.fail()) {
        cout << "ERROR: Could not open the cart file" << endl;
        exit(1);
    }
    cout << "Reading state information" << endl;

    vector<State> states;
    readStates(statesFileContent, states);
    cout << "Read " << states.size() << " state(s) from the file" << endl;

    vector<Game> games;
    readInventory(inventoryFileContent, games);
    cout << "Read " << games.size() << " games(s) from the file" << endl;

    vector<GameInCart> cart;
    char ans = 'y';
    do {
        displayInventory(games);
        int choice = readANumber(1, games.size());
        cout << "How many copies of the " << games.at(choice-1).title << " do you want to buy?" << endl;
        int qty = readANumber(0, 50);
        if (qty > 0) {
            GameInCart gic = {games[choice-1], qty};
            cart.push_back(gic);
        }
        cout << "Would you like to buy another game (y/n)?" << endl;
        cin.get(ans);
        cin.clear(); //get rid of everything in the input line that we haven't read in yet
        cin.ignore(__INT_MAX__, '\n'); //until you get to the new line symbol
    } while (ans == 'y');
    double salesTax = 0;
    readState(states, salesTax);
    displayCart(cart, salesTax, cartFileContent);

    inventoryFileContent.close();
    statesFileContent.close();
    cartFileContent.close();

    return 0;
}
