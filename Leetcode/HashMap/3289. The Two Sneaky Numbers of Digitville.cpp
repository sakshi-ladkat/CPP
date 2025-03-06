class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        int sz=nums.size();
        std::unordered_map<int,int>umap;
        vector<int>ans;
        for(int i=0;i<sz;i++)
        {
            if(umap.find(nums[i])!=umap.end())
               ans.push_back(nums[i]);
            else
              umap[nums[i]]=1;
        }
        return ans;
        
    }
};