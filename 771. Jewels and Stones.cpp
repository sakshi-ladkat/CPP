class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int sz=stones.size();
        int js=jewels.size();
        std::unordered_map<char,int>umap;
        for(int i=0;i<sz;i++)
        umap[stones[i]]++;
        int cnt=0;
        for(int i=0;i<js;i++)
        {
            if(umap.find(jewels[i])!=umap.end())
              cnt+=umap[jewels[i]];
        }
        return cnt;   
    }
};