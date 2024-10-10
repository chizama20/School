#include <iostream>

using namespace std;

bool XOR(bool a, bool b) {
    return (a || b) && !(a && b);
}

bool IMPLIES(bool a, bool b) {
    return !a || b;
}

bool NAND(bool a, bool b) {
    return !(a && b);
}

bool NOR(bool a, bool b) {
    return !(a || b);
}

bool XNOR(bool a, bool b) {
    return a == b;
}

void printResult(bool A, bool B, bool C, bool result) {
    cout << A << " " << B << " " << C << "  ->  " << result << endl;
}

int main() {
    bool A, B, C;

    cout << "(A nor C) xor B" << endl;
    cout << "A B C  -> Result" << endl;
    for (int i = 0; i < 8; ++i) {
        A = i & 4;
        B = i & 2;
        C = i & 1;
        bool result = XOR(NOR(A, C), B);
        printResult(A, B, C, result);
    }
    cout << endl;

    cout << "(B implies C) nand (A nor B)" << endl;
    cout << "A B C  -> Result" << endl;
    for (int i = 0; i < 8; ++i) {
        A = i & 4;
        B = i & 2;
        C = i & 1;
        bool result = NAND(IMPLIES(B, C), NOR(A, B));
        printResult(A, B, C, result);
    }
    cout << endl;

    cout << "(A xor B) implies (B xnor C)" << endl;
    cout << "A B C  -> Result" << endl;
    for (int i = 0; i < 8; ++i) {
        A = i & 4;
        B = i & 2;
        C = i & 1;
        bool result = IMPLIES(XOR(A, B), XNOR(B, C));
        printResult(A, B, C, result);
    }
    cout << endl;

    cout << "(A implies B) implies !C" << endl;
    cout << "A B C  -> Result" << endl;
    for (int i = 0; i < 8; ++i) {
        A = i & 4;
        B = i & 2;
        C = i & 1;
        bool result = IMPLIES(IMPLIES(A, B), !C);
        printResult(A, B, C, result);
    }
    cout << endl;

    return 0;
}
