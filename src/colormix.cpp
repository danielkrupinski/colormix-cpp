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

std::ostream& operator<<(std::ostream& os, Color color)
{
    switch (color) {
    case Color::red:
        os << "Red";
        break;
    case Color::blue:
        os << "Blue";
        break;
    case Color::purple:
        os << "Purple";
        break;
    case Color::yellow:
        os << "Yellow";
        break;
    case Color::orange:
        os << "Orange";
        break;
    case Color::green:
        os << "Green";
        break;
    }
    return os;
}
