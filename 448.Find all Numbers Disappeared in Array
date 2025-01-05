class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n =nums.size();
        vector<bool>array(n + 1, false);;
         vector<int>ans;
        for(int i : nums)
        {
            array[i]=true;
        }
        for(int i=1;i<=n;i++)
        {
            if(!array[i])
            {
                ans.push_back(i);
            }  
         }
             return ans;
    }
};
