class Solution
{
public:
    int calPoints(vector<string> &operations)
    {
        stack<int> stk;
        for (auto o : operations)
        {
            if (o == "C" && !stk.empty())
            {
                stk.pop();
            }
            else if (o == "D" && !stk.empty())
            {
                stk.push(2 * stk.top());
            }
            else if (o == "+" && !stk.empty())
            {
                int temp = stk.top();
                stk.pop();
                int n = temp + stk.top();
                stk.push(temp);
                stk.push(n);
            }
            else
            {
                stk.push(stoi(o));
            }
        }
        int ans = 0;
        while (!stk.empty())
        {
            ans += stk.top();
            stk.pop();
        }
        return ans;
    }
};