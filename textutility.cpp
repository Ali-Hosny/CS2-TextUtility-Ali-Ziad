#include <iostream>
#include "textutility.h"

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
int substringOccurenceCount(char arr[],char target[], int size ,int targetSize)
{
    int cnt = 0;
    for (int i = 0; i < size; i++)
    {
        if(arr[i] == target[0])
        {
            bool ok = true;
            for (int j = 0; j < targetSize && i + targetSize < size; j++)
            {
                if(arr[j] != target[j])
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