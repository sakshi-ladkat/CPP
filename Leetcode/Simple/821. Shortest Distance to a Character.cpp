class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        int sz = s.size();
        vector<int>ans;
        for(int i=0;i<sz;i++)
        {
            for(int j=i;j<sz;j++)
            {
                if(s[j]==c)
                {
                      ans.push_back(j-i);
                      break;
                }
                
            }
        }
        return ans;
    }
};
