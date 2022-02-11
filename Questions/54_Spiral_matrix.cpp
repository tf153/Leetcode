class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int R=matrix.size(),C=matrix[0].size();
        int t = 0, l = 0, r = C - 1, b = R - 1;
        bool fwd = true;
        while (t <= b && l<=r)
        {
            if (fwd)
            {
                for (int i = l; i <= r; i++)
                {
                    ans.push_back(matrix[t][i]);
                }
                t++;
            }
            if (fwd)
            {
                for (int i = t; i <= b; i++)
                {
                    ans.push_back(matrix[i][r]);
                }
                r--;
            }
            if (!fwd)
            {
                for (int i = r; i >= l; i--)
                {
                    ans.push_back(matrix[b][i]);
                }
                b--;
            }
            if (!fwd)
            {
                for (int i = b; i >= t; i--)
                {
                    ans.push_back(matrix[i][l]);
                }
                l++;
            }
            fwd = !fwd;
        }
        return ans;
    }
};