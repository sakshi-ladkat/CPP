class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        int sz = s.size();
        vector<int> ans;

        for (int i = 0; i < sz; i++) {
            int minDist = sz;  
            for (int j = 0; j < sz; j++) {
                if (s[j] == c) {
                    int dist = abs(j - i);
                    minDist = min(minDist, dist);
                }
            }
            ans.push_back(minDist);
        }
        return ans;
    }
};

