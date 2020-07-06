#include "Functions.h"

using  namespace std;

double GetPower(double base, int exponent)
{
    //return pow(base, exponent);
    double result = 1;
    for (int i = 0; i < exponent; i++)
    {
        result *= base;
    }
    return result;
}

void DemoGetPower()
{
    int count = 5;
    for (int i = 0; i < count; i++)
    {
        cout << "Enter the number: ";
        double number = Read<double>();
        cout << "\nEnter the exponent: ";
        int exponent = Read<int>();
        double result = GetPower(number, exponent);
        cout << endl << number << " ^ " << exponent << " = " << result << endl;
    }
}

void RoundToTens(int& value)
{
    int check = value % 10;
    if (check < 5)
    {
        value = value / 10 * 10;
    }
    else
    {
        value = (value / 10 + 1) * 10;
    }
}