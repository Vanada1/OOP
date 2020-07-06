#pragma once
#include<iostream>

using  namespace std;

template < typename T >
void SelectionSort(T* arr, int countElements)
{
    for (int i = 0; i < countElements; i++)
    {
        int min = i;
        for (int j = i + 1; j < countElements; j++)
        {
            if (arr[min] > arr[j])
            {
                min = j;
            }
        }
        swap(arr[i], arr[min]);
    }
}
bool SearchIndex(int* arr, int number, int& index, int countElements);
void SearchLetter(char* arr, int countElement);
int* MakeRandomArray(int arraySize);