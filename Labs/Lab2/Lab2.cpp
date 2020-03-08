#include <iostream>
#include "Sort.h"
#include "DemoStruct.h"
#include "Rectangle.h"
#include "Color.h"

int main()
{
   // DemoSort();
   // DemoRectangle(); 
   // DemoReadAndWriteRectangles(); 
   // DemoDynamicFlights();
   // DemoFlight();

    //2.2.8.8
    const int COUNT = 6;
    Color colorArray[COUNT] =
    { RED, BLUE, DARKBLUE, GREEN, PURPLE,RED };
    cout << CountColor(colorArray, COUNT, RED) << endl;
}