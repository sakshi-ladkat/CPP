class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int result = 0;
        int l = 0;
        int r = height.size() - 1;
        while (l < r)
        {
            int area = (r - l) * std::min(height[l], height[r]);
            result = max(result, area);
            if (height[l] < height[r])
                l += 1;
            else
                r -= 1;
        }
        return result;
    }
};