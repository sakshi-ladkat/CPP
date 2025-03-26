class Solution
{
public:
    bool isSymmetric(int n)
    {
        string s = to_string(n);
        int len = s.size();

        if (len % 2 != 0)
            return false;

        int sum1 = 0, sum2 = 0;
        for (int i = 0; i < len / 2; i++)
        {
            sum1 += s[i] - '0'; // Sum of first half
        }
        for (int i = len / 2; i < len; i++)
        {
            sum2 += s[i] - '0'; // sum of second half
        }

        return sum1 == sum2;
    }

    int countSymmetricIntegers(int low, int high)
    {
        int count = 0;
        for (int i = low; i <= high; i++)
        {
            if (isSymmetric(i))
                count++;
        }
        return count;
    }
};