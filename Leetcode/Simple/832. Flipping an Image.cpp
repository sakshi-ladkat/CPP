class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int c = image[0].size();
        for(auto& row: image){
           for(int i=0;i<(c+1)/2;++i)
           {
            int tmp = row[i];
            row[i] = 1-row[c-1-i];
            row[c-1-i]=1-tmp;
           } 
        }
        return image; 
    }
};
