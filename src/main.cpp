
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

    Color c1 {static_cast<Color>(a)};
    Color c2 {static_cast<Color>(b)};

    Color c3 {c1+c2};

    return 0;
}
