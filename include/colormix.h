#ifndef COLORMIX_H
#define COLORMIX_H

#include <string>

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

int inputColor(std::string);

#endif // COLORMIX_H
