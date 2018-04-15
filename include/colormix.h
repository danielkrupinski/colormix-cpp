#ifndef COLORMIX_H
#define COLORMIX_H

#include <iostream>

enum class Color {
    red = 1,
    blue = 2,
    purple = 3,
    yellow = 4,
    orange = 5,
    green = 6
};

constexpr Color operator+(Color a, Color b)
{
    return static_cast<Color>(static_cast<int>(a)+static_cast<int>(b));
}

inline std::ostream& operator<<(std::ostream& os, Color color)
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

int inputColor(std::string);

#endif // COLORMIX_H
