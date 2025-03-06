class Solution {
public:
    bool isAnagram(string s, string t) {
        int sz=s.size();
        int tz=t.size();
        if(sz!=tz) return false;
        std::unordered_map<char,int>umap;
        for(int i=0;i<sz;i++)
           umap[s[i]]++;

        for(int i=0;i<tz;i++)
        {
             if(umap.find(t[i])!=umap.end() && umap[t[i]]>0)
                 {  umap[t[i]]--; }
            else
            { return false;}
        }
             for (int i = 0; i < sz; i++)
        {
            if (umap[s[i]] != 0)
            {
                    return false;
            }     
        }
           return true;
    }
};