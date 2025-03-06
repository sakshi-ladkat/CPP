class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>ans(n+1,0);
        for(int i=0;i<=n;i++)
        {
            int tmp=i;
             int cnt=0;
            while(tmp!=0)
            {
               cnt+=tmp&1;
                tmp=tmp>>1;
            }
            ans[i]=cnt;
        }
        return ans;    
    }
};
