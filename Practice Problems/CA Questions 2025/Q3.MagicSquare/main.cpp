#include "main.hpp"
#include <iostream>

int main()
{
    int n;
    std::cout << "Enter odd size (>=3): ";
    std::cin >> n;

    if (n % 2 == 0 || n < 3)
    {
        std::cout << "Only odd N >= 3 allowed.\n";
        return 1;
    }

    MagicSquare ms(n);
    ms.generate();
    ms.print();

    return 0;
}