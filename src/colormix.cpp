#include "../include/colormix.h"

int Color::getColor()
{
    std::cout << "Select first color:\n"
                 "1. Red\n"
                 "2. Blue\n"
                 "3. Yellow\n";
    int a {0};
    std::cin >> a;
    return a;
}
