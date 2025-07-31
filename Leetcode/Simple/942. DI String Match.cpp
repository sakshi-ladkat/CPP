class Solution {
public:
    vector<int> diStringMatch(string s) {
        int sz=s.size();
        vector<int>ans;
        int ci=0,cd=sz;
        for(int i=0;i<sz;i++)
        {
            if(ans.size()<sz)
            {
            if(s[i]=='I' ) 
               ans.push_back(ci),ci++;
            else
               ans.push_back(cd),cd--;
            }
        }
        return ans;
    }
};
