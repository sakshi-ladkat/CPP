class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int m=0;
        int r=accounts.size();
        int c =accounts[0].size();
        for(int i=0;i<r;i++)
        {
            int temp=0;
            for(int j=0;j<c;j++)
            {
            temp += accounts[i][j];
            }
            m=max(m,temp);
        }
       return m; 
    }
};