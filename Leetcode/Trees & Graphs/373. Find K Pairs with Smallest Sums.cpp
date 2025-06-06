class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {

        auto comp =[&nums1,&nums2](pair<int,int>&a,pair<int,int>& b) 
        {
            return nums1[a.first] + nums2[a.second] > nums1[b.first]+nums2[b.second];
        };

        priority_queue<pair<int,int>,vector<pair<int,int>>,decltype(comp)>minHeap(comp);
        vector<vector<int>>result;
        if(nums1.empty() || nums2.empty() || k<=0)
           return result;
        for(int i=0;i<min((int)nums1.size(),k);i++)
           minHeap.emplace(i,0);
        while(k-- > 0 && !minHeap.empty())
        {
            auto idxpair = minHeap.top(); minHeap.pop();
            result.push_back({nums1[idxpair.first],nums2[idxpair.second]});
            if(idxpair.second == nums2.size()-1) continue;
            minHeap.emplace(idxpair.first,idxpair.second+1);
        }
          return result;
        
    }
};