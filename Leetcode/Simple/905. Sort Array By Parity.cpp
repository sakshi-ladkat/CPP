class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int size = nums.size();
        int i = 0; // even index
        int j = size-1; // odd index

        while (i<j) {
          
            if (nums[i] % 2 != 0 && nums[j] % 2 == 0) {
                swap(nums[i], nums[j]);
                i++;
                j--;
            }

            if (nums[i] % 2 == 0) i ++;
            if (nums[j] % 2 != 0) j --;
        }
        return nums;
    }
};
