class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
    int sz=candies.size();
     vector<bool>ans(0,sz-1);
      auto max_it = std::max_element(candies.begin(), candies.end());
      *max_it=*max_it-extraCandies;
      for(int i:candies)
      {
          ans.push_back(i>=*max_it);
      }
      return ans;
    }
};