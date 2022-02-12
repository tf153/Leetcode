class Solution {
public:
    int maxSubArray(vector<int>& a) {
        int size=a.size();
        int m = a[0];
        int curr = a[0];

        for (int i = 1; i < size; i++)
        {
            curr = max(a[i], curr+a[i]);
            m = max(m, curr);
        }
        return m;
    }
};