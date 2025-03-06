class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        bool lft,rgt;
        int i,cnt=0;
        int sz=flowerbed.size();
       for(i=0;i<sz;i++)
       {
        if((flowerbed[i]==0) && 
        (i==0 ||flowerbed[i-1]==0) && 
        (i==sz-1 ||flowerbed[i+1]==0 ))
       {
            flowerbed[i]=1;
            cnt++;
       }
       }
        return(cnt>=n);
    }
};
