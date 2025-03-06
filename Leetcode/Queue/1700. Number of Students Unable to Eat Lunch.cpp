class Solution
{
public:
    int countStudents(vector<int> &students, vector<int> &sandwiches)
    {
        queue<int> Q;
        int index = 0, rot = 0;
        for (auto s : students)
            Q.push(s);
        while (!Q.empty() && rot < Q.size())
        {
            if (Q.front() == sandwiches[index])
            {
                Q.pop();
                ++index;
                rot = 0;
            }
            else
            {
                Q.push(Q.front());
                Q.pop();
                rot++;
            }
        }
        return Q.size();
    }
};