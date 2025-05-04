class Solution
{
public:
    bool isBipartite(vector<vector<int>> &graph)
    {

        int n = graph.size();
        vector<int> color(n, -1);
        for (int i = 0; i < n; ++i)
        {
            if (color[i] == -1)
            {
                queue<int> q;
                q.push(i);

                color[i] = 0;

                while (!q.empty())
                {
                    int u = q.front();
                    q.pop();

                    for (int v : graph[u])
                    {
                        if (color[v] == -1)
                        {
                            color[v] = 1 - color[u]; // opposite color
                            q.push(v);
                        }
                        else if (color[v] == color[u])
                            return false;
                    }
                }
            }
        }
        return true;
    }
};