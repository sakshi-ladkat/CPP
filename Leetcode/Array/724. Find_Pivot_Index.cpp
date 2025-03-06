class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int ls=0,rs=0;
        int n=nums.size();
       rs= accumulate(nums.begin(), nums.end(), 0);
        int i=0;
        for(int i=0;i<n;i++)
        {
            rs=rs-nums[i];
            if(ls==rs)
              return i;
            ls=ls+nums[i];
        }
        return -1;
    }
};