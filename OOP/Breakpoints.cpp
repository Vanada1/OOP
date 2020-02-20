#include "Breakpoints.h"

void Breakpoints1()
{
    double  add = 1.0;
    double sum = 0.0;
    for (int i = 0; i < 10; i++)
    {
        sum += add * i;
        add *= 1.1;
    }
    cout << "Total sum is " << sum << endl;
}

void Breakpoints2()
{
    double add = 1.0;
    double sum = 0.0;
    for (int i = 0; i < 1000; i++)
    {

        sum += add * i; // Поставьте условную точку останова здесь
        if (i % 3 == 0)
        {
            add *= 1.1;
        }
        else
        {
            add /= 3.0;
        }
    }
    cout << "Total sum is " << sum << endl;
}