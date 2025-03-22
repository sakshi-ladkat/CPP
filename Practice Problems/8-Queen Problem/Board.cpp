#include <bits/stdc++.h>
#include "Board.hpp"
using namespace std;

Board::Board()
{
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            board[i][j] = '.';
        }
    }
}

int Board::getSize()
{
    return SIZE;
}

bool Board ::issafe(int r, int c)
{
    for (int k = 0; k < c; k++)
    {
        if (Q[k].isunderattack(r, c))
            return false;
    }
    return true;
}

bool Board::solveRecursively(int col)
{
    // Base case: All queens are placed successfully
    if (col == SIZE)
        return true;

    // Try placing the queen in each row of the current column
    for (int i = 0; i < SIZE; i++)
    {
        if (issafe(i, col))
        {
            // Place the queen at (i, col)
            Q[col].row = i;
            Q[col].col = col;
            if (solveRecursively(col + 1))
                return true;

            Q[col].row = -1;
            Q[col].col = -1;
        }
    }

    return false;
}

bool Board::solve()
{
    if (solveRecursively(0) == false)
    {
        return false;
    }
    else
    {
        for (int i = 0; i < SIZE; i++)
        {
            board[Q[i].row][Q[i].col] = 'Q';
        }
        return true;
    }
}

void Board ::display()
{
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            cout << board[i][j] << "";
        }
        cout << endl;
    }
    cout << endl;
}