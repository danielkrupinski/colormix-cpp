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
        os << "red";
        break;
    case Color::blue:
        os << "blue";
        break;
    case Color::purple:
        os << "purple";
        break;
    case Color::yellow:
        os << "yellow";
        break;
    case Color::orange:
        os << "orange";
        break;
    case Color::green:
        os << "green";
        break;
    }
    return os;
}

int inputColor(std::string);
void clearScreen();

#endif // COLORMIX_H
