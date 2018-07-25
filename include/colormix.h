#ifndef COLORMIX_H
#define COLORMIX_H

#include <iostream>

void clearScreen() noexcept;

enum class Color : char {
    red = 1,
    blue = 2,
    purple = 3,
    yellow = 4,
    orange = 5,
    green = 6
};

Color inputColor(const std::string&&);

constexpr Color operator+(Color a, Color b)
{
    return a == b ? a : static_cast<Color>(static_cast<int>(a)+static_cast<int>(b));
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

#endif // COLORMIX_H
