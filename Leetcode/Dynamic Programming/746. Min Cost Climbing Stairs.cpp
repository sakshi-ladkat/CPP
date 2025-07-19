class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int sz=cost.size();
        vector<int>dp(sz+1,0);
        dp[0]=0;
        dp[1]=0;
        for(int i=2;i<=sz;i++)
        {
            dp[i]=min(dp[i-1]+cost[i-1],dp[i-2]+cost[i-2]);
        }
        return dp[sz];
    }
};
