class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int size = nums.size();
        int i = 0; // even index
        int j = 1; // odd index

        while (i < size && j < size) {
          
            if (nums[i] % 2 != 0 && nums[j] % 2 == 0) {
                swap(nums[i], nums[j]);
            }

            if (nums[i] % 2 == 0) i += 2;
            if (nums[j] % 2 != 0) j += 2;
        }
        return nums;
    }
};
