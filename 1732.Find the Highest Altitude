class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int max=0 ,alt=0;
        int n=gain.size();
        for(int i=0;i<n;i++)
        {
            alt +=gain[i];
            if(alt>max)
            {
                max=alt;
            }
        }
        return max;
    }
};
