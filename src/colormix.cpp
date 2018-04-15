#include "../include/colormix.h"
#include <iostream>

int inputColor(std::string s)
{
    std::cout << "Select " << s << " color:\n"
                 "1. Red\n"
                 "2. Blue\n"
                 "3. Yellow\n";
    int a {0};
    std::cin >> a;
    return a;
}

constexpr Color operator+(Color a, Color b)
{
    return static_cast<Color>(static_cast<int>(a)+static_cast<int>(b));
}
