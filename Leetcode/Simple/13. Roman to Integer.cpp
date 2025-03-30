class Solution
{
public:
    int romanToInt(string s)
    {
        int ans = 0;
        int n = s.size();
        unordered_map<char, int> map{{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
        for (int i = 0; i < n; i++)
        {
            if (map[s[i]] < map[s[i + 1]])
            {
                ans = ans - map[s[i]];
            }
            else
            {
                ans = ans + map[s[i]];
            }
        }
        return ans;
    }
};