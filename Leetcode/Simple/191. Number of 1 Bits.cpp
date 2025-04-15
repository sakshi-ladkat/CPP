class Solution
{
public:
    int hammingWeight(int n)
    {
        int result = 0;
        while (n)
        {
            result += n % 2;
            n = n >> 1;
        }
        return result;
    }
};