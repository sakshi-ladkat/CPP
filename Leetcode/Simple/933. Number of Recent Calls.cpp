class RecentCounter
{
public:
    RecentCounter()
    {
    }
    queue<int> Q;
    int ping(int t)
    {
        Q.push(t);
        int temp = t - 3000;
        while (Q.front() < temp)
            Q.pop();
        return Q.size();
    }
};