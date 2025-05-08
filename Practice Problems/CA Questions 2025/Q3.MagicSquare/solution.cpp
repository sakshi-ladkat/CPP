#include "main.hpp"
#include <iostream>
#include <iomanip>
#include <vector>

MagicSquare::MagicSquare(int n) : n(n), square(n, std::vector<int>(n, 0)) {}

void MagicSquare::generate()
{
    int i = 0, j = n / 2;
    for (int num = 1; num <= n * n; ++num)
    {
        square[i][j] = num;
        int newi = (i - 1 + n) % n;
        int newj = (j + 1) % n;
        if (square[newi][newj])
        {
            i = (i + 1) % n;
        }
        else
        {
            i = newi;
            j = newj;
        }
    }
}

void MagicSquare::print() const
{
    for (const auto &row : square)
    {
        for (int num : row)
            std::cout << std::setw(4) << num;
        std::cout << "\n";
    }
}