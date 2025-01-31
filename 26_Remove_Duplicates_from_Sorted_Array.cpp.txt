class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int sz=nums.size();
        int cnt=0;
        for(int i=0;i<sz-1;i++)
        {
            if(nums[i]!=nums[i+1])
            {
                cnt++;
            }
            nums[cnt]=nums[i+1];
        }
        return cnt+1;
        
    }
};