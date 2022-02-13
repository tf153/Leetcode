class Solution {
    void solve(vector<int> &nums,int n,vector<vector<int>> &ans,vector<int>temp){
        if(n>=nums.size()){
            ans.push_back(temp);
            return;
        }
        solve(nums,n+1,ans,temp);
        temp.push_back(nums[n]);
        solve(nums,n+1,ans,temp);
        return;
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        solve(nums,0,ans,temp);
        return ans;
    }
};