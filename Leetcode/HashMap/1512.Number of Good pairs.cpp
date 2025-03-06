class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int n=nums.size();
        std::unordered_map<int,int>umap;
        for(int i=0;i<n;i++)
        umap[nums[i]]++;
        int cnt=0;
        for(auto e:umap)
        {
            if (e.second>1)
              cnt += (e.second*(e.second-1))/2;
        }
        return cnt;
    }
};