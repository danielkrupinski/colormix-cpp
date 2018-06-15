#include <colormix.h>

int main()
{
    Color color1{static_cast<Color>(inputColor("first"))};
    clearScreen();
    Color color2{static_cast<Color>(inputColor("second"))};
    clearScreen();

    std::cout << "You mix " << color1 << " and " << color2 << " and get " << color1 + color2 << std::endl;

    return 0;
}
