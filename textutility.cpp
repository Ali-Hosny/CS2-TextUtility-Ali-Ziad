#include <iostream>
#include "textutility.h"
using namespace std;


void Array_input(char a[], int &size){

    cout << "Enter the text: ";
    
    cin.getline(a,1000);

    for(int i=0; i<1000; i++){

        if(a[i] == '\0'){
            size = i;
            break;
        }
    }
}

bool pallindromeCheck(char arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if(arr[i] != arr[size-i-1])
        {
            return false;
        }
    }
    return true;
}
void toUpper(char arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if(arr[i] >= 'a' && arr[i] <= 'z')
        {
            arr[i] -= 32;
        }
    }
}
void toLower(char arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if(arr[i] <= 'Z' && arr[i] >= 'A')
        {
            arr[i] += 32;
        }
    }
}
int substringOccurenceCount(char arr[], char target[], int size ,int targetSize)
{
    int cnt = 0;
    for (int i = 0; i < size; i++)
    {
        if(arr[i] == target[0])
        {
            bool ok = true;
            for (int j = 0; j < targetSize && i + targetSize < size; j++)
            {
                if(arr[i+j] != target[j])
                {
                    ok = false;
                    break;
                }   
            }
            if(ok) cnt++;
        }
    }
    return cnt;
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
        if(a[i] == 'a' || a[i] == 'A' || a[i] == 'e' || a[i] == 'E' || a[i] == 'i' || a[i] == 'I' || a[i] == 'o' || a[i] == 'O' || a[i] == 'u' || a[i] == 'U'){

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

    cout << "Reversed String: ";
    for(int i=0; i<size; i++){

        cout << a[i];
    }
    cout << endl;

}

void Cypherize(char input[],int sizeInput,char key[],int sizeKey)
{
    char fullKey [sizeInput];
    int j = 0;
    for (int i = 0; i < sizeInput; i++)
    {
        fullKey[i] = key[j++];
        if(j == sizeKey)
        {
            j = 0;
        }
    }    
    for (int i = 0; i < sizeInput; i++)
    {
        if(input[i] != ' ')
            input[i] = ((input[i]-'a') + (fullKey[i]-'a'))%26 + 'a';    
        cout << input[i];
    }
    
}
void Decypherize(char input[],int sizeInput,char key[],int sizeKey)
{
    
    char fullKey [sizeInput];
    int j = 0;
    for (int i = 0; i < sizeInput; i++)
    {
        fullKey[i] = key[j++];
        if(j == sizeKey)
        {
            j = 0;
        }
    }    
    for (int i = 0; i < sizeInput; i++)
    {
        if(input[i] != ' ')
            input[i] = ((input[i]- 'a') - (fullKey[i] - 'a') + 26)%26 + 'a';    
        cout << input[i];
    }
}

