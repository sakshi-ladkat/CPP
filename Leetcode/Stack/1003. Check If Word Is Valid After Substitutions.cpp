class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> stk;
        for (auto e : s)
        {
            if (e != 'c')
            {
                stk.push(e);
            }
            else if (stk.size() >= 2)
            {
                if (stk.top() != 'b')
                    return false;
                else
                    stk.pop();
                if (stk.top() != 'a')
                    return false;
                else
                    stk.pop();
            }
        }
        return stk.empty();
    }
};