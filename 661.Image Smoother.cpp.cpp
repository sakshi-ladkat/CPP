class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        int rows=img.size();
        int cols=img[0].size();
        vector<vector<int>>ans(rows, vector<int>(cols, 0));
        for(int i=0;i<rows;i++)
        for(int j=0;j<cols;j++)
        {
            int sr=i==0?0:i-1;
            int er=i==rows-1?rows-1:i+1;
            int sc=j==0?0:j-1;
            int ec=j==cols-1?cols-1:j+1;
            int cnt=0,val=0;
            for(int k=sr;k<=er;k++)
            for(int l=sc;l<=ec;l++)
            {
                 val+=img[k][l];
                 cnt++;
            }
           ans[i][j]=val/cnt;
        }
        return ans;
    }
};
