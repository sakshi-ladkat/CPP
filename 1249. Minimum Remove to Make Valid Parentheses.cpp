class Solution
{
public:
    string minRemoveToMakeValid(string s)
    {
        int sz = s.size();
        stack<int> stk;
        for (int i = 0; i < sz; i++)
        {
            if (s[i] == '(')
            {
                stk.push(i);
            }
            else if (s[i] == ')')
            {
                if (!stk.empty())
                {
                    stk.pop();
                }
                else
                {
                    s[i] = '#';
                }
            }
        }
        while (!stk.empty())
        {
            s[stk.top()] = '#';
            stk.pop();
        }
        string ans = "";
        for (auto e : s)
        {
            if (e != '#')
                ans += e;
        }
        return ans;
    }
};