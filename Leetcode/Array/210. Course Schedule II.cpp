class Solution
{
public:
    vector<int> findOrder(int numCourses, vector<vector<int>> &prerequisites)
    {
        int n = numCourses;
        vector<vector<int>> adj(n);
        vector<int> indegree(n, 0);

        // Build adjacency list and indegree array
        for (auto &prereq : prerequisites)
        {
            int course = prereq[0];
            int pre = prereq[1];
            adj[pre].push_back(course);
            indegree[course]++;
        }

        // 1) Enqueue only those courses with indegree == 0
        queue<int> q;
        for (int i = 0; i < n; i++)
        {
            if (indegree[i] == 0)
            {
                q.push(i);
            }
        }

        vector<int> topo;
        int countVisited = 0;

        // 2) Standard Kahn’s loop
        while (!q.empty())
        {
            int u = q.front();
            q.pop();
            topo.push_back(u);
            countVisited++;

            for (int v : adj[u])
            {
                indegree[v]--;
                if (indegree[v] == 0)
                {
                    q.push(v);
                }
            }
        }

        // If we processed all n courses, return topo order; otherwise, return empty
        if (countVisited == n)
        {
            return topo;
        }
        else
        {
            return {};
        }
    }
};
