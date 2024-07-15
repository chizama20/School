/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

class cashRegister {
private:
    int cashOnHand;
public:
    cashRegister() {
        cashOnHand = 500;
    }
    cashRegister(int cash) {
        cashOnHand = cash;
    }
    int getCurrentBalance() {
        return cashOnHand;
    }
    void acceptAmount(int amount) {
        cashOnHand += amount;
    }
};

class dispenserType {
private:
    int numberOfItems;
    int cost;
public:
    dispenserType() {
        numberOfItems = 50;
        cost = 50;
    }
    dispenserType(int items, int c) {
        numberOfItems = items;
        cost = c;
    }
    int getNoOfItems() {
        return numberOfItems;
    }
    int getCost() {
        return cost;
    }
    void makeSale() {
        if (numberOfItems > 0) {
            numberOfItems--;
            cout << "Item sold." << endl;
        } else {
            cout << "Sorry, the selected item is out of stock." << endl;
        }
    }
};

void showSelection() {
    cout << "Welcome to the Candy Machine!" << endl;
    cout << "1. Candy" << endl;
    cout << "2. Chips" << endl;
    cout << "3. Gum" << endl;
    cout << "4. Cookies" << endl;
}

void sellProduct(dispenserType &dispenser, cashRegister &cashRegisterObj) {
    int selection;
    cout << "Enter the number of the product you want to buy: ";
    cin >> selection;

    int cost;
    switch(selection) {
        case 1:
            cost = dispenser.getCost();
            break;
        case 2:
            cost = dispenser.getCost();
            break;
        case 3:
            cost = dispenser.getCost();
            break;
        case 4:
            cost = dispenser.getCost();
            break;
        default:
            cout << "Invalid selection!" << endl;
            return;
    }

    cout << "The product costs " << cost << " cents" << endl;
    int amount_deposited;
    cout << "Please deposit the money: $";
    cin >> amount_deposited;

    if (amount_deposited >= cost) {
        dispenser.makeSale();
        cashRegisterObj.acceptAmount(cost);
        cout << "Enjoy your purchase!" << endl;
    } else {
        cout << "Insufficient amount deposited. Transaction canceled." << endl;
    }
}

int main() {
    cashRegister cashRegisterObj;
    dispenserType candy_dispenser;
    showSelection();
    sellProduct(candy_dispenser, cashRegisterObj);
    return 0;
}

