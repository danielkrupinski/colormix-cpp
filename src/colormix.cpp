#include "../include/colormix.h"

int inputColor(const std::string&& s)
{
    std::cout << "Select " << s << " color:\n"
                 "1. Red\n"
                 "2. Blue\n"
                 "3. Yellow\n";
    int a;
    std::cin >> a;
    if (a == 3) ++a;
    return a;
}

void clearScreen()
{
    std::cout << std::endl;
    #ifdef _WIN32
        system("cls");
    #elif defined __linux__
        system("clear");
    #endif
}
