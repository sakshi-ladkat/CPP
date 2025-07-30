class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string>m = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

        queue<string>q;
        q.push("");
        for(char d: digits)
        {
            string letters = m[d-'0'];
            int k=q.size();
            while(k > 0)
            {
                string curr = q.front();
                q.pop();
                for(char L : letters)
                {
                    q.push(curr + L);
                }
                --k;
            }
        }
        vector<string>ans;
        while(!q.empty())
        {
            ans.push_back(q.front());
            q.pop();
        }
        return ans;
    }
};
