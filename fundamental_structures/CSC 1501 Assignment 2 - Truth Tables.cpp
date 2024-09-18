#include <iostream>

using namespace std;

int main(){
    bool a, b, c;

    cout << " A B C | (1) (2) (3) (4) (5)" << endl;
    cout << "-----------------------------" << endl;


    for(int i = 0; i < 8; i ++){
        a = i & 4;
        b = i & 2;
        c = i & 1;

        bool statement1 = (a && b) || (a && c);
        bool statement2 = (a && c) && (b && !c);
        bool statement3 = (a || b) && !(b || c);
        bool statement4 = (a || (b && c)) && (!a && !b);
        bool statement5 = ((b && c) || (c && a)) && (!(a || b) && c);

        cout << a << " " << b << " " << c << " " << "|" << statement1 << " "
                                                        << statement2 << " "
                                                        << statement3 << " "
                                                        << statement4 << " "
                                                        << statement5 << " " << endl;


    }



    return 0;
}