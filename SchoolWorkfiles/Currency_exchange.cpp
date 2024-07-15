/*==========================================================

 Title:     Assignment 13 (Final) - C++ Currency Translation Machine
 Course:  	CSC 1100
 Author:  	<First & Last Name>
 Date:    	< / / >
 Description: This program ....

 ==========================================================
*/
// Define necessary directives
#include <iostream>
#include <fstream>
#include<iomanip>

using namespace std;

// create your classes here
class ctm{
protected:
    string currency_name;
    double conversion_factor;
    
public:
    void intro(){
        int num;
        while(true){
            cin >> num;
            if(num < 1 || num > 3){
                cout << "Invalid";
            }else{
                if(num == 1){
                    currency_name = "Yuan";
                    conversion_factor = 6.77;
                }else if(num == 2){
                    currency_name = "Euro";
                    conversion_factor = 0.98;
                }else{
                    currency_name = "Pounds";
                    conversion_factor = 0.83;
                }            
                break;
            }
        }
    }
};

class amount: public ctm{
protected:
    double exchange_amount;
    double conversion_amount;
    double conversion_fee;
    double total_amount_due;
    
public:
    void calculations(){
        cin >> exchange_amount;
        
        conversion_amount = exchange_amount / conversion_factor;
        conversion_fee = conversion_amount * 0.05;
        total_amount_due = conversion_amount + conversion_fee;
    }
};

class rc: public amount{
public:
    void rctype(){
        ofstream file("receipt.txt");
        if(file.is_open()){
            file << fixed << setprecision(2);
            file << exchange_amount << " " << currency_name << endl;
            file << conversion_amount << " dollars" << endl;
            file << conversion_fee << " dollars" << endl;
            file << total_amount_due << " dollars" << endl;
            file.close();
            
            ifstream inFile("receipt.txt");
            if(inFile.is_open()){
                string line;
                while(getline(inFile, line)){
                    cout << line << endl;
                }
                inFile.close();
            }
        }else{
            cout << "File error";
        }
    }
};
int main()
{
    //No need to modify main as everything should be handled in the classes
    rc obj; 
    obj.ctm::intro();
    obj.amount::calculations();
    obj.rctype();
    
    return 0;
}

