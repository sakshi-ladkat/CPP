
#include <bits/stdc++.h>
#ifndef QUEEN_HPP
#define QUEEN_HPP
using namespace std;

class Queen
{
public:
    int row;
    int col;

public:
    // construdctor
    Queen();

    bool isunderattack(int, int);
};
#endif