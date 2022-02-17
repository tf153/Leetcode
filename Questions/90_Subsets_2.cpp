class Solution {
    void fun(vector<int>& nums,set<vector<int>> &st,vector<int> temp,int n){
        if(n<0){
            sort(temp.begin(),temp.end());
            st.insert(temp);
            return;
        }
        fun(nums,st,temp,n-1);
        temp.push_back(nums[n]);
        fun(nums,st,temp,n-1);
        return;
    }
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        set<vector<int>> st;
        vector<int> temp;
        fun(nums,st,temp,nums.size()-1);
        vector<vector<int>> ans(st.begin(),st.end());
        return ans;
    }
};