#pragma once
#include  <iostream>

template < typename T >
T Read()
{
    bool error;
    T number;
    do
    {
        error = false;
        std::cin >> number;
        if (std::cin.fail())
        {
            std::cout << "Wrong\n";
            error = true;
            std::cin.clear();
            std::cin.ignore(80, '\n');
        }
    } while (error);
    return number;
}