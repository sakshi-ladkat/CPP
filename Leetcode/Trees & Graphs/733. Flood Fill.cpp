class Solution
{
public:
    void dfs(vector<vector<int>> &image, int x, int y, int newColor, int originalColor)
    {
        if (x < 0 || y < 0 || x >= image.size() || y >= image[0].size())
            return;
        if (image[x][y] != originalColor)
            return;

        image[x][y] = newColor;
        dfs(image, x - 1, y, newColor, originalColor); // T - UP
        dfs(image, x + 1, y, newColor, originalColor); // B - Down
        dfs(image, x, y + 1, newColor, originalColor); // R - Right
        dfs(image, x, y - 1, newColor, originalColor); // L - Left
    }

    vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc, int color)
    {

        int originalColor = image[sr][sc];
        if (originalColor != color)
            dfs(image, sr, sc, color, originalColor);
        return image;
    }
};