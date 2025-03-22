#ifndef BOARD_HPP
#define BOARD_HPP
#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include "Queen.hpp"
using namespace std;

class Board
{
private:
    static const int SIZE = 8;
    char board[SIZE][SIZE];
    Queen Q[SIZE];

public:
    // constructor
    Board();
    int getSize();
    bool solve();
    bool solveRecursively(int);
    bool issafe(int, int);
    void display();
};
#endif