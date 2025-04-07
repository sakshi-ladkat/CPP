class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {

        int n = nums.size();
        vector<int> result(n);
        vector<int> prefix(n);
        vector<int> postfix(n);

        for (int i = 0; i < n; i++)
        {
            if (i == 0)
            {
                prefix[i] = 1;
            }
            else
            {
                prefix[i] = nums[i - 1] * prefix[i - 1];
            }
        }

        for (int i = n - 1; i >= 0; i--)
        {
            if (i == n - 1)
            {
                postfix[i] = 1;
            }
            else
            {
                postfix[i] = nums[i + 1] * postfix[i + 1];
            }
        }

        for (int i = 0; i < n; i++)
        {
            result[i] = prefix[i] * postfix[i];
        }

        return result;
    }
};
