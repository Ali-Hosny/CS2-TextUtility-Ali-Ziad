#include "textutility.h"
#include <iostream>

using namespace std;


void Array_input(char a[], int &size){

    cout << "Enter the Text" << endl;
    cin.getline(a,1000);

    for(int i=0; i<10000; i++){

        if(a[i] == '\0'){
            size = i;
            break;
        }
    }

}

int Word_Count(char a[], int size){

    int count=0;
    bool inWord = false;

    for(int i = 0; i < size; i++){
        if (a[i] != ' ' && a[i] != '\0' && !inWord){
            inWord = true;
            count++;
        } else if (a[i] == ' '){
            inWord = false;
        }
    }

    return count;
}

int Character_Count(char a[], int size){

    int count=0;

    for(int i=0; i<size; i++){

        if(a[i] != ' ' && a[i] != '\0'){
            
            count++;
        }
    }
    return count;
}

void Vowel_and_Consonant_Count(char a[], int size){

    int vowelCount=0;
    int consonantCount=0;

    for(int i=0; i<size; i++) { 
        if(a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u'){

            vowelCount++;
        }
        else if((a[i] >= 'a' && a[i] <= 'z') || (a[i] >= 'A' && a[i] <= 'Z')) consonantCount++;
    }

    cout << "Vowel Count: " << vowelCount << endl;
    cout << "Consonant Count: " << consonantCount << endl;
}


void String_Reversal(char a[], int size){

    char temp;

    for(int i=0; i<size/2; i++) {

        temp=a[i];
        a[i]=a[size-i-1];
        a[size-i-1]=temp;
    }
}