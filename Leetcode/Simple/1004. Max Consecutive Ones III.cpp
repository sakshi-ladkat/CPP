class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left = 0 , Zcnt , maxL=0;
        int sz = nums.size();
        for(int i = 0;i<sz;i++)
        {
            if(nums[i] == 0)
              ++Zcnt;
            while(Zcnt > k)
            {
                if(nums[left] == 0)
                  --Zcnt;
                left++;
            }
            maxL = max(maxL,(i-left+1));
        }
        return maxL;
    }
};