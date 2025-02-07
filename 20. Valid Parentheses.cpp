class Solution
{
public:
    bool isValid(string s)
    {
        std::stack<char> stk;
        for (auto e : s)
        {
            if (e == '(' || e == '{' || e == '[')
                stk.push(e);
            else
            {
                if (stk.empty())
                    return false;
                char top = stk.top();
                if ((e == ')' && top == '(') ||
                    (e == '}' && top == '{') ||
                    (e == ']' && top == '['))
                    stk.pop();
                else
                {
                    return false;
                }
            }
        }
        return (stk.empty());
    }
};