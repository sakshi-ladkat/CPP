class Solution {
public:
    int minFlips(int a, int b, int c) {

        return  popcount(ulong ( ( (a | b) ^c) << 16 | (a & b & ~c) ) );

    }
};