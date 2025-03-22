#include <bits/stdc++.h>
using namespace std;
#include "Board.hpp"

int main()
{
    Board B1;
    if (B1.solve())
        B1.display();
    else
        cout << "Not Solvable for SIZE equal to " << B1.getSize() << endl;
    return 0;
}
