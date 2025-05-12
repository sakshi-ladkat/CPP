class Solution
{
public:
    int countDigits(int num)
    {

        int ans = 0;
        int y = num;
        while (y != 0)
        {
            int x = y % 10;
            y = y / 10;
            if (x != 0 && num % x == 0)
                ans++;
        }

        return ans;
    }
};