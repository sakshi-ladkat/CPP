class Solution
{
public:
    int timeRequiredToBuy(vector<int> &tickets, int k)
    {
        int sz = tickets.size();
        int time = 0;
        queue<int> Q1;
        for (int i = 0; i < sz; i++)
            Q1.push(i);
        while (!Q1.empty())
        {
            int fid = Q1.front();
            Q1.pop();
            tickets[fid]--;
            time++;
            if (tickets[fid] > 0)
                Q1.push(fid);
            if (tickets[k] == 0)
                return time;
        }
        return 0;
    }
};