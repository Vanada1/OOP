#pragma once
#include  <iostream>

using namespace std;

template < typename T >
void PrintArray(T* arr, int countElements)
{
    for (int i = 0; i < countElements; i++)
    {
        cout << arr[i] << '\t';
    }
    cout << endl;
}