#include <iostream>
#include "../include/colormix.h"

int main()
{
    Color c1 {static_cast<Color>(inputColor("first"))};
    Color c2 {static_cast<Color>(inputColor("second"))};

    Color c3 {c1+c2};

    return 0;
}
