class Solution {
public:
    string removeStars(string s) {
        vector<char>ans;
      for(char i : s)
      {
        if(i!= '*')
        {  
             ans.push_back(i);
        }
        else
        {
          ans.pop_back();  
        }
      }
    return string(ans.begin(), ans.end());;
    }
};
