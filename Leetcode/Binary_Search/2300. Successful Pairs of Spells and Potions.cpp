class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        vector<int>pairs;
       int ss=spells.size();
        int ps=potions.size();

        sort(potions.begin(),potions.end());
        for(int spell : spells)
        {
            int low = 0 , high = ps;
            while(low < high)
            {
                int mid = low + (high - low)/2;
                if((long long)spell* potions[mid] >= success)
                   high = mid;
                else
                    low = mid + 1;
            }
            pairs.push_back(ps-low);
        }
       return pairs;    
    }
};