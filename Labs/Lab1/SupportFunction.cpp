#include "SupportFunction.h"

bool SearchIndex(int* arr, int number, int& index, int countElements)
{
    for (int i = 0; i < countElements; i++)
    {
        if (arr[i] == number)
        {
            index = i;
            return true;
        }
    }
    return false;
}

void SearchLetter(char* arr, int countElement)
{
    cout << "\nAll letters in your array:\n";
    for (int i = 0; i < countElement; i++)
    {
        char letterStart = 'a';
        char letterEnd = 'z';
        if (arr[i] >= letterStart && arr[i] <= letterEnd)
        {
            cout << arr[i] << '\t';
        }
    }
    cout << endl;
}

int* MakeRandomArray(int arraySize)
{
    int* newArray = new int[arraySize];
    for (int i = 0; i < arraySize; i++)
    {
        newArray[i] = rand() % 100;
    }
    return newArray;
}