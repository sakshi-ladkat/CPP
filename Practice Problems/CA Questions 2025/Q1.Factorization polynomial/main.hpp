#ifndef MAIN_HPP
#define MAIN_HPP

class QuadraticSolver
{
    double a, b, c;

public:
    QuadraticSolver(double a, double b, double c);
    void solve() const;
};

#endif