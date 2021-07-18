#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        vector<int> ans(2);
        int i = 0, j = nums.size() - 1;
        vector<int> temp = nums;
        sort(nums.begin(), nums.end());
        while (i < j)
        {
            int sum = nums[i] + nums[j];
            if (sum > target)
            {
                j--;
            }
            else if (sum < target)
            {
                i++;
            }
            else
            {
                for (int l = 0; l < nums.size(); l++)
                {
                    if (temp[l] == nums[i])
                    {
                        ans[0] = l;
                        nums[i] = -1;
                    }
                    else if (temp[l] == nums[j])
                    {
                        ans[1] = l;
                        nums[j] = -1;
                    }
                }
                return ans;
            }
        }

        return ans;
    }
};