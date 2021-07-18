class Solution
{
public:
    int triangleNumber(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int len = nums.size();
        long ans = 0;
        for (int k = len - 1; k > 1; k--)
        {
            int i = 0, j = k - 1;
            while (i < j)
            {
                if (nums[i] + nums[j] > nums[k])
                {
                    ans += j - i;
                    j -= 1;
                }
                else
                {
                    i += 1;
                }
            }
        }
        return ans;
    }
};