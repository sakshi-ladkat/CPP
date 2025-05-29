class Solution
{
public:
    int findKthLargest(vector<int> &nums, int k)
    {
        int n = nums.size();
        priority_queue<int, vector<int>, greater<int>> mH;
        for (int i = 0; i < n; i++)
        {
            mH.push(nums[i]);
            if (mH.size() > k)
            {
                mH.pop();
            }
        }
        return mH.top();
    }
};