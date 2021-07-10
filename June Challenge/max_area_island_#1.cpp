class Solution
{
private:
    int area(vector<vector<int>> &grid, int m, int n, int i, int j)
    {
        queue<pair<int, int>> q;
        int ans = 1;
        q.push({i, j});
        grid[i][j] = 2;
        while (!q.empty())
        {
            auto a = q.front();
            q.pop();
            if (a.first - 1 >= 0 && grid[a.first - 1][a.second] == 1)
            {
                q.push({a.first - 1, a.second});
                grid[a.first - 1][a.second] = 2;
                ans++;
            }
            if (a.first + 1 < m && grid[a.first + 1][a.second] == 1)
            {
                q.push({a.first + 1, a.second});
                grid[a.first + 1][a.second] = 2;
                ans++;
            }
            if (a.second - 1 >= 0 && grid[a.first][a.second - 1] == 1)
            {
                q.push({a.first, a.second - 1});
                grid[a.first][a.second - 1] = 2;
                ans++;
            }
            if (a.second + 1 < n && grid[a.first][a.second + 1] == 1)
            {
                q.push({a.first, a.second + 1});
                grid[a.first][a.second + 1] = 2;
                ans++;
            }
        }
        return ans;
    }

public:
    int maxAreaOfIsland(vector<vector<int>> &grid)
    {
        int m = grid.size();
        int n = grid[0].size();
        int ma = 0, a;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (grid[i][j] == 1)
                {
                    a = area(grid, m, n, i, j);
                    ma = ma > a ? ma : a;
                }
            }
        }
        return ma;
    }
};