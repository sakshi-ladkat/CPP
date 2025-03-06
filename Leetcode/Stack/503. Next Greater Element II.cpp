class Solution
{
public:
    vector<int> nextGreaterElements(vector<int> &nums)
    {
        int sz = nums.size();
        stack<int> stk;
        vector<int> ans(sz, -1);
        for (int i = (2 * sz) - 1; i >= 0; --i)
        {
            int idx = i % sz;
            while (!stk.empty() && stk.top() <= nums[idx])
                stk.pop();
            ans[idx] = stk.empty() ? -1 : stk.top();
            stk.push(nums[idx]);
        }
        return ans;
    }
};
