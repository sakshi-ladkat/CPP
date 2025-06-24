class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int max = *max_element(piles.begin(),piles.end());
        int low = 1 , high = max;
        int result = max;
        while(low <= high)
        {
            int mid = low + (high - low)/2;
            long long hours = 0;
            for(int j = 0;j<piles.size();++j)
               hours += ceil(piles[j]/(double)mid);
            if(hours <= h)
            {
                result = mid;
                high = mid - 1;

            }
            else
            {
                low = mid+1;
            }
        }
        return result;
    }
};