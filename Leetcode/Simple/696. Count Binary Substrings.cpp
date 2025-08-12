class Solution {
public:
    int countBinarySubstrings(string s) {
        int prevCount = 0; // length of previous group
        int currCount = 1; // length of current group
        int result = 0;

        for (int i = 1; i < s.size(); i++) {
            if (s[i] == s[i-1]) {
                currCount++;
            } else {
                result += min(prevCount, currCount);
                prevCount = currCount;
                currCount = 1;
            }
        }

        result += min(prevCount, currCount);
        return result;
    }
};
