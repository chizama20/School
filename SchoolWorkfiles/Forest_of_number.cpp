/*==========================================================

 Title:       Assignment 4 - Forest of Numbers
 Course:      CIS 2252
 Author:      <First & Last Name>
 Date:        < / / >
 Description: This program ....

 ==========================================================
*/
#include <iostream>
#include <fstream>
#include <string>
#include <limits>
using namespace std;

void sumOfGoldenSteps();
void mysticRiverOfNumbers();
void scrollsOfTransformation();

int main(){
    sumOfGoldenSteps();
    mysticRiverOfNumbers();
    scrollsOfTransformation();
    
    return 0;
}

void sumOfGoldenSteps(){
    int n;
    cout <<"Enter a positive nonzero integer for the sum: " << endl;
    cin >> n;
    
    int sum = 0;
    for(int i = 1; i <= n; ++i){
        sum += i;
    }
    cout <<"The sum of all integers from 1 to " << n << " is: " << sum << endl;
}

void mysticRiverOfNumbers(){
    int count = 0; 
    int max = numeric_limits<int>::min();
    int min = numeric_limits<int>::max();
    int sum = 0;
    int number;
    
    while(true){
    cout <<"Enter positive integers (enter -1 to terminate): " << endl;
    cin >> number;
    if(number == -1){
        break;
    }
    if(number > 0){
        count++;
        if(number > max) max = number;
        if(number < min) min = number;
        sum += number;
      }
    }
    
    if (count > 0){
        double average = static_cast<double>(sum) / count;
        cout << "\nNumber of positive integers: " << count << endl;
        cout << "The maximum value is: " << max << endl;
        cout << "The minimum value is: " << min << endl;
        cout << "The average is: " << average << endl;
    }else{
        cout << "No positive integers were entered." << endl;
    }
}

void scrollsOfTransformation(){
    ifstream infile("lowercase.txt");
    ofstream outfile("uppercase.txt");
    
    if(!infile.is_open()){
        cerr << "Error oprning input file 'lowercase.txt'." << endl;
        return;
    }
    if(!outfile.is_open()){
        cerr << "Error oprning input file 'upppercase.txt'." << endl;
        infile.close();
        return;
    }
    
    string line;
    while(getline(infile, line)){
        for (char &c : line){
            c = toupper(c);
        }
        outfile << line << endl;
        cout << line << endl;
    }
    
    infile.close();
    outfile.close();
    cout << "The transformation is complete. Check the file 'uppercase.txt'." << endl;
}







