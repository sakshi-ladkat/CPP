#include <vector>
#include <stack>

using namespace std;

class Solution
{
public:
    vector<int> dailyTemperatures(vector<int> &temperatures)
    {
        int size = temperatures.size();
        vector<int> result(size, 0);
        stack<int> stk;

        for (int i = 0; i < size; i++)
        {
            while (!stk.empty() && temperatures[i] > temperatures[stk.top()])
            {
                int prevIndex = stk.top();
                stk.pop();
                result[prevIndex] = i - prevIndex;
            }
            stk.push(i);
        }
        return result;
    }
};