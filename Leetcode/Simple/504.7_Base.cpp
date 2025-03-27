class Solution
{
public:
    string convertToBase7(int num)
    {
        if (num == 0)
            return "0";

        bool isNegative = (num < 0);
        num = abs(num);

        vector<int> digits;
        while (num > 0)
        {
            digits.push_back(num % 7);
            num /= 7;
        }

        string result = "";
        for (int i = digits.size() - 1; i >= 0; i--)
        {
            result += to_string(digits[i]);
        }

        if (isNegative)
            result = "-" + result;
        return result;
    }
};