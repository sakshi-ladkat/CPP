class Solution
{
public:
    vector<int> topKFrequent(vector<int> &nums, int k)
    {
        unordered_map<int, int> um;
        for (int i = 0; i < nums.size(); i++)
        {
            um[nums[i]]++;
        }
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> minHeap;
        for (auto &[num, count] : um)
        {
            minHeap.push({count, num});
            if (minHeap.size() > k)
                minHeap.pop();
        }
        vector<int> ans;
        while (!minHeap.empty())
        {
            ans.push_back(minHeap.top().second);
            minHeap.pop();
        }
        return ans;
    }
};