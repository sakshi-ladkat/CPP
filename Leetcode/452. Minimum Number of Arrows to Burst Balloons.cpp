class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
           if (points.empty()) return 0;
       sort(points.begin(), points.end(), [](const vector<int>& a, const vector<int>& b) {
    return a[1] < b[1];
});
        int arrpos = points[0][1];
        int sz = points.size();
        int arrcnt = 1;
        for(int i=1;i<sz;i++)
        {
            if(points[i][0] > arrpos)
            {
                arrcnt += 1;
                arrpos = points[i][1];
            }
        }
        return arrcnt;      
    }
};