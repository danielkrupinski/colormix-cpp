#include <colormix.h>

Color inputColor(const std::string&& s)
{
    std::cout << "Select " << s << " color:\n"
                 "1. Red\n"
                 "2. Blue\n"
                 "3. Yellow\n";
    int color;
    std::cin >> color;
    if (color == 3) {
        ++color; // Index 3 of enum class Color is occupated by purple so we use index 4 for yellow
    }
    return static_cast<Color>(color);
}

void clearScreen() noexcept
{
    std::cout << std::endl;
    #ifdef _WIN32
        system("cls");
    #elif defined __linux__
        system("clear");
    #endif
}
