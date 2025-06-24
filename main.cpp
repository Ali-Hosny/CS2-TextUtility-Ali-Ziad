#include <iostream>
#include "textutility.h"

const int N = 100000;
int main()
{
    char pallindrome[N];
    std::cout << "Enter the string: ";
    std::cin.getline(pallindrome, N);
    std::cout << "You entered the Cstring: " << pallindrome << '\n';
    if (pallindromeCheck(pallindrome, size))
    {
        std::cout << "This is a pallindrome.\n";
    }
    else
    {
        std::cout << "This is not a pallindrome.\n\n";
    }

    char LowertoUpper[N];
    std::cout << "Enter the string: ";

    std::cin.getline(LowertoUpper, N);
    std::cout << "You entered the Cstring: " << LowertoUpper << '\n';

    toUpper(LowertoUpper, size);
    std::cout << "The string from lowercase to uppercase: " << LowertoUpper << '\n';

    char UppertoLower[N];
    std::cout << "Enter the string: ";
    std::cin.getline(UppertoLower, N);
    std::cout << "You entered the Cstring: " << UppertoLower << '\n';

    toLower(UppertoLower, size);
    std::cout << "The string from uppercase to lowercase: " << UppertoLower << '\n';

    char String[N], SubString[N];
    std::cout << "Enter the string: ";
    std::cin.getline(String, N);
    std::cout << "Enter the target substring: ";
    std::cin.getline(SubString, N);
    int sizet;
    std::cout << "Count of the occurences of the substring: " << substringOccurenceCount(String,SubString,size,sizet);
    return 0;
}