#include <iostream>
#include <ctime>
#include "Output.h"
#include "Read.h"
#include "DynamicArray.h"
#include "Breakpoints.h"
#include "StaticArray.h"
#include "Functions.h"
#define BREAKPOINT
#define STATICARRAY
#define FUNCTIONS
#define DYNAMICARRAY

int main()
{
    srand(time(nullptr));

#ifdef BREAKPOINT
    Breakpoints1();
    Breakpoints2();
#endif 

#ifdef STATICARRAY
    Array();
    ArrayDouble();
    ArrayChar();
#endif

#ifdef FUNCTIONS
    DemoGetPower();
#endif
   
#ifdef DYNAMICARRAY
    DynamicArrayDouble();
    DynamicArrayBool();
    DynamicArrayChar();
    DynamicArrayDoubleWithSort();
    DynamicArrayInt();
    DynamicArrayCharWithSearchLetter();
#endif

}