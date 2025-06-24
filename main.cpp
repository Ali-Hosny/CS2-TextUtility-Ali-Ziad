#include <iostream>
#include "textutility.h"

const int N = 100000;
int main()
{
    char pallindrome[N];
    int size = 0;
    std::cout << "Enter the size of string: \n";
    std::cin >> size;
    std::cin.getline(pallindrome,N);
    std::cout << "You entered the Cstring: " << pallindrome << '\n';
    if(pallindromeCheck(pallindrome,size))
    {
        std::cout << "This is a pallindrome.\n";
    }
   else
    {
        std::cout << "This is not a pallindrome.\n";
    }
    
    return 0;
}