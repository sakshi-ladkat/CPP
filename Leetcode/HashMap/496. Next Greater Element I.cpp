class Solution
{
public:
    vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
    {

        unordered_map<int, int> umap;
        stack<int> stk;
        int sz = nums2.size();
        for (int i = (sz - 1); i >= 0; --i)
        {
            while (!stk.empty() && stk.top() <= nums2[i])
            {
                stk.pop();
            }
            umap[nums2[i]] = stk.empty() ? -1 : stk.top();
            stk.push(nums2[i]);
        }
        vector<int> ans;
        for (int num : nums1)
        {
            ans.push_back(umap[num]);
        }
        return ans;
    }
};