class Solution
{
public:
    bool subsetSumToK(int n, int k, vector<int> &arr)
    {
        vector<bool> prev(k + 1, 0), cur(k + 1, 0);
        prev[0] = cur[0] = true;
        if (arr[0] <= k)
            prev[arr[0]] = true;
        for (int ind = 1; ind < n; ind++)
        {
            for (int target = 1; target <= k; target++)
            {
                bool notTake = prev[target];
                bool take = false;
                if (arr[ind] <= target)
                    take = prev[target - arr[ind]];
                cur[target] = take | notTake;
            }
            prev = cur;
        }
        return prev[k];
    }

    bool canPartition(vector<int> &nums)
    {

        int sum = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++)
            sum += nums[i];
        if (sum % 2)
            return false;
        int target = sum / 2;
        return subsetSumToK(n, target, nums);
    }
};