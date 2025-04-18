#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
public:
    int maxProduct(vector<int> &nums)
    {
        int maxPro = nums[0];
        int curMax = 1;
        int curMin = 1;
        int n = nums.size();

        for (int i = 0; i < n; i++)
        {
            if (nums[i] == 0)
            {
                curMax = 0;
                curMin = 0;
                maxPro = max(maxPro, 0);
            }

            int tmp = curMax * nums[i];
            curMax = max(nums[i], max(tmp, curMin * nums[i]));
            curMin = min(nums[i], min(tmp, curMin * nums[i]));

            maxPro = max(maxPro, curMax);

            if (nums[i] == 0)
            {
                curMax = 1;
                curMin = 1;
            }
        }
        return maxPro;
    }
};