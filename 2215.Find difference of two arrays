class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) 
    {
        int sz1=nums1.size() , sz2=nums2.size();

        unordered_set<int> u_set , u_set2;
        for(int i=0;i<sz1;i++)
           u_set.insert(nums1[i]);
        for(int i=0;i<sz2;i++)
           u_set2.insert(nums2[i]);

           vector<int>l1,l2;
           for(auto e : u_set)
             if(!u_set2.count(e))
               l1.push_back(e);
            for(auto e : u_set2)
              if(!u_set.count(e))
                l2.push_back(e);

           vector<vector<int>>ans;
           ans.push_back(l1);
           ans.push_back(l2);
           return ans;      
    }
    };
