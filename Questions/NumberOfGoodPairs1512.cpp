#include <bits/stdc++.h>
using namespace std;
class Solution
{
private:
    int c[101];
    int ncr(int n)
    {
        if (c[n] != -1)
        {
            return c[n];
        }
        return c[n] = ncr(n - 1) + n - 1;
    }

public:
    Solution()
    {
        memset(c, -1, sizeof c);
        c[0] = 0;
        c[1] = 0;
        c[2] = 1;
    }
    int numIdenticalPairs(vector<int> &nums)
    {
        unordered_map<int, int> mp;
        for (int n : nums)
        {
            mp[n]++;
        }
        int ans = 0;
        for (pair<int, int> p : mp)
        {
            if (p.second > 1)
            {
                ans += ncr(p.second);
            }
        }
        return ans;
    }
};