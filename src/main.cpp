#include <iostream>
#include "../include/colormix.h"

int main()
{
    std::cout << "Select first color:\n"
                 "1. Red\n"
                 "2. Blue\n"
                 "3. Yellow\n";
    int a {0};
    std::cin >> a;

    std::cout << "Select second color:\n"
                 "1. Red\n"
                 "2. Blue\n"
                 "3. Yellow\n";
    int b {0};
    std::cin >> a;
    return 0;
}
