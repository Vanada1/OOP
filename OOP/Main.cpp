#include <iostream>
#include <ctime>
#include "Read.h"
#include "DynamicArray.h"
#include "Breakpoints.h"
#include "StaticArray.h"
#include "Functions.h"
#include "WorkWithFiles.h"

#define BREAKPOINT
#define STATICARRAY
#define FUNCTIONS
#define DYNAMICARRAY

int main()
{
    srand(time(nullptr));
    bool isEnd = false;
    while (!isEnd)
    {
        system("cls");
        TextOutput("menu.txt");
        switch (Read<int>())
        {
             case 1:
             {
                 Breakpoints1();
                 break;
             }
             case 2:
             {
                 Breakpoints2();
                 break;
             }
             case 3:
             {
                 Array();           
                 break;
             }
             case 4:
             {
                 ArrayDouble();                 
                 break;
             }
             case 5:
             {
                 ArrayChar();
                 break;
             }
             case 6:
             {
                 DemoGetPower();
                 break;
             }
             case 7:
             {
                 cout << "Enter the number ";
                 int value = Read<int>();
                 cout << endl;
                 RoundToTens(value);
                 break;
             }
             case 8:
             {
                 DynamicArrayDouble();
                 break;
             }
             case 9:
             {
                 DynamicArrayBool();
                 break;
             }
             case 10:
             {
                 DynamicArrayChar();
                 break;
             }
             case 11:
             {
                 DynamicArrayDoubleWithSorting();
                 break;
             }
             case 12:
             {
                 DynamicArrayInt();
                 break;
             }
             case 13:
             {
                 DynamicArrayCharWithSearchLetter();
                 break;
             }
             case 14:
             {
                 ThreeArrays();
                 break;
             }
             case 15:
             {
                 isEnd = true;
                 break;
             }
             default:
             {
                 break;
             }
        }
        system("pause");
    }
}