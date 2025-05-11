class Solution
{
public:
    int lengthOfLIS(vector<int> &nums)
    {
        int n = nums.size();
        if (n == 0)
            return 0;

        vector<int> LIS(n, 1);

        for (int i = 1; i < n; i++)
        {
            for (int j = 0; j < i; j++)
            {
                if (nums[j] < nums[i])
                {
                    LIS[i] = max(LIS[i], LIS[j] + 1);
                }
            }
        }

        return *max_element(LIS.begin(), LIS.end());
    }
};
