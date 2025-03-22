#include <bits/stdc++.h>
#include "Queen.hpp"
#include "Board.hpp"
using namespace std;

Queen ::Queen()
{
    row = col = -1;
}

bool Queen ::isunderattack(int r, int c)
{
    if (r == row || c == col || abs(row - r) == abs(col - c))
        return true;
    else
        return false;
}