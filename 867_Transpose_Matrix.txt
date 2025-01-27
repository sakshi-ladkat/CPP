class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int r=matrix.size();
        int c=matrix[0].size();
        int i,j;
        vector<vector<int>>ans(c,vector<int>(r,0));
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
               ans[j][i]=matrix[i][j];
            }
        } 
        return ans;
}
};