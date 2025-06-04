class Solution
{
private:
    void bfs(int row, int col, vector<vector<int>> &vis, vector<vector<char>> &grid)
    {
        vis[row][col] = 1;
        queue<pair<int, int>> q;
        q.push({row, col});
        int n = grid.size();
        int m = grid[0].size();

        while (!q.empty())
        {
            int r = q.front().first;
            int c = q.front().second;
            q.pop();

            // Traverse 4 directions (up, down, left, right)
            int delRow[] = {-1, 0, 1, 0};
            int delCol[] = {0, 1, 0, -1};

            for (int i = 0; i < 4; i++)
            {
                int nrow = r + delRow[i];
                int ncol = c + delCol[i];

                if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m &&
                    grid[nrow][ncol] == '1' && !vis[nrow][ncol])
                {
                    vis[nrow][ncol] = 1;
                    q.push({nrow, ncol});
                }
            }
        }
    }

public:
    int numIslands(vector<vector<char>> &grid)
    {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> vis(n, vector<int>(m, 0));
        int count = 0;

        for (int row = 0; row < n; row++)
        {
            for (int col = 0; col < m; col++)
            {
                if (!vis[row][col] && grid[row][col] == '1')
                {
                    count++;
                    bfs(row, col, vis, grid);
                }
            }
        }

        return count;
    }
};