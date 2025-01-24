class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        int sz1=nums1.size();
        int sz2=nums2.size();
        int ans=0;

       if(sz1%2!=0)
       for(auto n: nums2)
       {
           ans^=n;
       }

       if(sz2%2!=0)
        for(auto n: nums1)
        {
            ans ^=n;
        }
        return ans;
    }
};sssss