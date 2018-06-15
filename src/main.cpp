#include <colormix.h>

int main()
{
    Color color1{(inputColor("first")};
    clearScreen();
    Color color2{(inputColor("second")};
    clearScreen();

    std::cout << "You mix " << color1 << " and " << color2 << " and get " << color1 + color2 << std::endl;

    return 0;
}
