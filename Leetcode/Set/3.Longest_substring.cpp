class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        std::unordered_set<char>st;
        int left=0,right=0,ans=0;
        int n=s.length();
            while(right< n)
            {
             if(st.count(s[right])==0)
             {
                st.insert(s[right]);
                  right++;
                ans=max(ans,right-left);   
             }
            else
            {
                  st.erase(s[left]);
                  left++;
            } 
            }
        return ans;
    }
};