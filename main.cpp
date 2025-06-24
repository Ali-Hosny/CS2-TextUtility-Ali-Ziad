#include <iostream>
#include "textutility.h"

using namespace std;

int main(){

    char input[1000];
    int size; 

    Array_input(input, size);

    String_Reversal(input, size);

    cout << "Reversed string: ";

    for(int i=0; i<size; i++){

        cout << input[i];
    }

    return 0;
}