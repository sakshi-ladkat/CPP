class Solution
{
public:
    void dfs(vector<vector<char>> &board, int i, int j)
    {
        int r = board.size();
        int c = board[0].size();

        if (i < 0 || i >= r || j < 0 || j >= c || board[i][j] != 'O')
            return;

        board[i][j] = 'A'; // Mark visited and safe
        dfs(board, i + 1, j);
        dfs(board, i - 1, j);
        dfs(board, i, j + 1);
        dfs(board, i, j - 1);
    }

    void solve(vector<vector<char>> &board)
    {
        int r = board.size();
        if (r <= 2)
            return;
        int c = board[0].size();
        if (c <= 2)
            return;

        // Step 1: DFS from border 'O's
        for (int i = 0; i < r; i++)
        {
            if (board[i][0] == 'O')
                dfs(board, i, 0);
            if (board[i][c - 1] == 'O')
                dfs(board, i, c - 1);
        }
        for (int j = 0; j < c; j++)
        {
            if (board[0][j] == 'O')
                dfs(board, 0, j);
            if (board[r - 1][j] == 'O')
                dfs(board, r - 1, j);
        }

        // Step 2: Flip surrounded 'O's to 'X', and restore 'A' to 'O'
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (board[i][j] == 'O')
                    board[i][j] = 'X';
                else if (board[i][j] == 'A')
                    board[i][j] = 'O';
            }
        }
    }
};