class Solution
{
public:
    int findMin(vector<int> &nums)
    {
        int result = nums[0];
        int l = 0, r = nums.size() - 1, m = 0;
        while (l <= r)
        {
            if (nums[l] < nums[r])
            {
                result = min(result, nums[l]);
                break;
            }
            m = (l + r) / 2;
            result = min(result, nums[m]);
            if (nums[m] >= nums[l])
            {
                l = m + 1;
            }
            else
            {
                r = m - 1;
            }
        }

        return result;
    }
};