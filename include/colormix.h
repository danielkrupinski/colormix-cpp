#ifndef COLORMIX_H
#define COLORMIX_H

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

int inputColor();

#endif // COLORMIX_H
