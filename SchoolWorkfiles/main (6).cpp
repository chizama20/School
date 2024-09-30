/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

void printResult(bool A, bool B, bool C, bool result) {
    cout << A << " " << B << " " << C << "  ->  " << result << endl;
}

int main() {
    bool A, B, C;

    cout << "(A and b) or (a and C)" << endl;
    cout << "A B C  -> Result" << endl;
    for (int i = 0; i < 8; ++i) {
        A = i & 4;
        B = i & 2;
        C = i & 1;
        bool result = (A && B) || (A && C);
        printResult(A, B, C, result);
    }
    cout << endl;

    cout << "(A and c) and (B and !C)" << endl;
    cout << "A B C  -> Result" << endl;
    for (int i = 0; i < 8; ++i) {
        A = i & 4;
        B = i & 2;
        C = i & 1;
        bool result = (A && C) && (B && !C);
        printResult(A, B, C, result);
    }
    cout << endl;

    cout << "(a or B) and !(B or c)" << endl;
    cout << "A B C  -> Result" << endl;
    for (int i = 0; i < 8; ++i) {
        A = i & 4;
        B = i & 2;
        C = i & 1;
        bool result = (A || B) && !(B || C);
        printResult(A, B, C, result);
    }
    cout << endl;

    cout << "(a or (B and C)) and (!A and !B)" << endl;
    cout << "A B C  -> Result" << endl;
    for (int i = 0; i < 8; ++i) {
        A = i & 4;
        B = i & 2;
        C = i & 1;
        bool result = (A || (B && C)) && (!A && !B);
        printResult(A, B, C, result);
    }
    cout << endl;

    cout << "((B and C) or (C and A)) and (!(A or B) and C)" << endl;
    cout << "A B C  -> Result" << endl;
    for (int i = 0; i < 8; ++i) {
        A = i & 4;
        B = i & 2;
        C = i & 1;
        bool result = ((B && C) || (C && A)) && (!(A || B) && C);
        printResult(A, B, C, result);
    }

    return 0;
}

