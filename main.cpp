#include <iostream>
#include "textutility.h"
using namespace std;

const int N = 100000;
int main()
{
    char input[1000];
    int size;

    

    Array_input(input, size);

    String_Reversal(input, size);

    Array_input(input, size); 
    cout << "Word count: " << Word_Count(input, size) << endl;

    Array_input(input, size); 
    cout << "Character count: " << Character_Count(input, size) << endl;

    Array_input(input, size); 
    Vowel_and_Consonant_Count(input, size);

    Array_input(input, size); 
    String_Reversal(input, size);

    char pallindrome[N];
    Array_input(pallindrome, size);
    if (pallindromeCheck(pallindrome, size))
    {
        std::cout << "This is a pallindrome.\n";
    }
    else
    {
        std::cout << "This is not a pallindrome.\n\n";
    }

    char LowertoUpper[N];
    Array_input(LowertoUpper, size);

    toUpper(LowertoUpper, size);
    std::cout << "The string from lowercase to uppercase: " << LowertoUpper << '\n';

    char UppertoLower[N];
    Array_input(UppertoLower, size);
    toLower(UppertoLower, size);
    std::cout << "The string from uppercase to lowercase: " << UppertoLower << '\n';

    char String[N], SubString[N];
    int sizet;
    Array_input(String, size);
    Array_input(SubString, sizet);
    std::cout << "Count of the occurences of the substring: " << substringOccurenceCount(String, SubString, size, sizet);
}