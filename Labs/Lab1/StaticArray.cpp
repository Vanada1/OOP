#include "StaticArray.h"

void Array()
{
    const int COUNTELEMENTS = 10;
    int arr[COUNTELEMENTS];
    for (int i = 0; i < COUNTELEMENTS; i++)
    {
        arr[i] = rand() % 100 - 50;
    }
    PrintArray<int>(arr, COUNTELEMENTS);
    cout << endl;
    SelectionSort<int>(arr, COUNTELEMENTS);
    cout << "Sorted array of double:\n";
    PrintArray<int>(arr, COUNTELEMENTS);
}

void ArrayDouble()
{
    const int COUNTELEMENTS = 12;
    double arr[COUNTELEMENTS];
    for (int i = 0; i < COUNTELEMENTS; i++)
    {
        arr[i] = (double)rand() / 100;
    }
    PrintArray<double>(arr, COUNTELEMENTS);
    cout << endl;
    cout << "Enter searching value: ";
    double number = Read<double>();
    int count = 0;
    for (int i = 0; i < COUNTELEMENTS; i++)
    {
        if (arr[i] >= number)
        {
            count++;
        }
    }
    cout << "\nElements of array more than " << number << " is: " << count;
}

void ArrayChar()
{
    const int COUNTELEMENTS = 3;
    char arr[COUNTELEMENTS];
    for (int i = 0; i < COUNTELEMENTS; i++)
    {
        cout << "arr[" << i << "]: ";
        cin >> arr[i];
        cout << endl;
    }
    cout << "Your array is:\n";
    PrintArray<char>(arr, COUNTELEMENTS);
    SearchLetter(arr, COUNTELEMENTS);
}