#include "DynamicArray.h"

void DynamicArrayDouble()
{
    int countElements = 10;
    double* arr = new double[countElements];
    for (int i = 0; i < countElements; i++)
    {
        arr[i] = (double)(rand() / 10) / 100;
    }
    PrintArray<double>(arr, countElements);
    delete[] arr;
}

void DynamicArrayBool()
{
    int countElements = 10;
    bool* arr = new bool[countElements]
    {true, false, false, true, false,
        true, true, true, false, false};
    for (int i = 0; i < countElements; i++)
    {
        if (arr[i])
        {
            cout << "true\t";
        }
        else
        {
            cout << "false\t";
        }
    }
    cout << endl;
    delete[] arr;
}

void DynamicArrayChar()
{
    int countElements;
    do
    {
        cout << "Enter the positive number: ";
        countElements = Read<int>();
    } while (countElements <= 0);

    cout << endl;
    char* arr = new char[countElements];
    for (int i = 0; i < countElements; i++)
    {
        cout << "arr[" << i << "]: ";
        cin >> arr[i];
        cout << endl;
    }

    cout << "Your array is:\n";
    PrintArray<char>(arr, countElements);
    delete[] arr;
}

void DynamicArrayDoubleWithSorting()
{
    int countElements = 10;
    double* arr = new double[countElements];
    for (int i = 0; i < countElements; i++)
    {
        arr[i] = (double)(rand() / 10) / 100;
    }
    PrintArray<double>(arr, countElements);
    cout << endl;
    SelectionSort<double>(arr, countElements);
    cout << "Sorted array of double:\n";
    PrintArray<double>(arr, countElements);
    delete[] arr;
}

void DynamicArrayInt()
{
    int countElements = 10;
    int* arr = new int[countElements];
    cout << "Int array:\n";
    for (int i = 0; i < countElements; i++)
    {
        arr[i] = rand() % 100;
    }
    PrintArray<int>(arr, countElements);
    cout << endl;
    int index;
    int number = Read<int>();
    if (SearchIndex(arr, number, index, countElements))
    {
        cout << "Index of searching value " << number << " is: " << index << endl;
    }
    else
    {
        cout << "None\n";
    }
    delete[] arr;
}

void DynamicArrayCharWithSearchLetter()
{
    int countElements = 15;
    char* arr = new char[countElements];
    int jump = 34;
    int countSymbol = 94;
    for (int i = 0; i < countElements; i++)
    {
        arr[i] = rand() % countSymbol + jump;
    }
    cout << "Your array is:\n";
    PrintArray<char>(arr, countElements);
    SearchLetter(arr, countElements);
    delete[] arr;
}

void ThreeArrays()
{
    int* arr5 = MakeRandomArray(5);
    int* arr8 = MakeRandomArray(8);
    int* arr13 = MakeRandomArray(13);
    cout << "Random array of 5:\n";
    PrintArray(arr5, 5);
    cout << "Random array of 8:\n";
    PrintArray(arr8, 8);
    cout << "Random array of 13:\n";
    PrintArray(arr13, 13);
    delete[] arr5;
    delete[] arr8;
    delete[] arr13;
}