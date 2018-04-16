#include "../include/colormix.h"

int main()
{
    Color c1 {static_cast<Color>(inputColor("first"))};
    clearScreen();
    Color c2 {static_cast<Color>(inputColor("second"))};
    clearScreen();
    
    if (c1==c2)
        std::cout << "You mix " << c1 << " and " << c2 << " and get " << c1 << std::endl;
    else
        std::cout << "You mix " << c1 << " and " << c2 << " and get " << c1+c2 << std::endl;

    return 0;
}
