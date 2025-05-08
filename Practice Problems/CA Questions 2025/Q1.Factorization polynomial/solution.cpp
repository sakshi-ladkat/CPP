#include <iostream>
#include <complex>
#include "main.hpp"

QuadraticSolver::QuadraticSolver(double a, double b, double c)
    : a(a), b(b), c(c) {}

void QuadraticSolver::solve() const
{
    std::complex<double> discriminant = std::pow(b, 2) - 4.0 * a * c;
    std::complex<double> root1 = (-b + std::sqrt(discriminant)) / (2.0 * a);
    std::complex<double> root2 = (-b - std::sqrt(discriminant)) / (2.0 * a);

    std::cout << "Factorized form: ";
    std::cout << "a*(x - (" << root1 << "))(x - (" << root2 << "))\n";
}