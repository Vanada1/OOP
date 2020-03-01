#pragma once
#include  <iostream>

using namespace std;

template < typename T >
T Read()
{
    bool error;
    T number;
    do
    {
        error = false;
        cin >> number;
        if (cin.fail())
        {
            cout << "Wrong\n";
            error = true;
            cin.clear();
            cin.ignore(80, '\n');
        }
    } while (error);
    return number;
}