#include <iostream>
#include "textutility.h"
using namespace std;

const int N = 100000;
int main()
{
    int size = 1000;
    char input[1000];
    char ans;
    int choice;
    do
    {
        cout << "           Main Menu" << endl;
        cout << "-------------------------------" << endl;
        cout << "1. Word Count" << endl;
        cout << "2. Character Count" << endl;
        cout << "3. Vowel and Consonant Count" << endl;
        cout << "4. String Reversal" << endl;
        cout << "5. Palindrome Check" << endl;
        cout << "6. Case Conversion to Uppercase" << endl;
        cout << "7. Case Conversion to Lowercase" << endl;
        cout << "8. Substring Occurrence Count" << endl;
        cout << "9. Cypher a sentence." << endl;
        cout << "10. Decypher a sentence." << endl;
        cout << "Choose what you want to do with a text: ";
        cin >> choice;
        cin.ignore();

        switch (choice)
        {
        case 1:
            Array_input(input, size);
            cout << "Word count: " << Word_Count(input, size) << endl;
            break;
        case 2:
            Array_input(input, size);
            cout << "Character count: " << Character_Count(input, size) << endl;
            break;
        case 3:
            Array_input(input, size);
            Vowel_and_Consonant_Count(input, size);
            break;
        case 4:
            Array_input(input, size);
            String_Reversal(input, size);
            break;
        case 5:
            char pallindrome[N];
            Array_input(pallindrome, size);
            if (pallindromeCheck(pallindrome, size))
            {
                cout << "This is a pallindrome.\n";
            }
            else
            {
                std::cout << "This is not a pallindrome.\n\n";
            }
            break;

        case 6:
            char LowertoUpper[N];
            Array_input(LowertoUpper, size);
            toUpper(LowertoUpper, size);
            std::cout << "The string from lowercase to uppercase: " << LowertoUpper << '\n';
            break;

        case 7:
            char UppertoLower[N];
            Array_input(UppertoLower, size);
            toLower(UppertoLower, size);
            std::cout << "The string from uppercase to lowercase: " << UppertoLower << '\n';
            break;

        case 8:
            char String[N], SubString[N];
            int sizet;
            Array_input(String, size);
            Array_input(SubString, sizet);
            std::cout << "Count of the occurences of the substring: " << substringOccurenceCount(String, SubString, size, sizet);
            break;
        case 9:
            char Cypher[N], Keyword[N];
            Array_input(Cypher, size);
            Array_input(Keyword, sizet);
            toLower(Cypher, size);
            toLower(Keyword, sizet);
            std::cout << "Cyphered text after using the keyword: ";
            Cypherize(Cypher, size, Keyword, sizet);
            cout << endl;
            break;
        case 10:
            char DeCypher[N], Keyword2[N];
            Array_input(DeCypher, size);
            Array_input(Keyword2, sizet);
            toLower(DeCypher, size);
            toLower(Keyword2, sizet);
            std::cout << "Decyphered text after using the keyword: ";
            Decypherize(DeCypher, size, Keyword2, sizet); 
            cout << endl;
            break;
        default:
            cout << "Please Enter a right input!" << endl;
            continue;
        }

        cout << "Do you want to try again? (y/n)" << endl;
        cin >> ans;
    } while (ans == 'y' || ans == 'Y');
}