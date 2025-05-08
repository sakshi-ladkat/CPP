#ifndef MAIN_HPP
#define MAIN_HPP

#include <vector>

class MagicSquare
{
    std::vector<std::vector<int>> square;
    int n;

public:
    MagicSquare(int n);
    void generate();
    void print() const;
};

#endif