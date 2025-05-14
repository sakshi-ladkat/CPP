class Solution
{
public:
    double findMaxAverage(vector<int> &nums, int k)
    {

        int n = nums.size();
        double window = 0;
        for (int i = 0; i < k; i++)
        {
            window += nums[i];
        }
        double maxAvg = window;
        for (int i = k; i < n; i++)
        {
            window += nums[i] - nums[i - k];
            maxAvg = max(maxAvg, window);
        }
        return maxAvg / k;
    }
};