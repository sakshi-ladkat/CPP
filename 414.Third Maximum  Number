class Solution {
public:
    int thirdMax(vector<int>& nums) {

        std::set<int>topThree;
        for(int num : nums)
        {
            topThree.insert(num);

            if(topThree.size()>3)
               topThree.erase(topThree.begin());
        }

        if(topThree.size()<3)
        {
            return *topThree.rbegin();
        }
        return *topThree.begin();
    }
};


