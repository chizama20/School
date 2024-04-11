#include <iostream>

using namespace std;

int main(){

    int size;
    int numbers;
    cin>> size;

    int array[size];

    for(int i = 0; i < size; i++){
        cin>> array[i];
    }

    for(int i = 0; i < size; i++){
        cout<< array[size - i - 1]<<" ";
    }
 
 return 0;

}
