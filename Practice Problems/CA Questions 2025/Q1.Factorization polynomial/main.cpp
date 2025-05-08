#include <iostream>
#include "main.hpp"

int main()
{
    double a, b, c;
    std::cin >> a >> b >> c;
    QuadraticSolver solver(a, b, c);
    solver.solve();
    return 0;
}