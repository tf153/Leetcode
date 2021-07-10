class Solution
{
public:
    int findLength(vector<int> &a, vector<int> &b)
    {
        int n = a.size(), m = b.size();
        int dp[n + 1][m + 1];
        for (int i = 0; i <= n; i++)
        {
            for (int j = 0; j <= m; j++)
            {
                dp[i][j] = 0;
            }
        }
        int max = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            for (int j = m - 1; j >= 0; j--)
            {
                if (a[i] == b[j])
                {
                    dp[i][j] = 1 + dp[i + 1][j + 1];
                    max = max > dp[i][j] ? max : dp[i][j];
                }
            }
        }
        return max;
    }
};